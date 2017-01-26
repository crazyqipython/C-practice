#include <iostream>

int main(){
	using namespace std;
	int rats = 101;
	int & rodents = rats;
	cout << "rats = " << rats;
	cout << "rodents =" << rodents << endl;
	cout << "rats address = " << &rats;
	cout << "rodents addr = " << &rodents;
	
	int bunny = 50;
	rodents = bunny;
	cout << "bunny = " << bunny;
	cout << "rodents = " << rodents;
	cout << ",rats = " << rats<<endl;
	cout << "bunny addr = " << &bunny;
	cout << ",rodents addr = " << &rodents;
	cout << ",rats addr = " << &rats << endl;
	return 0;
}
