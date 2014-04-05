//------------------------------------------------------------------------------
// Filename: Command.cpp
// Description: Class representing a general command
// Authors: Tutors
// Tutor: Tutors
// Group: 42
// Created: 02.09.2011
// Last change: 02.09.2011
//------------------------------------------------------------------------------

#include "Command.h"
const int Command::COMMAND_SUCCESS = 1;
const int Command::COMMAND_QUIT = 2;
const int Command::COMMAND_ECHO = 3;
const int Command::COMMAND_SHOW = 4; 
//nicht definen: copy constr, assignment constructor

//------------------------------------------------------------------------------
Command::Command(std::string name) : command_name_(name)
{
}

//------------------------------------------------------------------------------
Command::~Command()
{
}

//------------------------------------------------------------------------------
const std::string &Command::getName() const
{
  return command_name_;
}