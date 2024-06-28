#include<iostream>
using namespace std;
// Herarical inheritance-- in a herarical inheritance there are mutiple class an each class property of root 
//class it means to say each an every child class have a common parent class..

class rgpv{
    public:void boss(){
        cout<<"University "<<endl;
    }
};
class tit:public rgpv{
    public:void student(){
    cout<<"1.tit student id"<<endl;
    }
};
class jnct:public rgpv{
    public:void student(){
    cout<<"2.jnct student is"<<endl;
    }
};
class lnct:public rgpv{
    public:void student(){
    cout<<"3.lnct student is"<<endl;
    }
};
class oist:public rgpv{
    public:void student(){
    cout<<"4.oist student is "<<endl;
    }
};
int main(){
    tit t1;
    t1.student();
    t1.boss();
    jnct t2;
    t2.student();
    t2.boss();
    lnct t3;
    t3.student();
    t3.boss();

    oist t4;
    t4.student();
    t4.boss();

    
    return 0;
}