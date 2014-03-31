//------------------------------------------------------------------------------
// Filename: Tower.h
// Description: Class representing a general game
// Authors: Peter Lorenz		
// Tutor: Manuel Menzinger
// Group: 1
// Created: 15.03.2014
// Last change: 15.03.2014
//------------------------------------------------------------------------------


#ifndef TOWER_H //damit wird mehrfach Dekleration verhindert
#define TOWER_H

#include "SpeedRatio.h"
#include "Game.h"
#include <string>

class Game;

class Tower
{
  std::string name_;
  unsigned int damage_;
  unsigned int range_;
		SpeedRatio shoot_ratio_;
		Game *game_; 

public:
		Tower(std::string name, unsigned int damage, unsigned int range,
				SpeedRatio shoot_ratio, Game* game);
		unsigned int fire();
};



#endif