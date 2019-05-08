#ifndef ARENA_H
#define ARENA_H

#include "ArenaInterface.h"
#include "FighterInterface.h"
#include <string>
#include <vector>

class Arena : public ArenaInterface()
{
public:
	~ArenaInterface() {};

	bool addFighter(std::string info);
	bool removeFighter(std::string name);
	FighterInterface* getFighter(std::string name);
	int getSize() const;

private:
	
	std::vector<FighterInterface*> fighters;

};



#endif // !ARENA_H