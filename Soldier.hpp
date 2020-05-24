//
//  Soldier.hpp
//  wargame-a
//
//  Created by Lee Fingerhut on 22/05/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//
#pragma once

#include <iostream>
#include <vector>
#include <stdio.h>
//#include <sys/param.h>

using namespace std;
class Soldier{
    public:
    int health_points;
    int damage;
    uint num_Of_Player;

    Soldier(){}
    
    Soldier (int health_points, int damage, int num_Of_Player){
        this->health_points = health_points;
        this->damage = damage;
        this->num_Of_Player = num_Of_Player;
    }
    Soldier(int num_Of_Player){
        this->num_Of_Player = num_Of_Player;
        this->health_points = 0;
        this->damage = 0;
    }
    
    int getHealth_points(){
         return health_points;
    }
    int getDamge(){
        return damage;
    }
    int getNum_Of_Player(){
         return num_Of_Player;
     }
  virtual void activity(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> loc) = 0;;

};
