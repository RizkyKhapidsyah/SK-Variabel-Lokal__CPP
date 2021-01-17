/* -------------- */
/* Variabel Lokal */
/* -------------- */

#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int lokal();

int main() {
	int a = 98;
	
	cout << "Pemanggilan Variabel Lokal" << endl;
	cout << "\nNilai didalam funsi main() = : " << a;
	
	lokal();
	
	cout << "\nNilai didalam funsi main() = : " << a;
	
	_getch();
	return 0;
}

int lokal() {
	int a = 81;
	cout << "\nNilai a didalam fungsi lokal( ) = " << a;
	return a;
}