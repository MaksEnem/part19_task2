#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::ifstream fin_w;
	char buffer[20];

	fin_w.open("D:\\Skillbox\\C++\\working\\Practice 19 (reading from files)\\task2\\words.txt", std::ios::binary);

	if (fin_w.is_open()) {

		std::cout << "File is open\n";
		std::cout << std::endl;

	}
	else {

		std::cout << "WARNING!\n";
		std::cout << "ERROR!!!\n";
		std::cout << "File is not open\n";

	}
		
	while (!fin_w.eof()) {

		fin_w.read(buffer, sizeof(buffer));

		for (int i = 0; i < fin_w.gcount(); ++i) {

			std::cout << buffer[i];

		}
		
	}	
	
	fin_w.close();
}