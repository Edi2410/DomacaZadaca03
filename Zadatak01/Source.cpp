#include<iostream>
#include<windows.h>
using namespace std;

void load(int& Ax, int& Ay, int& Bx, int& By) {
	cout << "A redak=";
	cin >> Ax;
	cout << "A stupac=";
	cin >> Ay;
	cout << "B redak=";
	cin >> Bx;
	cout << "B stupac=";
	cin >> By;
}

void find_a_way(int Ax, int Ay, int Bx, int By) {
	int fx = Ax;
	int fy = Ay;
	do
	{for ( size_t i = 1; i <= 20; i++)
	{
		for (size_t j = 1; j <= 40; j++)
		{
			if (i == fx && j == fy)
			{
				cout << "X";
				continue;
			}
			if (i == Ax && j == Ay) {
				cout << "A";
				continue;
			}
			else if (i == Bx && j == By) {
				cout << "B";
				continue;
			}				
			cout << "-";
		}
		cout << endl;
	}
	if (fx > Bx) {
		fx--;
	}
	else if (fx < Bx) {
		fx++;
	}else if (fy > By) {
		fy--;
	}
	else if (fy < By) { 
		fy++;
	}
	Sleep(250);
	if (!((fx == Bx) && (fy == By)))
		system("CLS");
	
	} while (!((fx == Bx) && (fy == By)));
	
}

int main() {
	int Ax, Ay, Bx, By;
	load(Ax, Ay, Bx, By);
	system("CLS");

	find_a_way(Ax, Ay, Bx, By);

	return 0;
}