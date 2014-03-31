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
#include "Tower.h"
#include <vector>

class Tower;
class Monster;

class Game
{
private:
  unsigned int cash_;
  unsigned int player_hp_;
  unsigned int width_;
  unsigned int height_;
  std::vector<Tower*> tower_array_;
  std::vector<Monster*> monster_array_;
public:
    Game( unsigned int cash, unsigned int player_hp, unsigned int width, 
            unsigned int height );
    void addTower( Tower *tower );
    void addMonster( Monster *monster );
    void run();
    int getCurrentTick(); //Magic!
};
#endif