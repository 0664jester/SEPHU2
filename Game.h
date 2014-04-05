//------------------------------------------------------------------------------
// Filename: Game.h
// Description: Class representing a general game
// Authors: Peter Lorenz		
// Tutor: Manuel Menzinger
// Group: 1
// Created: 15.03.2014
// Last change: 15.03.2014
//------------------------------------------------------------------------------
#ifndef GAME_H
#define GAME_H

//#include "Monster.h"
//#include "Tower.h"

#include <vector>
#include <list>

class Tower; //forward declare - kompiliert schneller, weil er nicht den kompletten code von Tower 
class Monster;

class Command;

class Game
{
private:
  unsigned int cash_;
  unsigned int player_hp_;
  unsigned int width_;
  unsigned int height_;
  std::vector<Tower*> tower_array_; //möglicherweise memory leak, weil pointer. muss man manuell durchgehen den destruktor und jeden tower löschen
  std::vector<Monster*> monster_array_; //pointer is immer gleich groß, egal welcher typ
  std::vector<Command*> command_array_; //wir wollen verschiedene commands haben. deswegen *
public:
    Game( unsigned int cash, unsigned int player_hp, unsigned int width, 
            unsigned int height );
    virtual ~Game();
    void addTower( Tower *tower );
    void addMonster( Monster *monster );
    void run();
    int getCurrentTick(); //Magic!
};
#endif