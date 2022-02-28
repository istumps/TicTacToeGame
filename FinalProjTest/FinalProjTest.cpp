// FinalProjIsaacStumps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
void winCond(int  a, int  b, int  c, int  d, int e, int f, int g, int h, int i, int p, int z) {
	if (a == z && b == z && c == z) {
		cout << "Player " << p << " won" << endl; system("pause");
	}

	if (d == z && e == z && f == z) {
		cout << "Player " << p << " won" << endl; system("pause");
	}
	if (g == z && h == z && i == z) {

		cout << "Player " << p << " won" << endl; system("pause");
	}
	if (a == z && d == z && g == z) {
		cout << "Player " << p << " won" << endl; system("pause");
	}
	if (b == z && e == z && h == z) {
		cout << "Player " << p << " won" << endl; system("pause");
	}
	if (c == z && f ==  z && i == z) {
		cout << "Player " << p <<  " won" << endl; system("pause");
	}
	if (a == z && e == z && g == z) {
		cout << "Player " << p << " won" << endl; system("pause");
	}
	if (a == z && e == z && i == z) {
		cout << "Player " << p << " won" << endl; system("pause");
	}
	else (cout << "Draw");
};
void pinput(int l, int p, int n, int c, int y) {

	if (l == p) {
		cout << "Invalid Move" << endl;
		cout << "P" << n << "enter a number" << endl;
		cin >> c;
	}
	else
		l = y;

}

int main()
{
	int x = 0, o = 0, a = 2, b = 3, c = 4, d = 2, e = 3, f = 4
		, g = 2, h = 3, i = 4, t = 0, k = 0;
	string row1[5]{ "X", "O", "1","2","3" };
	string row2[5]{ "X", "O", "4","5","6" };
	string row3[5]{ "X", "O", "7","8","9" };
	do {

		++t;

		cout << row1[a] << "|" << row1[b] << "|" << row1[c] << "|\n";
		cout << "------\n";
		cout << row2[d] << "|" << row2[e] << "|" << row2[f] << "|\n";
		cout << "------\n";
		cout << row3[g] << "|" << row3[h] << "|" << row3[i] << "|\n";
		cout << "------\n";

		cout << "P1 enter a number" << endl;
		cin >> x;
		switch (x) {
		case 1: a = 0;
			break;
		case 2: b = 0;
			break;
		case 3: c = 0;
			break;
		case 4: d = 0;
			break;
		case 5: e = 0;
			break;
		case 6: f = 0;
			break;
		case 7: g = 0;
			break;
		case 8: h = 0;
			break;
		case 9: i = 0;
			break;
		}
		//p1
		winCond(a, b, c, d, e, f, g, h, i, 1, 0);
		system("CLS");


		if (x >= 1) {
			cout << row1[a] << "|" << row1[b] << "|" << row1[c] << "|\n";
			cout << "------\n";
			cout << row2[d] << "|" << row2[e] << "|" << row2[f] << "|\n";
			cout << "------\n";
			cout << row3[g] << "|" << row3[h] << "|" << row3[i] << "|\n";
			cout << "------\n";
			cout << "P2 enter a number" << endl;
			cin >> o;
			switch (o) {

			case 1: a = 1;
				break;
			case 2: b = 1;
				break;
			case 3: c = 1;
				break;
			case 4: d = 1;
				break;
			case 5: e = 1;
				break;
			case 6: f = 1;
				break;
			case 7: g = 1;
				break;
			case 8: h = 1;
				break;
			case 9: i = 1;
				break;
			}
			//Line
			//P2
			winCond(a, b, c, d, e, f, g, h, i, 2, 1);




			system("CLS");
		}
	} while (t <= 9);
}