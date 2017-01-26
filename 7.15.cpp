#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const std::array<string,Seasons> Snames =
	{"Spring","Summer","Fall","Winter"};

void fill(std::array<double,Seasons> *pa);
void show(std::array<double,Seasons> da);

int main(){
	using namespace std;
	std::array<double,Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(array<double,Seasons> * pa){
	using namespace std;
	for(int i =0;i<Seasons;i++){
		cout << "Enter " << Snames[i] << " expenses:";
		cin >> (*pa)[i];
	}
}

void show(array<double,Seasons> da)
{
	using namespace std;
	double total = 0.0;
	cout << "\n EXpensees\n";
	for (int i=0;i<Seasons;i++){
		cout << Snames[i] << ": $"<<da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses:$"<< total << endl;
}
