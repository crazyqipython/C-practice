#include <iostream>

int main(){
    using namespace std;
    char ch;
    int count=0;
    cout <<"enter character;\n";
    cin.get(ch);

    while(ch!='#'){
       cout << ch;
       ++count;
       cin.get(ch);
    }
    return 0;
}
