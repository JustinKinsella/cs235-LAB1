#include "Arena.h"
#include <string>
#include <vector>

bool Arena::addFighter(std::string info)
{
	//info = "name, type, maxHP, Strength, Speed, Magic"
		//parse info string into individual variables. Ostringstream
	for (int i = 0; i < fighterNames.size(); i++)
	{
		if (FighterNames.at(i) == info) 
		{
			return false;
		}
	}
	fightersNames.push_back(info);
	return true;
}

bool Arena::removeFighter(std::string name)
{
	for (int i = 0; i < fightersNames(); i++)
	{
		if (FighterNames.at(i) == name)
		{
			FighterNames.erase(FighterNames.begin() + i);
			//If I decide to remove objects in the add and remove fighter funtions I need to remove the object here.
			return true;
		}
	}
	return false;
}

FighterInterface* Arena::getFighter(std::string name)
{
	return nullptr;
}

int Arena::getSize() const
{
	return 0;
}
