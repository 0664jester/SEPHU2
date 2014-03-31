#include "Game.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //fuer case insensitivity

using std::cout;
using std::cin;
using std::endl;


Game::Game( unsigned int cash, unsigned int player_hp, unsigned int width, 
        unsigned int height ) : cash_(cash), player_hp_(player_hp), 
        width_(width), height_(height)
{
}
void Game::addTower( Tower *tower )
{
  tower_array_.push_back(tower);
}

void Game::addMonster( Monster *monster )
{
  monster_array_.push_back(monster);
}

void Game::run()
{
  std::string input;

  std::string zeile;
  std::string to_params;
  std::vector<std::string> params;
  char zeichen;

  while(1)
  {
    cout<<"sep> ";
    getline (cin, zeile);
    //cin>>zeile;

    to_params = "";

    for(int i = 0; i < zeile.length(); i++)
    {      
      zeichen = zeile[i];
      
      if(zeichen != ' ')
      {
        to_params += zeichen;
      }
      else
      {
        params.push_back(to_params);
        to_params = "";
      }     
    }
    params.push_back(to_params);

    
    //vector ausgabe
    for(unsigned int i = 0;i<params.size();i++) cout<<params[i]<<" ";
    cout<<endl;
    
    //vector + string löschen
    params.clear();
    zeile = "";
  }
  
  
//TODO auf die params zugreifen und case sensitive machen.
//TODO Befehl echo

}
int Game::getCurrentTick() { return 2; } //Magic!
 