#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

class animal(
public:
   animal.h::animal(){
    name = "";
    age = 0;
    isHungry == false;
}
   animal.h::animal(string n, int a, bool ih){
    name = n;
    age = a;
    isHungry = ih;
   }

   animal.h::~animal(){}

   string getName(){
      return name;
   }

   int getAge(){
      return  age;
   }

   bool getIsHungry(){
      return isHungry;
   }

   void setName(string n){
      name = n;
   }
   void setAge(int a) {
      age = a;
   }
   void setIsHungry(bool h){
      isHungry = h;
   }
   void display(){
      cout
   }

   void feed();
   );
   
   
   
   class mammal: public animal(
public:
   bird();
   bird(string fc);
   ~bird();
   string getFurColor();
   void setFurColor(string f);
   );
   
   
   class bird : public animal(
public:
   bird();
   bird(float ws);
   ~bird();
   float getWingSpan();
   void setWingSpan(float w);
   );
   
   
   class reptile: public animal(
public:
   reptile();
   reptile(bool v);
   ~reptile();
   bool getIsVenom();
   void setIsVenom(bool iv);
   );
   
   
   class enclosure(
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


class visitor(
public:
   visitor();
   visitor(string vn, int tb);
   ~visitor();
   string getVisitorName();
   int getTicketsBought();
   void setVistorName(string n);
   void setTicketsBought(int t);
   void displayInfo();
   
   );


// ============== MAIN FUNCTION ==============
int main() {
    
    
    return 0;
}
