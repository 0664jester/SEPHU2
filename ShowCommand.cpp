/* 
 * File:   ShowCommand.cpp
 * Author: jester1
 * 
 * Created on 05. April 2014, 22:01
 */
#include <iostream>
#include "ShowCommand.h"


ShowCommand::ShowCommand() : Command("show") {
}
ShowCommand::~ShowCommand() {
}
int ShowCommand::execute(Game& board, std::vector<std::string>& params)
{
  std::cout << "Show_Command" << std::endl;
  return Command::COMMAND_SHOW; //siehe command.cpp
}
Game::Game(unsigned int cash, unsigned int player_hp, 
        unsigned int width, unsigned int height)
{
  std::cout  << "cash: %d, Life: %d" << cash << player_hp << std::endl;
  
  width = 3;
  height = 3; 
}