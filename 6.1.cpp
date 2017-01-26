#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    int spaces=0;
    int total=0;
    char ch;
    cin.get(ch);
    while(ch!='.'){
        if(ch==' '){
            ++spaces;

        }
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces ," <<total;
    cout << " characters total in sententces\n";
    return 0;
}
