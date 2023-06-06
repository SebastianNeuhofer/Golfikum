#include <iostream>
class player
{
public:
	player(char colour);
	void placeBall(int coordX, int coordY);
	void hitBall(int angle, int strength);
	void cheatChangePos(int coordX, int coordY);
	void quitGame();
	void rageMode(int strengthMultiplier);
	void exitRageMode();


protected:
	int _posX, _posY;
	int _maxStrength = 10;
	int _strengthMultiplier = 1;
	char _colour;


};