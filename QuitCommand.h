/* 
 * File:   ExitCommand.h
 * Author: jester1
 *
 * Created on 04. April 2014, 13:59
 */

#ifndef EXITCOMMAND_H
#define	EXITCOMMAND_H
#include "Command.h" //pure virtual method ist in der abstrakten kl command

class QuitCommand : public Command { //is a command
public:
  QuitCommand();
  virtual ~QuitCommand();
  virtual int execute(Game& board, std::vector<std::string>& params);
private:
   QuitCommand(const QuitCommand& orig); //copy constructor private!!! b(a)
   QuitCommand& operator=(const QuitCommand& original);
};
#endif	/* EXITCOMMAND_H */

