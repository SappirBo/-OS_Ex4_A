#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"
#include "Player.hpp"
#include "Contessa.hpp"
#include "Captain.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Duke.hpp"

#include "doctest.h"

using namespace std;
using namespace coup;

TEST_CASE("Test 1 -> Constractor"){
    Game game_1{};

	Duke duke{game_1, "Peter Griffin"};
	Assassin assassin{game_1, "Lois Griffin"};
	Ambassador ambassador{game_1, "Chris Griffin"};
	Captain captain{game_1, "Meg Griffin"};
	Contessa contessa{game_1, "Stewie Griffin"};

    CHECK(duke.coins() == 0);
    CHECK(assassin.coins() == 0);
    CHECK(ambassador.coins() == 0);
    CHECK(captain.coins() == 0);
    CHECK(contessa.coins() == 0);
}

TEST_CASE("Test 2 -> income"){
    Game game{};

	Duke Peter{game, "Peter Griffin"};
	Assassin Lois{game, "Lois Griffin"};
	Ambassador Chris{game, "Chris Griffin"};
	Captain Meg{game, "Meg Griffin"};
	Contessa Stewie{game, "Stewie Griffin"}; 
    
    int current = 1;

    for(int i=0; i<100; i++){
        Peter.income();
        Lois.income();
        Chris.income();
        Meg.income();
        Stewie.income();

        CHECK_EQ(Peter.coins() ,current);
        CHECK_EQ(Lois.coins() ,current);
        CHECK_EQ(Chris.coins() ,current);
        CHECK_EQ(Meg.coins() ,current);
        CHECK_EQ(Stewie.coins() ,current);

        current++;
    }
}

TEST_CASE("Test 3 -> foreign_aid"){
    Game game{};

	Duke Peter{game, "Peter Griffin"};
	Assassin Lois{game, "Lois Griffin"};
	Ambassador Chris{game, "Chris Griffin"};
	Captain Meg{game, "Meg Griffin"};
	Contessa Stewie{game, "Stewie Griffin"}; 
    
    int current = 2;

    for(int i=0; i<100; i++){
        Peter.foreign_aid();
        Lois.foreign_aid();
        Chris.foreign_aid();
        Meg.foreign_aid();
        Stewie.foreign_aid();

        CHECK_EQ(Peter.coins() ,current);
        CHECK_EQ(Lois.coins() ,current);
        CHECK_EQ(Chris.coins() ,current);
        CHECK_EQ(Meg.coins() ,current);
        CHECK_EQ(Stewie.coins() ,current);

        current += 2;
    }
}
