/* 
 * File:   ShowCommand.cpp
 * Author: jester1
 * 
 * Created on 05. April 2014, 22:01
 */

#include "ShowCommand.h"
#include <iostream>

ShowCommand::ShowCommand() : Command("show") {
}

ShowCommand::~ShowCommand() {
}

int ShowCommand::execute(Game& board, std::vector<std::string>& params)
{
  std::cout << "Show_Command" << std::endl;
  return Command::COMMAND_SHOW; //siehe command.cpp
}