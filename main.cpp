//------------------------------------------------------------------------------
// Filename: main.cpp
// Description:
//
// Author(s): Tutor
// Created on:   06.02.2014
// Last changed: 06.02.2014
//------------------------------------------------------------------------------

#include "Game.h"
#include "Monster.h"
#include "Tower.h"
#include "SpeedRatio.h"

//------------------------------------------------------------------------------
int main()
{
  Game game( 1000, 20, 5, 3 );

  game.addTower( new Tower("Arrow", 1, 3, SpeedRatio(1, 1), &game ) );
  game.addTower( new Tower("Cannon", 3, 3, SpeedRatio(1, 3), &game ) );

  game.addMonster( new Monster("Slime", 1, 1, 0, SpeedRatio(1, 2), &game ) );
  game.addMonster( new Monster("Rat", 1, 2, 0, SpeedRatio(1, 1), &game ) );

  game.run();

  return 0;
}

