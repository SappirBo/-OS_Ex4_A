#include "Player.hpp"
#include "Ambassador.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace coup;

coup::Ambassador::Ambassador(const Game g, string Name){
    this->game = g;
    this->name = Name;
    this->game.add_player(this->name);
    this->coins_amount = 0;
}

coup::Ambassador::~Ambassador(){}

void coup::Ambassador::transfer(Player p1, Player p2){
    /**
     * can transfer 1 coin from p1 to p2.
     * 
     */
}

void coup::Ambassador::block(Player p){
    /**
     * if( p's last play was income -> exeption).
     * else{
     *      Block shit. --> p lose 2 coins.
     * }
     */

}

