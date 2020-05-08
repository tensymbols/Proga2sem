#include <iostream>
#include "tasks.h"
using namespace std;
int main() {
//////////////////////////////1
	cout << "1) swap\n";


	double x, y;

	cin >> x;
	cin >> y;
	Swap(&x,&y);
	cout << x << " " << y << "\n";

	cin >> x;
	cin >> y;
	Swap(x, y);
	cout << x << " " << y <<"\n";
//////////////////////////////6
	cout << "6) round\n";

	double fnumber;

	cin >> fnumber;
	roundF(&fnumber);
	cout << fnumber << "\n";

	cin >> fnumber;
	roundF(fnumber);
	cout << fnumber << "\n";
/////////////////////////////9
	double nnumber;
	cout << "9) complex\n";
	complex compNum;
	cin >> compNum.real >> compNum.imag;
	cin >> nnumber;
	
	
	complexF(&compNum,&nnumber);
	cout << compNum.imag << " "<< compNum.real <<"\n";

	cin >> compNum.real >> compNum.imag;
	cin >> nnumber;
	complexF(compNum, nnumber);
	cout << compNum.real << " " << compNum.imag<< "\n";

////////////////////////////14*/
	cout << "14) transpose\n";
	double mx[3][3];

	cin >> mx[0][0] >> mx[0][1]>> mx[0][2];
	cin >> mx[1][0] >> mx[1][1] >> mx[1][2];
	cin >> mx[2][0] >> mx[2][1] >> mx[2][2];


	transpose(mx);
	cout << "-----------------------\n";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << mx[i][j] <<" ";  
		}
		cout << "\n";
	}
	transpose(&mx);
	cout << "-----------------------\n";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << mx[i][j] << " ";
		}
		cout << "\n";
	}
}