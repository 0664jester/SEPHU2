/* 
 * File:   ShowCommand.h
 * Author: jester1
 *
 * Created on 05. April 2014, 22:01
 */

#ifndef SHOWCOMMAND_H
#define	SHOWCOMMAND_H

class ShowCommand : public Command {
public:
  ShowCommand();
  virtual ~ShowCommand();
  virtual int execute(Game& board, std::vector<std::string>& params);
private:
  ShowCommand(const QuitCommand& orig); 
  ShowCommand& operator=(const QuitCommand& original);  
};

#endif	/* SHOWCOMMAND_H */

