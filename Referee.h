#ifndef Referee_hpp
#define Referee_hpp

#include "Human.h"
#include "Computer.h"

class Referee{
        
    private:
        char result;
    public:
    
        Referee();
        char refGame(Human player1, Computer player2); 
    
    
};

#endif /*Human_hpp */
