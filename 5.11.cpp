#include <iostream>
#include <cstring>

int main(){
   using namespace std;
   char word[5] = "?ate";
   char ch;
   for(ch='a';strcmp(word,"mate");ch++){
       cout << word <<endl;
       word[0] = ch;
   }
   cout << "after loop end" << endl;
   return 0;
}
