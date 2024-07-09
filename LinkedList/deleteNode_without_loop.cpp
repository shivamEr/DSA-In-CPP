#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printNodes(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void InsertAtEnd(Node *&head, Node *&tail, int data)
{
    Node *n = new Node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        InsertAtEnd(head, tail, data);
    }
    tail->next = head;
   bool ans = detectCycle(head);
   if (ans)
   {
    cout<<"Cycle Detected!"<<endl;
   }
   else{
    cout<<"Cycle Not Detected!";
   }
   
    return 0;
}