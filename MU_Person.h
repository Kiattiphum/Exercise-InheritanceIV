#include "Thai_person.h"

class MU_person{
private: 
  long id;
	string name;
protected:

public:
	MU_person(long=112 ,string ="Prapaporn");
  void display_person();
  ~MU_person();
  string get_name();
};



MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n){
   	      id=x;
          name=n;
         cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
     cout<<"ID:"<<id<<endl;

}

string MU_person::get_name(){
  return name;
}