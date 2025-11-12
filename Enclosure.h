#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class enclosure(
private:
    animal* animals;
    int capacity;
    int currentCount;

public:
   enclosure();
   enclosure(animal* a, int c, int cc);
   ~enclosure();
   int getCapacity();
   int getCurrentCount();
   void setCapacity(int cap);
   void setCurrentCount(int count);
   void addAnimal(animal* a);
   void displayAnimals();

);
#endif
