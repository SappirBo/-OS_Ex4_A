#include <iostream>
#include <string>
#include <vector>
#pragma once

using namespace std;

namespace coup
{
    class Game{
    protected:
        vector<string> players_list;
        int size;
        int turn_num;
    public:
        Game();
        ~Game();

        vector<string> players();
        void add_player(string name);
        string turn();
        string winner();

        void kill(string player_name);
};
}