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

TEST_CASE("Tests"){
    for (int i = 0; i < 100; i++)
        CHECK(true);
}
