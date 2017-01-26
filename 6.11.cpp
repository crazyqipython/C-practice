#include <iostream>

enum {red,orange,yellow,green,blue,violet,indigo};

int main(){
    using namespace std;
    cout << "enter color code (0-1)";
    int code;
    cin >> code;
    while (code >= red && code <=indigo){
        switch(code)
        { 
 		case red : cout <<"her l r.\n";break;
 		case orange : cout << "her h o.\n";break;
          }
        cout << "enter color code(0-6): ";
        cin >> code;
    }
    cout << "Bye\n";
    return 0;
}
