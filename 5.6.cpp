#include <iostream>
#include <string>

int main(){
    using namespace std;
    string word;
    cout << "Enter a word: " <<endl;
    cin >> word;
    for(int i=word.size();i>=0;i--){
        cout<<word[i];
    }
    return 0;
}
