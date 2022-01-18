// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_map<int,int>mp;
        Node* temp1 = head2;
        while(temp1!= NULL){
            mp[temp1->data]++;
            temp1=temp1->next;
        }
        Node* root=(Node*)malloc(sizeof(Node*));
        Node* t=root;
        
        Node* temp2 = head1;
        // while(temp2){
        //     if(mp.find(temp2->data) != mp.end()){
        //         Node* t1= new Node(temp2->data);
        //         t->next=t1;
        //         t=t->next;
        //         mp[temp2->data]--;
        //         if(mp[temp2->data == 0]){
        //             mp.erase(temp2->data);
        //         }
        //         temp2=temp2->next;
        //     }
        while(temp2 != NULL){
            if(mp[temp2->data] ==1){
                Node* t1 = new Node(temp2->data);
                t->next=t1;
                t=t->next;
                mp[temp2->data]--;
                if(mp[temp2->data == 0]){
                    mp.erase(temp2->data);
                }
                
            }
                temp2=temp2->next;
        }
        
       return  root->next;
        }
    
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends