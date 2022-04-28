#include "Player.hpp"
#include "Assassin.hpp"
#include <iostream>
#include <string>
#include "Game.hpp"

using namespace std;
using namespace coup;

coup::Assassin::Assassin(Game g, string Name){
    this->game = g;
    this->name = Name;
    this->game.add_player(this->name);
    this->coins_amount = 0;
}

coup::Assassin::~Assassin(){}

void coup::Assassin::coup(Player p){
    /**
     * assassinate player 'p'. only Contessa can block the assassination.
     * 
     */
}

