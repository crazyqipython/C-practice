#include <iostream>

int main(){
    using namespace std;
    const int ArraySize = 20;
    char name[ArraySize];
    char dessert[ArraySize];

    cout << "Enter your name:\n";
    cin.getline(name,ArraySize);
    cout << "enter your favourize dessert:\n";
    cin.getline(dessert,ArraySize);
    cout << "I have some delicious " << dessert;
    cout<< " for you , " << name << ".\n";
    return 0;
}
