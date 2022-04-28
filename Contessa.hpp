#include "Player.hpp"
#include <iostream>
#include <string>
#pragma once

using namespace std;

namespace coup
{
    class Contessa: public coup::Player
    {
    public:
    Contessa(Game g, string Name);
    ~Contessa();

    void block(Player p);
    };
}