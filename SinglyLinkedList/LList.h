//
//  LList.h
//  SinglyLinkedList
//
//  Created by Aj Gill on 9/3/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#ifndef LList_h
#define LList_h

class LList{
private:
    struct node{
        //data represents the integer data
        //next represents pointer to next node
        int data;
        node* next;
    };
    //Everytime I use nodePtr, it will mean struct node*
    typedef struct node* nodePtr;
    nodePtr head;
    nodePtr current;
    nodePtr temp;
    
public:
    LList();
    void Insert(int addData);
    void Remove(int removeData);
    void PrintList();
    
};


#endif /* LList_h */

