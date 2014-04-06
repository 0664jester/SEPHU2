#include "Game.h"
#include "QuitCommand.h"
#include "EchoCommand.h"
#include "Tower.h"
#include "Monster.h"


#include <sstream> //str
#include <iostream>
#include <string> //vector von char
#include <vector>
#include <algorithm> //fuer case insensitivity 


using std::cout;
using std::cin;
using std::endl;


Game::Game( unsigned int cash, unsigned int player_hp, unsigned int width, 
        unsigned int height ) : cash_(cash), player_hp_(player_hp), 
        width_(width), height_(height)
{

  command_array_.push_back(new QuitCommand());
  command_array_.push_back(new EchoCommand());
  
}


Game::~Game()//alle vectors löschen
{
  for(std::vector<Command*>::iterator iter = command_array_.begin(); 
          iter != command_array_.end(); iter++)
  {
    delete *iter;
  }
    for(std::vector<Tower*>::iterator iter = tower_array_.begin(); 
          iter != tower_array_.end(); iter++)
  {
    delete *iter;
  }
    for(std::vector<Monster*>::iterator iter = monster_array_.begin(); 
          iter != monster_array_.end(); iter++)
  {
    delete *iter;
  }
}

void Game::addTower( Tower *tower )
{
  tower_array_.push_back(tower);
}

void Game::addMonster( Monster *monster )
{
  monster_array_.push_back( monster );
}

void Game::run()
{
  std::string zeile;
  std::string to_params;
  std::vector<std::string> params;
  std::stringstream ss;

  while(1)
  {
    cout<<"sep> ";
    
    if( !getline(cin, zeile) ) //auf cin steht eine error flag
    {
      cin.clear();
      cin.ignore();
      continue;
    }//getline ist fehleranfällig
    //cin.ignore(); // \n wird rausgelöscht
    //cin>>zeile;

    to_params = "";
    ss.clear(); 
    ss.str( zeile );
    while(ss >> to_params) //solange im ss ein wort ist gibt er es ins to params
    {    
      params.push_back( to_params );
    }
    if( params.empty() )
    {
      continue;
    }
    std::transform( params[0].begin(), params[0].end(), params[0].begin(), 
            ::tolower ); //start, ende, überschreiben auf start
    
    for( unsigned int i = 0;i<command_array_.size();i++ )
    {
//      if( params[0] != command_array_[i]->getName() )
//      {
//        std::cout << "Error: Unknown command!" << std::endl;
//        break;
//      }
      if( params[0] == command_array_[i]->getName() )
      {
        int return_code = command_array_[i]->execute( *this, params );
        //this is ein spezial pointer auf das aktuelle objekt &
        if( return_code == Command::COMMAND_QUIT )
        {
          return; 
        }
        if( return_code == Command::COMMAND_ECHO )
        {
          if( params.size() == 1 )
          {
            std::cout << "Error: Wrong parameter count!" << std::endl;
          }  
        }
        if( return_code == Command::COMMAND_SHOW )
        { 
          return; 
        }     
      }
    }
    for( unsigned int i = 0;i<params.size();i++ ) 
    {
      ss.clear();
      ss.str( params[i] );
      int c = 0;
      ss >> c;
    }
 
    //vector + string löschen
    params.clear();
    zeile = "";
  }
  

}
int Game::getCurrentTick() { return 2; } //Magic!
 