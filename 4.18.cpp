#include <iostream>
int main(){
    using namespace std;
    double *pd = new double [3];
    pd[0] = 0.2;
    pd[1] = 0.5;
    pd[2] = 0.8;
    cout <<"pd[1] is  "<< pd[1]<<".\n";
    pd = pd +1;
    cout << "pd[1] is " <<pd[1] <<".\n";
    pd = pd -1;
    delete [] pd;
    return 0;
}
