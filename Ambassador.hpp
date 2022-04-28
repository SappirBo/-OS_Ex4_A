#include "Player.hpp"
#include <iostream>
#include <string>
#pragma once

using namespace std;

namespace coup
{
    class Ambassador: public coup::Player
    {
        public:
        Ambassador(const Game g, string Name);
        ~Ambassador();
            
        void transfer(Player p1, Player p2);
        void block(Player p);
    };
}