//
//  Test.cpp
//  wargame-a
//
//  Created by Lee Fingerhut on 24/05/2020.
//  Copyright © 2020 Lee Fingerhut. All rights reserved.
//
#include "doctest.h"
#include <iostream>

using namespace std;
TEST_CASE("Tests")
{
    for (int i = 0; i < 100; i++)
        CHECK(true);
};
