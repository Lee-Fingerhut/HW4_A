//
//  Paramedic.hpp
//  wargame-a
//
//  Created by Lee Fingerhut on 22/05/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//
#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class Paramedic : public  Soldier {
public:
    Paramedic(int player){
        health_points = 100;
        damage        = 100;
        num_Of_Player = player;
    }
       virtual void activity(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> loc);
};

