//
//  Board.cpp
//  wargame-a
//
//  Created by Lee Fingerhut on 22/05/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//

#include "Board.hpp"
#include "Soldier.hpp"

using namespace std;

namespace WarGame {
Soldier *& Board::operator[](std::pair<int, int> location) {
    return board[location.first][location.second];
}
Soldier* Board::operator[](std::pair<int,int> location) const{
    return board[location.first][location.second];
}
void Board::move(uint num_Of_Player, std::pair<int,int> source, MoveDIR direction){
    return;
}

bool Board::has_soldiers(uint player_number) const
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] != nullptr && board[i][j]->getNum_Of_Player() == player_number ){
                return true;
            }
        }
    }
    return false;
}
}
