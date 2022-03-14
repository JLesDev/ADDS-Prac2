#include "Human.h"
#include <iostream>
#include <stdio.h>

using namespace std;

Human::Human(){

};

char Human::makeMove(){
    char move;
    cout << "Make a move: ";
    cin >> move;
    return move;
};