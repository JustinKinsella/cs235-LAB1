#ifndef ARENA_H
#define ARENA_H

#include "ArenaInterface.h"
#include "FighterInterface.h"
#include <string>
#include <vector>

class Arena()
{
public:
	~ArenaInterface() {};

	bool addFighter(std::string info);
	bool removeFighter(std::string name);
	FighterInterface* getFighter(std::string name);
	int getSize();
	
private:
	
	std::vector<std::string> fightersNames;
	std::vector<FighterInterface*> fighterObjects;

}



#endif // !ARENA_H