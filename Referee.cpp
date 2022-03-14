#include "Referee.h"

using namespace std;

Referee::Referee(){

};

// returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
char refGame(Human player1, Computer player2) {
    if(player1.move == 'r'){
        if(player2.move == 'r'){
            result = 'T';
        }
        else if(player2.move == 's'){
            result = 'W';
        }
        else{
            result = 'L';
        }
    }
    else if(player1.move == 's'){
        if(player2.move == 'r'){
            result = 'L';
        }
        else if(player2.move == 's'){
            result = 'T';
        }
        else{
            result = 'W';
        }
    }
    else{
        if(player2.move == 'r'){
            result = 'W';
        }
        else if(player2.move == 's'){
            result = 'L';
        }
        else{
            result = 'T';
        };
    };
    return result;


};
