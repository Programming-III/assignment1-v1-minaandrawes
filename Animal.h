#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

 class animal(
private:
    string name;
    int age
    bool isHungry;

public:
   animal();
   animal(string n, int a, bool isHungry);
   ~animal();
   string getName();
   int getAge();
   bool getIsHungry();
   void setName(string n) ;
   void setAge(int a) ;
   void setIsHungry(bool h);

   );

#endif
