//------------------------------------------------------------------------------
// Filename: SpeedRatio.h
// Description: Class representing a general game
// Authors: Peter Lorenz		
// Tutor: Manuel Menzinger
// Group: 1
// Created: 15.03.2014
// Last change: 15.03.2014
//------------------------------------------------------------------------------


#ifndef SPEEDRATIO_H //damit wird mehrfach Dekleration verhindert
#define SPEEDRATIO_H

#include <iostream>

class SpeedRatio 
{
  unsigned int events_;
  unsigned int ticks_;

public:
		SpeedRatio(int events, int ticks);
		unsigned int currentEvents(unsigned int current_tick);
};
 
#endif


