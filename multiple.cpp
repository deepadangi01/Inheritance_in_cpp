#include<iostream>
using namespace std;
//multiple inheritance--
//note-> there may be diaman problem if and only if the singnature of the function are same for multiple classes which will inherit by it

//as a same function name is error thought ambiguity
class  tenth{
    public:tenth(){
        cout<<"contractor 10th"<<endl;
    }
    ~tenth(){
        cout<<"release 10th "<<endl;
    }
    
    public:void result10(){
        cout<<"result of 10th =80%"<<endl;
    }
};

class twelth{
    public:twelth(){
        cout<<"contractor 12th"<<endl;
    }
    ~twelth(){
        cout<<"release 12th "<<endl;
    }
    public:void result12(){
        cout<<"result of 12th =70%"<<endl;
    }
};
class top{
    protected:void show(){
        cout<<"show result"<<endl;
    }
};

class  grd:public twelth,public tenth ,public top{//constractor atomatic call hota hai and flow  first twelth and tenth and grd parent and grd then t
    public:grd(){
        cout<<"contractor grd" <<endl;
    }
   ~grd(){ 
        cout<<"release grd " <<endl;
    }
    public:void resultgrd(){
        

        cout<<"result of grd =78%"<<endl;
        show();
    }
};
int main(){
    grd g;
   
    
    return 0;
}

// multiple inheritace--> in a multiple inheritance we also create more then two classes but child class inherit the properties of multiple class