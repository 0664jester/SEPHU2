
//------------------------------------------------------------------------------
// Filename: Monster.h
// Description: Class representing a general game
// Authors: Peter Lorenz		
// Tutor: Manuel Menzinger
// Group: 1
// Created: 15.03.2014
// Last change: 15.03.2014
//------------------------------------------------------------------------------


#ifndef MONSTER_H //damit wird mehrfach Dekleration verhindert
#define MONSTER_H

#include "Game.h"
#include "SpeedRatio.h"
#include <string>

class Game;

class Monster
{			
				std::string monster_name_;
				unsigned int monster_attackaen_damage_;
				unsigned int monster_life_;
				unsigned int monster_attribute_;

			 SpeedRatio &speedratio_;
				Game *game_;
public:
				int move();
		  Monster(const std::string &name, unsigned int monster_attacken_damage, 
    unsigned int monster_life, unsigned int monster_attribute, 
    SpeedRatio speed, Game* game);
				
};

#endif