#include <iostream>

int main(){
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    int yamcosts[3] = {20,30,5};
    
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    
    int total = yams[0]*yamcosts[0] + yams[1] *yamcosts[1];
    total += yams[2]*yamcosts[2];
    cout << "The tatol yam expence is " << total << endl;

    cout << "sizeof of array is "<< sizeof yams;
    cout << "sizeof array element is " << sizeof yams[0];
    return 0;
}
