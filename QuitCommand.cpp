/* 
 * File:   ExitCommand.cpp
 * Author: jester1
 * 
 * Created on 04. April 2014, 13:59
 */
#include <iostream>
#include "QuitCommand.h"

QuitCommand::QuitCommand() : Command("quit") {
}
QuitCommand::~QuitCommand() {
}

int QuitCommand::execute(Game& board, std::vector<std::string>& params)
{
  std::cout << "Thanks for playing, bye!" << std::endl;
  return Command::COMMAND_QUIT; //siehe command.cpp
}