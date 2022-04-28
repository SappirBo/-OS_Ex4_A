#include <iostream>
#include <string>
#include "Game.hpp"
#pragma once

using namespace std;

namespace coup
{
    class Player
    {
    protected:
        string name;
        int coins_amount;
        Game game;
    public:
        Player();
        Player(const Game g, string Name);
        ~Player();

        void income ();
        void foreign_aid();
        void coup(Player p);

        string role();
        int coins(){
            return this->coins_amount;
        } 
    };
}