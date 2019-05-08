#ifndef FIGHTER_H
#define FIGHTER_H

#include "FighterInterface.h"
#include <string>
 

class Fighter : FighterInterface()
{
public:
	~FighterInterface(); 
	std::string getName() const;
	int getMaximumHP() const;
	int getCurrentHP() const;
	int getStrength() const;
	int getSpeed() const;
	int getMagic() const;
	void takeDamage(int damage);
	void regenerate();

protected:
	std::string name;
	int health;
	int hitPointMax;
	int hitPointMin;
	int strength;
	int speed;
	int magic;
	
	3
private:

}

#endif // !FIGHTER_H

