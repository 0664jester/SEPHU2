
#include "Monster.h"


Monster::Monster(const std::string &name, unsigned int monster_attacken_damage, 
        unsigned int monster_life, unsigned int monster_attribute, 
        SpeedRatio speed, Game* game) : speedratio_(speed)
{
		monster_name_ = name;
		monster_attackaen_damage_ = monster_attacken_damage;
		monster_life_ = monster_life;
		monster_attribute_ = monster_attribute; 
		game_ = game;
}

int Monster::move()
{
		return speedratio_.currentEvents(game_->getCurrentTick());
}

