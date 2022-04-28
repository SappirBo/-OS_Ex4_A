#include "Player.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace coup;

coup::Contessa::Contessa(Game g, string Name){
    this->game = g;
    this->name = Name;
    this->game.add_player(this->name);
    this->coins_amount = 0;
}

coup::Contessa::~Contessa(){}

void coup::Contessa::block(Player p){
    /**
     *  if p's last move was assassination of as -> it's blocked.
     */
}

