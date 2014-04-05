/* 
 * File:   EchoCommand.h
 * Author: jester1
 *
 * Created on 05. April 2014, 10:37
 */

#ifndef ECHOCOMMAND_H
#define	ECHOCOMMAND_H
#include "Command.h"

class EchoCommand : public Command { //is a command
public:
  EchoCommand();
  virtual ~EchoCommand();
  virtual int execute( Game& board, std::vector<std::string>& params );
private:
   EchoCommand(const EchoCommand& orig); //copy constructor private!!! b(a)
   EchoCommand& operator=( const EchoCommand& original );
};

#endif	/* ECHOCOMMAND_H */

