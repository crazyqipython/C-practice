#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    const int Size=15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    
    cout << "Howdy! I'm " << name2;
    cout << "what's your name\n ";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your  initial is " << name1[0] << ".\n";
    name2[7] = '\0';
    cout << "Here are the first "<< strlen(name2)<<" characters of my name: ";
    cout <<name2 <<endl;
    return 0;
}
