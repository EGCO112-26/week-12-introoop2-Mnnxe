#include <iostream>
using namespace std;

class student{
private:
  string name;
  int age;

public:
  void set_name(string="Yme");
  void print_name();
  void set_age(int = 0);
  int get_age();
};

//set name
void student::set_name(string n){
  name = n;
}
//print name
void student::print_name(){
  cout<<"Name: "<<name<<endl;
}
//set age
void student::set_age(int a){
  if(a>80) age = 80;
  else if(a<13) age = 13;
  else age = a;
}

//get age
int student::get_age(){
  return age;
}
