#include <iostream>
#include <string>
using namespace std;
const int M = 25;

class Order{
    public:
    int f=-1,r=-1;
    int id[M];

    void ip(){
        
        cout<<"Enter ID: ";
        cin>>id[r];
        
    }

    void enque(){
        if((r+1)%M == f){

            cout<<"Queue Full";
        }
        else{
            if(r == -1) {

                f = 0 ;
                r = 0 ; 
                ip();
            }
            else{
                r = (r+1)%M;
                ip();

            }

        }

    }

    void dequew(){
        if (f == -1)
        {
cout<<"EMPTY";
        }
else
{
    if((f+1)%M == r ){
            cout<<"Deleeted Value : "<<id[f]<<endl;
f=-1;
r=-1;

    }
    else{
    cout<<"Deleeted Value : "<<id[f]<<endl;
    f = (f+1)%M;
}
}
        

    }

    void displ(){
        if(r == -1 ){
            cout<<"EMPTY";
        }
        else{
            for(int i = f ; ; i = (i+1)%M){
                cout<<id[i]<<endl;
                if(i == r){
                    break;
                }
            }
        }
    }
};

int main(){
    Order r;
    r.enque();
    r.enque();
    r.enque();
    r.displ();
    r.dequew();
    r.displ();

}