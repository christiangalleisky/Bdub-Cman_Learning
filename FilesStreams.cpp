#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	ofstream outFile;
	outFile.open("data.txt");
	
	outFile << "HI THERE!" << endl;
	
	outFile.close();
	
	ifstream inFile;
	inFile.open("data.txt");	
	string x;
	inFile >> x;
	cout<<x<<endl;
	inFile.close();
	return 0;
}
