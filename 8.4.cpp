#include <iostream>
void swapr(int & a, int & b);
void swapp(int * a, int * b);
void swapv(int a ,int b);
int main(){
	using namespace std;
	int wallet1=200;
	int wallet2 = 441;
	cout << "wallet1 = " << wallet1;
	cout << "wallet2 = " << wallet2<< endl;
	swapr(wallet1,wallet1);
	cout <<"use reference";
	cout << "wallet1 = " << wallet1;
	cout << ", wallet2= " << wallet2;

	swapp(&wallet1,&wallet2);
	cout << "use pointer";
	cout << "wallet1 = "<< wallet1;
	cout << "wallet2 = " << wallet2;

	swapv(wallet1,wallet2);
	cout << "use value ";
	cout << "wallet1 =" << wallet1;
	cout << "wallet2 ="<< wallet2;
	return 0;
}

void swapr(int & a, int & b){
	int temp;
	temp =a ;
	a=b;
	b=temp;
}

void swapp(int * a ,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swapv(int a ,int b){
	int temp;
	temp = a;
	a = b;
	b=temp;
}
