/* 
 * File:   EchoCommand.cpp
 * Author: jester1
 * 
 * Created on 05. April 2014, 10:37
 */
#include <iostream>
#include "EchoCommand.h"
//#include "Command.h"
//#include "Game.h"

EchoCommand::EchoCommand() : Command("echo") {
}
EchoCommand::~EchoCommand() {
}


int EchoCommand::execute(Game& board, std::vector<std::string>&params)
{
  for( unsigned int i = 1; i<params.size();i++ ) 
  {
    std::cout << params[i];
    if( i+1 < params.size() )
    {
      std::cout << "|";
    }
  
    if( i+1 == params.size() )
    {
      std::cout << std::endl;
    }
  }
  return Command::COMMAND_ECHO; //siehe command.cpp
}


