#include <iostream>
#include <string>
using namespace std;

class labReport {
private:
   char tlId[20];   
   string labName;
   char reportType;
   char omId[20];

public:
   labReport();
   void payment(char tId[], string labN, char reportT, char oId[]);
   ~labReport();
};
