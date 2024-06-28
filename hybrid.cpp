#include<iostream>
using namespace std;
class A{
  public:void f1(){
    cout<<"this is f1 \n";
  }
};
class B:public A{
  public:void f2(){
    cout<<"this is f2 \n";
  }
};
class C{
  public:void f3(){
    cout<<"this is f3 \n";
  }
};
class  D: public C{
  public:void f4(){
    cout<<"this is f3 \n";
  }
};
class  E: public D{
  public:void f5(){
    cout<<"this is f5 \n";
  }
};
class  F: public E, public B{
  public:void f6(){
    cout<<"this is f6 \n";
  }
};


int main(){
    F a;
    a.f1();
    a.f2();
    a.f3();
    a.f4();
    a.f5();
    a.f6();
    

    
    return 0;
}
