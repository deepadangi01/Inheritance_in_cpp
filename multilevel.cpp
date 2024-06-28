#include<iostream>
using namespace std;
//multilevel inheritance
class  tenth{
    public:void result10(){
        cout<<"result of 10th =80%"<<endl;
    }
};

class   twelth :public tenth{
    public:void result12(){
        cout<<"result of 12th =70%"<<endl;
    }
};

class  grd:public twelth{
    public:void resultgrd(){
        cout<<"result of grd =78%"<<endl;
    }
};
int main(){
    grd g;
    g.result10();
    g.result12();
    g.resultgrd();
    
    return 0;
}

//Aclass->Bclass->Cclass-> == this called multilevel inheritance..

