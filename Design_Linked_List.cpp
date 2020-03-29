class Node{
public:
    int val;
    Node *next;
    Node(int val)
    {
        val = val;
        next = NULL;
    }
}

class MyLinkedList {
public:
    /** Initialize your data structure here. */
    Node *head;
    int size;
    MyLinkedList()
    {   
        head = NULL;
        size=0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index)
    {
        if(index>size)
            return -1;
        Node *curr = head;
        while(index--)
        {
            curr = curr->next;
        }    
        return curr->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val)
    {
        size++;
        Node *newnode = new Node(val);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        size++;
        Node *newnode = new Node(val);
        if(head==NULL)
        {
            head = newnode;
            return;
        }    
        Node *curr = head;
        while(curr!=NULL)
        {
            curr=curr->next;
        }
        curr->next = newnode;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val)
    {
        if(index>size)
            return;
        size++;
        Node *newnode = new Node(val);
        if(index==0)
        {
            newnode->next = head;
            head = newnode;
            return;
        }
        Node *curr = head;
        for(int i=0;i<index-1;i++)
            curr=curr->next;
        newnode->next = curr->next;
        curr->next = newnode;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index)
    {
        if(index>size)
            return;
        if(index==0)
        {
            head=head->next;
            size--;
            return;
        }
        Node *curr=head;
        for(int i=0;i<index-1;i++)
            curr = curr->next;
        curr->next = curr->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */