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
//Current_Tick() hat return 2
const int Command::COMMAND_QUIT = 3;
const int Command::COMMAND_ECHO = 4;
const int Command::COMMAND_SHOW = 5;
const int Command::ERROR_PARA = 8;
//const int Command::Error_UNKN = 9;
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