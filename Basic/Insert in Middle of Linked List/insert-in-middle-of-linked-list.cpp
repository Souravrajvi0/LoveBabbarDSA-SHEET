//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
//1 2 3 4-- xnd pos
 int findm(Node *head){
     Node*current=head;
     int i=0;
     while(current!=NULL){
         i++;
         current=current->next;
         
     }
     if(i%2==0){
         return (i/2)+1;
     }else{
         return (i/2)+2;
     }
 }
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	int mid=findm(head);
	Node *temp=new Node(x);
	 int i=1;
	 Node *current=head;
	 while(i!=mid-1){
	     current=current->next;
	     i++;
	     }
	     temp->next=current->next;
	     current->next=temp;
	     return head;
	     
	
	
	
}