#include "Referee.h"

using namespace std;

Referee::Referee(){

};

// returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
char Referee::refGame(Human player1, Computer player2) {
    char rMove = player1.makeMove();
    char comMove = player2.makeMove();
    char result = 'T';
    if(rMove == 'R'){
        if(comMove == 'R'){
            result = 'T';
        }
        else if(comMove == 'S'){
            result = 'W';
        }
        else{
            result = 'L';
        }
    }
    else if(rMove == 'S'){
        if(comMove == 'R'){
            result = 'L';
        }
        else if(comMove == 'S'){
            result = 'T';
        }
        else{
            result = 'W';
        }
    }
    else{
        if(comMove == 'R'){
            result = 'W';
        }
        else if(comMove == 'S'){
            result = 'L';
        }
        else{
            result = 'T';
        };
    };
    return result;

};
