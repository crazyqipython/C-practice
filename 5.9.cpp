#include <iostream>
#include <string>

int main(){
    using namespace std;
    string word;
    char temp;
    int i ,j;
    cout << "enter a string "<<endl;
    cin >> word;
    for (j= 0, i=word.size()-1;j<i;--i,++j){
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}
