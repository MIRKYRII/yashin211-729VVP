#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x;
	cout<<"Введите значение x:\n";
	cin>>x;

	if ((x > 0) && (x < 10) && (x % 2 != 0)) {
		cout<<"Число однозначное и нечетное ";
	}
	else if ((x > 0) && (x < 10) && (x % 2 == 0)) {
		cout<<"Число однозначное и четное ";
	}
	else if ((x > 9) && (x < 100) && (x % 2 != 0)) {
		cout<<"Число двузначное и нечетное)";
	}
	else if ((x > 9) && (x < 100) && (x % 2 == 0)) {
		cout<<"Число двузначное и четное";
	}
	else if ((x < 1000) && (x >99) && (x % 2 != 0)) {
		cout<<"Чичло трехзначное и нечетное";
	}
	else if ((x < 1000) && (x > 99) && (x % 2 == 0)) {
		cout<<"Чичло трехзначное и четное";
	}
	
	return 0;
}