#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"

using namespace std;
using namespace coup;

coup::Game::Game(){
    this->size =0;
    this->turn_num=0;
}
coup::Game::~Game(){}

vector<string> coup::Game::players(){
    return this->players_list;
}


void coup::Game::add_player(string name){
    // this->players_list.resize((size_t)this->players_list.size() + 1);
    // this->players_list.push_back(name);
    // this->size++;
}
string coup::Game::turn(){
    // int tmp = this->turn_num;
    // this->turn_num++;
    // if(this->turn_num == size){
    //     this->turn_num = 0;
    // }
    // return this->players_list.at((size_t)tmp);

    return "Testin Turn Function.";
}

void coup::Game::kill(string player_name){
    // Kill the player.
}

