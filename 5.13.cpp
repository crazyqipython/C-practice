#include <iostream>
const int ArrySize=20;

int main(){
    using namespace std;
    char name[ArrySize];
    cout << "Your first name,please:";
    cin >> name;
    cout << "Here is your name \n";
    int i = 0;
    while(name[i] != '\0'){
        cout << name[i] << ": " << int(name[i])<<endl;
        i++;
    }
    return 0;
}
