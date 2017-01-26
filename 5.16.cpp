#include <iostream>

int main(){
    using namespace std;
    char ch;
    int count = 0;
    cout << "enter character: \n";
    cin >> ch;
    while (ch!='#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    return 0;
}
