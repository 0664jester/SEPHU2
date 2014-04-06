/* 
 * File:   ShowCommand.h
 * Author: jester1
 *
 * Created on 05. April 2014, 22:01
 */

#ifndef SHOWCOMMAND_H
#define	SHOWCOMMAND_H

#include "Command.h"
#include "Game.h"

class ShowCommand : public Command {
public:
  ShowCommand();
  virtual ~ShowCommand();
  virtual int execute(Game& board, std::vector<std::string>& params);
  Game::Game(unsigned int cash, unsigned int player_hp, unsigned int width, 
          unsigned int height);
private:
  ShowCommand(const ShowCommand& orig); 
  ShowCommand& operator=(const ShowCommand& original);
};

#endif	/* SHOWCOMMAND_H */

