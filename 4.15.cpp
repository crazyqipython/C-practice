#include <iostream>
int main(){
    using namespace std;
    int *p;
    int a =6;
    cout << "the value of *p is " << p << endl;
    p = &a;
    cout << "the value of *p is " << p << endl;
    return 0;
}
