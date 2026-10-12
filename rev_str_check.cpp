#include <iostream>
#include <string>
using namespace std;
const int n = 50;

class Check_rev{
    public:
    string val,str,rev;
    int top = -1;

    void push(){
        if(top == n){
            cout<<"Stack Full \n";
        }
        else{
            cout<<"Enter String: ";
            cin>>val;
            for (int i = 0 ; i < val.length() ; i++){
                top++;
                str = str + val[i];
                cout<<"Inserted : "<<str[top]<<endl;
            }
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Empty";
        }
        else {
            while (top != -1) {
                char val = str[top];
                rev = rev + val;
                cout << "DELETED DATA: " << val << endl;
                top--;
            }
        }
    }
        void displ(){
        cout<<"Original String : "<<str<<endl;
        cout<<"Revesed String : "<<rev<<endl;
    }

    void compare(){
        if(str == rev ){
            cout<<"Palimdrome\n";
        }
        else{
            cout<<"Not A Palimdrome\n";
        }

    }
};

int main(){
    Check_rev r;
    r.push();
    r.pop();
    r.displ();
    r.compare();

}