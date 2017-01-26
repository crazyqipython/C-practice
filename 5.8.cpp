#include <iostream>

int main(){
    using namespace std;
    double number=0.0;
    double sum=0.0;
    for(int i=0;i<5;i++){
        cout<<"enter a number: "<<endl;
        cin >> number;
        sum +=number;       
    }
    cout << "the total is " << sum <<endl;
    return 0;
}
