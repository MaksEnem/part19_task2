#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::ifstream fin_w;
	std::string str;

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

	while (!fin_w.eof()) {


		str = "";
		getline(fin_w, str);
		std::cout << str << std::endl;
		
		
	}




	fin_w.close();
}