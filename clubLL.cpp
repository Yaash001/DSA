#include <string>
#include <iostream>
using namespace std;
class Node{
    public:
    int id;
    string name;
    Node *next = NULL;
};

Node *head = NULL;

void insertatBegin(){
    int i;
    string n;
    cout<<"Enter ID : ";
    cin >> i;
    cout<<"Enter Name :";
    cin>>n;
    Node *newNode = new Node;
    
        newNode->id = i;
        newNode->name = n;
    if(head == NULL)
    head = newNode;

    else{
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(){
    int i;
    string n;
    cout<<"Enter ID : ";
    cin >> i;
    cout<<"Enter Name :";
    cin>>n;
    Node *newNode = new Node;
    Node *tmp = head;
    
        newNode->id = i;
        newNode->name = n;

    if(head == NULL){
        head = newNode;
    }
    else{
        
        while(tmp->next != NULL){
            tmp=tmp->next;
        }
         tmp->next = newNode ;
    }
}

void insert() {
    int i;
    string n;

    cout << "Enter ID: ";
    cin >> i;

    cout << "Enter Name: ";
    cin >> n;

    Node *newNode = new Node;
    newNode->id = i;
    newNode->name = n;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node *tmp = head;

        while (tmp->next != NULL) {
            if (tmp->next->next == NULL)
                break;

            tmp = tmp->next;
        }

        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}

void display(){
    Node *tmp = head;
    if(tmp == NULL ){
        cout<<"EMPTY";
    }
    else{
    while (tmp != NULL){
                cout<<"------------------------------------------------";

        cout<<"|ID : " << tmp->id << "|\nName : "<<tmp->name <<endl;
        cout<<"------------------------------------------------";
        tmp = tmp->next;
    }
}
}

int main(){
    int ch;
    while(true)
    {
        cout<<"1.Enter President\n";
        cout<<"2. Enter Secratatry\n";
        cout<<"3.Enter Member\n";
        cout<<"4.Display\n";
        cout<<"5.Exit\n";
        cout<<"Enter Choice :  ";
        cin>>ch;
        if(ch == 1){
            insertatBegin();
            cout<<"President Data Entered\n";
        }
        else if(ch == 2){
            insertAtEnd();
            cout<<"Secratatry Data Entered\n";
        }
        else if(ch == 3){
            insert();
            cout<<"Member Data Entered\n";
        }
        else if(ch == 4){
            display();
        }
        else{
            break;
        }


    }
       
}