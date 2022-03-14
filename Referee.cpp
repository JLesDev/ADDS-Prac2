#include "Referee.h"

using namespace std;

Referee::Referee(){

};

// returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
char Referee::refGame(Human player1, Computer player2) {
    char rMove = player1.makeMove();
    char comMove = player2.makeMove();
    char result = 'T';
    if(rMove == 'r'){
        if(comMove == 'r'){
            result = 'T';
        }
        else if(comMove == 's'){
            result = 'W';
        }
        else{
            result = 'L';
        }
    }
    else if(rMove == 's'){
        if(comMove == 'r'){
            result = 'L';
        }
        else if(comMove == 's'){
            result = 'T';
        }
        else{
            result = 'W';
        }
    }
    else{
        if(comMove == 'r'){
            result = 'W';
        }
        else if(comMove == 's'){
            result = 'L';
        }
        else{
            result = 'T';
        };
    };
    return result;

};
