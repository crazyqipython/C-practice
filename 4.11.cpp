#include <iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(){
    using  namespace std;
    inflatable guest = {
        "glorious gloria",
        1.88,
        29.99,
    };
    cout << guest.volume <<" " << guest.name<<endl;
    inflatable choice;
    choice = guest;
    cout << "the choice " << guest.price<<endl;
    return 0;
}
