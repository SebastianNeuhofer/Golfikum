#include "player.h"
#include <math.h>

player::player(char colour) :_colour(colour)
{
}


void player::placeBall(int coordX, int coordY){
	_posX = coordX;
	_posY = coordY;
}

void player::hitBall(int angle, int strength){
	angle = angle; 
	strength = strength;
	strength = std::min(strength, _maxStrength);
	_posX += round(strength* _strengthMultiplier * cos(angle));
	_posY += round(strength * _strengthMultiplier * sin(angle));

}

void player::cheatChangePos(int coordX, int coordY){
	_posX = coordX;
	_posY=coordY;


}

void player::rageMode(int strengthMultiplier){
	_strengthMultiplier = strengthMultiplier;
}

void player::exitRageMode() {
_strengthMultiplier = 1;
}

void player::quitGame() {
//	delete player;
}