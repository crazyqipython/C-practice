#include <iostream>
#include <cctype>

int main(){
    using namespace std;
    char ch;
    int spaces = 0;
    int digits = 0 ;
    int chars = 0;
    int punct = 0;
    int others = 0;
    cin.get(ch);
    while(ch!='@'){
        if(isalpha(ch))
            chars++;
        else if(isspace(ch))
            spaces++;
        else if(isdigit(ch))
            digits++;
        else if(ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters " << spaces << " whitespace "<<
    digits << " digits " << punct << " punctuations " << others << " others.\n";
    return 0; 
}
