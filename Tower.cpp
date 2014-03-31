#include "Tower.h"
#include "Game.h"

Tower::Tower(std::string name, unsigned int damage, unsigned int range,
		SpeedRatio shoot_ratio, Game* game) : shoot_ratio_(shoot_ratio)
{
		name_ = name;
		damage_ = damage;
		range_ = range;
		shoot_ratio_ = shoot_ratio;
		game_ = game;
}
	unsigned int Tower::fire()
{
		return shoot_ratio_.currentEvents(game_->getCurrentTick());
}
