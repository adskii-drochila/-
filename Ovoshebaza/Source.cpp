#include <iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	string fname = "Vzlom_popi";																								
	setlocale(LC_ALL, "Rus");																									
																																
	ofstream outputFile("Vzlom_popi.txt");																						
	if (outputFile.is_open()) {																									

		string Data;
		getline(cin, Data);

		outputFile << Data;
		outputFile.close();
	}
		else {
		cout << "Сорян, ошибка вышла, попробуй еще." << endl;
		}

	

	ifstream inputFile;
	inputFile.open(fname + ".txt", ios_base::in);

	if (inputFile.is_open()) {
		string line;
		int i = 0;
		char buff[50] = {'0'};
		cout << "Данные из файла: " << endl << endl;
		
		
		
		while (getline(inputFile, line)) {
			cout << line.find('(') << "\n";
			for (int j = line.find('('); j < line.find(')'); j++) {
				buff[j] = line[j+1];
				cout << buff[j-1];
			
				
			}
		}

		inputFile.close();
	}

		else {
		cout << "Сорян, ошибка вышла, попробуй еще." << endl;
		}



	return 0;
}