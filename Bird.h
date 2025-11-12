#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class bird : public animal(
private:
    float wingSpan;
public:
   bird();
   bird(float wingSpan);
   ~bird();
   float getWingSpan();
   void setWingSpan(float w);
   );

#endif
