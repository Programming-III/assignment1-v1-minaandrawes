#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class visitor(
private:
   string visitorName;
   int ticketsBought;

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

#endif
