#include "World.h"
#include <vector>


world::world(int x, int y) : x_(x), y_(y) {}

void world::createWorld() {

	std::string arrWorld[50][120];
	for (int i = 0; i < x_; i++) {

		for (int j = 0; j < y_; j++) {
			arrWorld[i][j] = " ";
			arrWorld[i][0] = "|";
			arrWorld[i][y_ - 1] = "|";
			arrWorld[0][j] = "-";
			arrWorld[x_ - 1][j] = "-";
			std::cout << arrWorld[i][j];
		}
		std::cout << std::endl;

	}
}