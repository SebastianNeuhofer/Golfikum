#include <iostream>
#include "obstacle.h"
using namespace std;

/*Obstacle::Obstacle(int size, int bouncy, int shape) : _size(size), _bouncy(bouncy), _shape(shape) {


}*/

void obstacle::setSize() {
	cout << "give size between 1-10" << endl;
	cin >> _size;
}

void obstacle::setShape() {
	cout << "Shape: 1 = Dreieck 2 = Kreis and 3 = rectangle" << endl;
	cin >> _shape;

}
void obstacle::setBounce() {
	cout << "give bounce level between 1-5" << endl;
	cin >> _bouncy;

}