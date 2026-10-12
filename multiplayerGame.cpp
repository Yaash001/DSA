#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    int id;
    string name;
    Node *next = NULL;
};

Node *head = NULL,*turn=NULL;

class Game{
    public:
    

    void getData(){
        Node *newNode = new Node;
        cout<<"ENTER PALYER NAME : ";
        cin>>newNode->name;
        cout<<"ENTER PALYER ID : ";
        cin>>newNode->id;
        if(head == NULL){
            head = newNode;
            turn = head;
            head->next = head;
        }
        else{
            Node *tmp = head;
            while (tmp->next != head )
            {
tmp = tmp->next;            }
tmp->next = newNode;

            
            newNode->next = head;

        }
        
    }

    void del(){
        if (head == NULL){
            cout<<"no data";
        }
        else{
            Node *tmp = head;
        while (tmp->next!= head)
        {
tmp = tmp->next;       
 }
 tmp->next = head->next;
 tmp = head;
 head = head ->next;
 turn = head;
 cout<<"DELECTED PALYER :"<<tmp->name<<endl;
 delete tmp;

        }
               
    }
    void displCurr(){
        if (head == NULL)
        {
            cout<<"NO DATA AVAILABEL";
        }
        else{
            cout<<"CURRENT PLAYER : "<<turn->name<<endl;
        }
        
    }

    void nextPlayer(){
        if(head == NULL){
            cout<<"NO DATA";
        }
        else{
            turn = turn -> next;
        }
    }

};

    int main(){

        Game g;
       g.getData();
        g.getData();
                g.getData();
        g.getData();

        g.displCurr();
        g.nextPlayer();
                g.displCurr();

    }