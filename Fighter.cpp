#include "Fighter.h"
#include <string>

Fighter::~FighterInterface() {};

std::string Fighter::getName() const
{
	return name;
}

int Fighter::getMaximumHP() const
{
	return hitPointMax;
}

int Fighter::getCurrentHP() const
{
	return health;
}

int Fighter::getStrength() const 
{
	return strength;
}

int Fighter::getSpeed() const
{
	return speed;
}

int Fighter::getMagic() const
{
	return magic;
}

void Fighter::takeDamage(int damage)
{
	if ((damage - (speed / 4)) >= 1) 
	{
		health -= (damage - (speed / 4));
	}
	else
	{
		health--;
	}
	
}

void Fighter::regenerate()
{
	//if the fighter is max hp return.
	//if the increase hit points puts up above max hp. maxhp = health
	//in crease hit points by one sixth of fighter strenth
		//if the increase is less than one heal 1 hp. 
}

