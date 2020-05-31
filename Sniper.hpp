//
//  Sniper.hpp
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
namespace WarGame{
class Sniper : public  Soldier {
public:
    Sniper(int player) : Soldier(120, 100, player){
        initial_health_points = 120;
            type = SoldierID::Sniper;
    }
    void activity(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> loc);
};
}
