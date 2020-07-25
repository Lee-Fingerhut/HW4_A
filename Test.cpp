//
//  Test.cpp
//  wargame-a
//
//  Created by Lee Fingerhut on 24/05/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//
#include "doctest.h"
#include <iostream>
#include <stdexcept>

#include "DemoGame.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"
#include <cassert>

using namespace std;
using namespace WarGame;

TEST_CASE("Test 1"){
		Board board(8,8);

            CHECK(!board.has_soldiers(1));
            board[{0,0}] = new FootSoldier(1);
            board[{0,1}] = new FootSoldier(1);
			board[{0,2}] = new SniperCommander(1);
            board[{0,3}] = new FootCommander(1);
			board[{0,4}] = new FootSoldier(1);
            board[{0,5}] = new Sniper(1);
            board[{0,6}] = new ParamedicCommander(1);
			board[{0,7}] = new Paramedic(1);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
            board[{7,0}] = new FootSoldier(2);
            board[{7,1}] = new FootSoldier(2);
			board[{7,2}] = new SniperCommander(2);
            board[{7,3}] = new FootCommander(2);
			board[{7,4}] = new FootSoldier(2);
            board[{7,5}] = new Sniper(2);
            board[{7,6}] = new ParamedicCommander(2);
			board[{7,7}] = new Paramedic(2);
            CHECK(board.has_soldiers(2));
}

TEST_CASE("Test 2"){
		Board board(8,8);

            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(1));
            board[{0,0}] = new FootSoldier(1);
            board[{0,1}] = new FootSoldier(1);
			board[{0,2}] = new SniperCommander(1);
            board[{0,3}] = new FootCommander(1);
			board[{0,4}] = new FootSoldier(1);
            board[{0,5}] = new Sniper(1);
            board[{0,6}] = new ParamedicCommander(1);
			board[{0,7}] = new Paramedic(1);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
            board[{7,0}] = new FootSoldier(2);
            board[{7,1}] = new FootSoldier(2);
			board[{7,2}] = new SniperCommander(2);
            board[{7,3}] = new FootCommander(2);
			board[{7,4}] = new FootSoldier(2);
            board[{7,5}] = new Sniper(2);
            board[{7,6}] = new ParamedicCommander(2);
			board[{7,7}] = new Paramedic(2);
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1,{0,1}, Board::MoveDIR::Down));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1,{0,1}, Board::MoveDIR::Down));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1,{0,1}, Board::MoveDIR::Down));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1,{0,1}, Board::MoveDIR::Down));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1,{0,1}, Board::MoveDIR::Down));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1,{0,1}, Board::MoveDIR::Down));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1,{0,1}, Board::MoveDIR::Down));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1,{0,1}, Board::MoveDIR::Down));
            CHECK_THROWS(board.move(2,{7,7}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
                        CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
                        CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(2));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(1));


}

/*TEST_CASE("Tests"){
    for (int i = 0; i < 100; i++)
        CHECK(true);
}*/
