#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;

    cout << animal << " and "<< bird << "\n" ;

    cout << "enter a kind of animal: ";
    cin >> animal;
   
    ps = animal;
    cout  << ps << "!\n";

    cout << "before using strcpy():\n" << animal << " at " << (int *) animal<<endl;
    cout << ps <<  " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1 ];
    strcpy(ps, animal);
    
    cout << "After using strcpy():\n"<< animal << " at "<< (int * ) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    int *p;
    int a =222;
    p = &a;
    cout << "int "<< p << "at " << *p <<endl;
    delete [] ps;
    return 0;     
}
