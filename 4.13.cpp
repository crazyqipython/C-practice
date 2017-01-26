#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable guests[2] = 
    {
        {"bambi", 0.5, 21.99},
        {"godzilla",200,565.99},
    };
    cout << "the guests " << guests[0].name << " and " << guests[1].name << endl;
    return 0;
}
