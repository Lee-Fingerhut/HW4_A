//
//  FootCommander.cpp
//  wargame-a
//
//  Created by Lee Fingerhut on 22/05/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//

#include "FootCommander.hpp"

namespace WarGame{
void FootCommander::activity(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> loc){
    FootSoldier* s = nullptr;
    std::pair<int,int> ps_loc;
    for(int i=0; i<board.size(); i++) {
        for(int j=0; j<board[i].size(); j++) {
            s = dynamic_cast<FootSoldier*>(board[i][j]);
            if (s != nullptr && s->getNum_Of_Player() == this->getNum_Of_Player()) {
                if (s->getType() == SoldierID::FootSoldier || s->getType() == SoldierID::FootCommander) {
                    ps_loc = std::make_pair(i,j);
                    s->FootSoldier::activity(board, ps_loc);
                    s = nullptr;
                }
            }
        }
    }
}
}
