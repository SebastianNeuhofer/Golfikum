#pragma once
#include <iostream>
using namespace std;

class obstacle
{
public:
	//Obstacle(int size, int bouncy, int shape);
	int _size; // Gr��e
	int _bouncy; // Absto�koeffizient
	int _shape; //Groe�e
	void setSize();
	void setShape();
	void setBounce();
private:

};