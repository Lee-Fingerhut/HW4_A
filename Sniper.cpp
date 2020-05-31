//
//  Sniper.cpp
//  wargame-a
//
//  Created by Lee Fingerhut on 22/05/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//

#include "Sniper.hpp"

namespace WarGame{
void Sniper::activity(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> loc){
    Soldier* s = nullptr;
    Soldier* s_max = nullptr;
    int max_health_points = 0;
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            s = board[i][j];
            if (s!= nullptr && s->getNum_Of_Player() != this->getNum_Of_Player()){
                int s_health_points = s->getHealth_points();
                if(s_health_points > max_health_points){
                    max_health_points = s_health_points;
                    s_max = s;
                }
            }
        }
    }
    if(s_max != nullptr) {
        s_max->setHealth_points(s_max->getHealth_points() - this->getDamge());
        if (s_max->getHealth_points() <= 0) {
            delete s_max;
        }
    }
}
}
