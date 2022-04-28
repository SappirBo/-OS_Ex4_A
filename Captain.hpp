#include "Player.hpp"
#include <iostream>
#include <string>
#pragma once

using namespace std;

namespace coup
{
    class Captain: public coup::Player
    {
    public:
    Captain(Game g, string Name);
    ~Captain();
    void block(Player p);
    void steal(Player p);
    };
}