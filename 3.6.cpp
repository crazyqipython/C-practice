#include <iostream>

int main(){
    using namespace std;
    char ch='M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    ch = ch + 1 ;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl; 
    cout << "Display char ch using cout.put() ";
    cout.put(ch);
    cout.put('!');
    return 0;
}
