#include <iostream>
using namespace std;
#include "student.h"

int main(){
  student m1(6413123,2.9,"Kiattiphum",255),m2(112),m3,*p;
  m1.display();
  cout<<"=========================="<<endl;
  m1.display_person();
  return 0;
}