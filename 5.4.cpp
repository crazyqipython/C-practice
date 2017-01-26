#include <iostream>

const int Arsize = 16;
int f[Arsize]={1,1};
int main(){
    using namespace std;
    cout << f[0];
    for(int i=2;i<Arsize; i++){
        f[i] = f[i-1]*i;
    }
    for(int i=0;i<Arsize;i++){
        cout << i << "!= " << f[i]<<endl;
    }
    return 0;
}
