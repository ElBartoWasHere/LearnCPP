#include <iostream>
#include <string>

enum class Type
{
  OGRE,
  DRAGON,
  ORC,
  SPIDER,
  SLIME
};

struct Monster
{
  std::string name;
  Type monsterType;
  int health;
};

std::string printType(Type x)
{
  if(x == OGRE)
    return std::string("OGRE");
  else if(x == DRAGON)
    return std::string("DRAGON");
  else if(x == ORC)
    return std::string("ORC");
  else if(x == SPIDER)
    return std::string("SPIDER");
  else if(x == SLIME)
    return std::string("SLIME");
}

void printMonster(Monster x)
{
  std::cout << "The " << printType(x.monsterType) << " is named " << x.name << " and has " << x.health << " health." << endl;
}


//This Ogre is named Torg and has 145 health.
//This Slime is named Blurp and has 23 health.
int main()
{
  Monster Torg = {std::string("Torg"), Type::OGRE, 145};
  Monster Blurp = {std::string("Blurp"), Type::SLIME, 23};
  printMonster(Torg);
  printMonster(Blurp):
  
  return 0;
}
