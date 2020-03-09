#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main () {
	ifstream inFile ("a.txt");
	string fileName;
	string word;
	int palabras = 0;
	int caracteres = 0;
	int lineas = 0;
	char a;
	while (!inFile.eof()) {
		getline (inFile, word);
		for (int i = 0; i < word.length (); i++) {
			if (word[i] != ' ') {
				caracteres++;
			}
		}
		stringstream a (word);

		while (a>>fileName) {
			if (fileName[0]!=' ') {
				palabras++;
			}
		}

		lineas++;

	}
	cout << palabras << endl;
	cout << caracteres << endl;
	cout << lineas << endl;

}
