//
//  FootSoldier.cpp
//  wargame-a
//
//  Created by Lee Fingerhut on 22/05/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//
#include "FootSoldier.hpp"

namespace WarGame{
void FootSoldier::activity(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> loc) {
    long mindistance = board.size()*board.size() +  board[0].size()* board[0].size() + 1;
    Soldier* s = nullptr;
    Soldier* s_min = nullptr;
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            s = board[i][j];
            if (s != nullptr && s->getNum_Of_Player() != this->getNum_Of_Player()){
                long dist = (loc.first - i)*(loc.first - i) + (loc.second - j)*(loc.second - j);
                if(dist < mindistance){
                    mindistance = dist;
                    s_min = s;
                }
            }
        }
    }
    if(s_min != nullptr) {
        s_min->setHealth_points(s_min->getHealth_points() - this->getDamge());
        if (s_min->getHealth_points() <= 0) {
            delete s_min;
        }
    }
    
}
}
