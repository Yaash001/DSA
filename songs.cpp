#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    Node *prev = NULL;
    string name;
    Node *next = NULL;
};

class SongS{
    public:
    Node *head = NULL;
    
    void insertData(){
        Node *newNode = new Node;

        cout<<"Enter Name : ";
        cin>>newNode->name;
        if( head == NULL){
            head = newNode ;
            head->next = head;
            head->prev = head;
        }
        else{
            Node *tmp = head ;
            while (tmp->next != head){
                tmp = tmp -> next;
            }
            tmp->next = newNode;
            newNode->prev = tmp ;
            newNode->next = head ;
            head->prev = newNode;

        }
    }

    void del(){
        if (head == NULL){
            cout<<"NO DATA...";
        }
        else{
            head->prev->next = head->next;
            head->next->prev = head->prev;
            Node *tmp = head;
            head = head -> next;
            delete tmp;
            
        }
    }
    void displ(){
        Node *tmp = head;
        cout<<"\nIn Forwrad...\n";
        do{
            cout<<tmp->name+"-";
            tmp=tmp->next;
        }while(tmp != head);

        tmp = head->prev;
                cout<<"\nIn Backward...\n";

        do
        {
            cout<<tmp->name+"-";
            tmp = tmp->prev;
        }while(tmp != head->prev);
        
    }

};

int main(){
    SongS s;
    s.insertData();
        s.insertData();
    s.insertData();
s.displ();
s.del();
s.displ();

}

