#include "Player.hpp"
#include "Duke.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace coup;

coup::Duke::Duke(Game g, string Name){
    this->game = g;
    this->name = Name;
    this->game.add_player(this->name);
    this->coins_amount = 0;
}

coup::Duke::~Duke(){}

void coup::Duke::block(Player p){
    /**
     * if( p's last play was income -> exeption).
     * else{
     *      Block shit. --> p lose 2 coins.
     * }
     */

}

void coup::Duke::tax(){
    this->coins_amount += 3;
}
