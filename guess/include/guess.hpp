#include <iostream>
#include <cstdlib>
#include <ctime>

#define ANSWER 42 

class guess{
public:
    static void play(){
        std::cout << "I am thinking about an integer(in range 0-32767), guess what it is!" << std::endl;
        int ans, value = ANSWER;
        while(true){
            std::cin >> ans;
            if(ans > value){
                std::cout << "Too large!" << std::endl;
                continue;
            }
            if(ans < ANSWER){
                std::cout << "Too little!" << std::endl;
            }
            else break;
        }

        std::cout << "That\'s correct! Thanks for playing!" << std::endl;
        return; 
    }    
};