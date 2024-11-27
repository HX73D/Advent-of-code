#include <iostream>
#include <fstream>
#include <string>

void findFloor(std::string line) {
	int up = 0, down = 0;
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == '(') {
			up++;
		}
		else {
			down++;
		}
		int value = up - down;
		if (value == -1) {
			std::cout << i + 1 << std::endl;
		}
	}
}

void getFileData() {
	std::ifstream file("input.txt");

	if (file.is_open()) {
		std::string line;
		while (getline(file, line)) {
			findFloor(line);
		}
		file.close();
	}
	else {
		std::cout << "Unable to open file" << std::endl;
	}
}

void main() {
	getFileData();
}