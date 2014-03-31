
#include "SpeedRatio.h"
//TODO Speedratio umschreiben


SpeedRatio::SpeedRatio(int events, int ticks)
{
  ticks_ = ticks;
  events_ = events;
}
unsigned int SpeedRatio::currentEvents(unsigned int current_tick)
{
  if((current_tick % ticks_)==0)
  {
    return events_;
  }
  else
  {
    return 0;
  }

}

