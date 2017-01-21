#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; 
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }
                   
private:
    Node *head; 
};


void mainMenu(){
		cout<<"---MAIN MENU---"<<endl;
		cout<<"1: Insert: "<<endl;
		cout<<"2: Pop: "<<endl;
		cout<<"3: Exit: "<<endl;
		cout<<"Enter choice: ";
}
int main(){
int choice, num, burp;
	LinkedList list;

	
	while(choice!=4){
		mainMenu();
		cin>>choice;
		switch (choice)
{
			case 1:cout<<"Enter Input: ";
				   cin>>num;
				   list.addValue(num);
				   burp++;
				   cout<<"Inserted Value: "<<endl;
				    break;
				    
			case 2:	
					if (burp==0)
					cout<<"EMPTY\n";
					else
					cout<<list.popValue()<<endl;
					burp--;
					break;
					
			case 3:
					exit(1);
				   	break;
		
		default:
			cout<<"Wrong Input";	
		getch();
		
}
}
return 0;
}

