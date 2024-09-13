#include <iostream>
using namespace std;

int main() {
  int a,b,c,d,e,f;

  cout<<"Enter marks in English:"<<endl;
  cin>>a;
  cout<<"Enter marks in Maths:"<<endl;
  cin>>b;
  cout<<"Enter marks in Physics:"<<endl;
  cin>>c;
  cout<<"Enter marks in Biology:"<<endl;
  cin>>d;
  cout<<"Enter marks in Computer Science:"<<endl;
  cin>>e;

  f=((a+b+c+d+e)*100/500);
  cout<<"Your Percentage is :"<<f<<endl;

  if(f>=90) {
    cout<<"Your Grade is A"<<endl;
  }
  else if(f >=80) {
    cout<<"Your Grade is B"<<endl;
  }
  else if (f>=70) {
    cout<<"Your Grade is C"<<endl; 
  }
  else if(f>=50) {
    cout<<"Your Grade is D"<<endl; 
  }
  else if(f>=40) {
    cout<<"Your Grade is E"<<endl;
  }
  else if(f<=30) {
    cout<<"You are fail , Study hard next time"<<endl;
  }
  return 0;
  
}

