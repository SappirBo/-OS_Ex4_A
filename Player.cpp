#include <iostream>
#include <string>
#include "Game.hpp"
#include "Player.hpp"

using namespace std;
using namespace coup;
coup::Player::Player(){
    this->name = "No Name";
    this->coins_amount = 0;
}
coup::Player::Player(const Game g, string Name){
    this->game = g;
    this->name = Name;
    this->game.add_player(this->name);
    this->coins_amount = 0;
}
coup::Player::~Player(){}
void coup::Player::income(){
    this->coins_amount +=  1;
}
void coup::Player::foreign_aid(){
    this->coins_amount +=  2;
}
void coup::Player::coup(Player p){
    this->coins_amount -= 7;
    this->game.kill(p.name);
}

