#include<iostream>
using namespace std;
//---Inheritance  : inheritance is use to inherit the properties of parents class we can use defferent type of inherit and aleats two class heritance 
/*
there are 5 type of inheritance 
1.single inheritance ->in a single inher.we used only two class where the first class is called parent  class and the sencond is called child class child class
we create the an object  child class, and inherit the properti of by using public key word ,access the data member child class as where as parent class,
in inheritance private, public or protected inheritance.. in a 
2.multiple 
3.multilever
4.hierarchical
5.hybrid


//single inheritance --sytax--- 

class parentclass{
    datamembers;
    function()
};
class childclass :public parentclass
{
    datamember;
    function()
} ;
*/
class parent{
    int p;
    public:parent(){
        cout<<"assign memory of parent class"<<endl;
    }
    ~parent(){
        cout<<"release memory of parent class"<<endl;
    }

    protected:void display(){
        cout<<"parent class "<<endl;
    }
};
class child:public parent{
    int b;
    public:child(){
        cout<<"assign memory of child class"<<endl;
    }
    ~ child(){
        cout<<"release memory of child class"<<endl;
    }
    public:void show(){
        display();
        cout<<"this is child class"<<endl;
    }
};
int main(){
   child c;
   
   c.show(); 
    return 0;
}

/*

output
assign memory parent
assign memory chlid

child class
parent class
release memory child
release memory parent

lifo--last in and  first out
*/