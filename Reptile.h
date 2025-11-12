#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class reptile: public animal(
private:
   bool isVenom;
public:
   reptile();
   reptile(bool v);
   ~reptile();
   bool getIsVenom();
   void setIsVenom(bool iv);
   );

#endif
