#include "Arena.h"
#include <string>
#include <vector>

bool addFighter(std::string info)
{
	for (int i = 0; i < fighterNames.size(); i++)
	{
		if (FighterNames.at(i) == info) 
		{
			return false;
		}
	}
	fightersNames.push_back(info);
	//I am not entirely sure if I need to set aside memory for an object here or I should do it at the end. 
	return true;
}

bool removeFighter(std::string name)
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

FighterInterface* getFighter(std::string name)
{
	return nullptr;
}

int getSize()
{
	return 0;
}
