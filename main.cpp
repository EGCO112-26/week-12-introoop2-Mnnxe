#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
/*  
  student s1,s2;

 s1.set_name("Amy"); s1.set_age(11);
 s2.set_name("James"); s2.set_age(80);
 s1.get_age()>s2.get_age() ? s1.print_name() : s2.print_name(); 
 cout <<"is older"<<endl;
*/
  int N = (argc-1)/2;
  student a[N];
  // Set age and set name for the first two ppl
  int i,j,age;
  string n;
  // 1. Ask for N names and N age using cin
  /*
  for(i=0;i<N;i++){
    cout<<"Name: ";
    cin>>n;
    a[i].set_name(n);
    cout<<"Age: ";
    cin>>age;
    a[i].set_age(age);
    }
    */

  
  //4. Change input from cin to argv
  for(i=1,j=0;i<argc,j<N;i+=2,j++){
    a[j].set_name(argv[i]);
    a[j].set_age(atoi(argv[i+1]));
  }

  //2. Print name and age of all N ppl
  /*
  cout<<"--Name List--"<<endl;
  for(i=0;i<N;i++){
    a[i].print_name();
    cout<<"Age: "<<a[i].get_age()<<endl;
  }
*/
  //3. Print name and age of the youngest person
  //Find what the age of the youngest person
  student young = a[0];
  for(i=0;i<N;i++){
    if(a[i].get_age()<young.get_age()) young = a[i];
  }
  
  // Print all info for the yougest person
  cout<<"Youngest student"<<endl;
  int min = young.get_age();
  for(i=0;i<N;i++){
    if(a[i].get_age()==min){
      a[i].print_name();
      cout<<"Age: "<<a[i].get_age()<<endl;
    }
  }
 return 0;
}
  
  


