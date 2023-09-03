#include "guess\include\guess.hpp"

using std::cout;        using std::cin;
using std::endl;

int main(int argc,char** argv){
    srand((unsigned)time(NULL));
    char ch;
    cout << "Do you want to play?[Y\\n] ";
    cin >> ch;
    while(ch == 'Y'){
        guess::play();
        cout << "Do you want to play again?[Y\\n] ";
        cin >> ch;
    }

    return 0;
}