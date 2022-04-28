#include "Player.hpp"
#include <iostream>
#include <string>
#pragma once

using namespace std;

namespace coup
{
    class Assassin: public coup::Player
    {
    public:
    Assassin(Game g, string Name);
    ~Assassin();
    
    void coup(Player p);
    };
}