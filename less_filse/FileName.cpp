#include <iostream>
#include <fstream>
#include <Windows.h>

#define O cout

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//cout << "Work with Fillesn\n";
	//ofstream file("1.txt");
	///*if (file) cout << "GOOOOOD";
	//else {
	//	cout << "BAd";
	//	return 1;
	//}
	//cout << "++++++++" << endl;*/

	//if (!file.is_open()) {
	//	O << "File null" << endl;
	//}
	//O << "+++++++++" << endl;
	//O << "input ";
	//char  txt[20];
	//do {
	//	cin.getline(txt, 20);
	//	file << txt << endl;
	//} while (*txt!="*");
	// 	//file.close();



	/*ofstream file("test.txt");
	if (!file) {
		O << "Fille null" << endl;
		return 1;
	}
	char txt[20];
	int row = 1;
	do {
		file.getline(txt, 20);
		O <<row<< " "<< txt << endl;
		row++;
	} while (*txt!="*");
	file.close();*/





	return 0;
}