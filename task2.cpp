#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::ifstream fin_w;
	char buffer[20];

	fin_w.open("D:\\Skillbox\\C++\\working\\Practice 19 (reading from files)\\task2\\words.txt");

	if (fin_w.is_open()) {

		std::cout << "File is open\n";
		std::cout << std::endl;

	}
	else {

		std::cout << "WARNING!\n";
		std::cout << "ERROR!!!\n";
		std::cout << "File is not open\n";

	}

	
	do {

		fin_w.read(buffer, sizeof(buffer));

		for (int i = 0; i < 20; ++i) {

			std::cout << buffer[i];

		}


	} while (!fin_w.eof());
		


	

	

	

	




	fin_w.close();
}