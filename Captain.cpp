#include "Player.hpp"
#include "Captain.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace coup;

coup::Captain::Captain(Game g, string Name){
    this->game = g;
    this->name = Name;
    this->game.add_player(this->name);
    this->coins_amount = 0;
}

coup::Captain::~Captain(){}

void coup::Captain::block(Player p){
    /**
     *  Can Block p's action.
     */
}

void coup::Captain::steal(Player p){
    /**
     *  Captain can steal 2 coins from p.
     * 
     */
}