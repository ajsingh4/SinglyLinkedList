//
//  LList.cpp
//  SinglyLinkedList
//
//  Created by Aj Gill on 9/3/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <stdio.h>
#include <iostream>

#include "LList.h"

using namespace std;

LList::LList(){
    //Define private data members in constructor
    head = NULL;
    current = NULL;
    temp = NULL;
}

//Insert at end of LL
void LList::Insert(int addData){
    //New pointer n pointing to new node
    nodePtr n = new node;
    
    //Next element of our node is set to NULL
    n->next = NULL;
    n->data = addData;
    
    //As long as the list isn't empty
    if(head != NULL){
        current = head;
        
        //Check if we are at the end of the list or not
        while(current->next != NULL){
            //Advances current pointer to last node of list
            current = current->next;
        }
        current->next = n;
    }
    //If list is not created
    else{
        head = n;
    }
}

//Walk through list and find passed in value
void LList::Remove(int removeData){
    nodePtr delPtr = NULL;
    temp = head;
    current = head;
    
    //Advance pointers through list to find value
    while(current != NULL && current->data != removeData){
        //temp is one node behind current node
        temp = current;
        current = current->next;
    }
    //Went through list and didn't find value
    if(current == NULL){
        cout << removeData << " was not in the list\n";
        delete delPtr;
    }
    //Found the node with matching value
    else{
        delPtr = current;
        //Advance current
        current = current->next;
        
        //Patch the "hole"
        temp->next = current;
        
        //If the value is the first node, advance head
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "The value " << removeData << " was deleted\n";
    }
}

void LList::PrintList(){
    current = head;
    while(current != NULL){
        cout << current->data << " - ";
        current = current->next;
    }
    cout << "\n";
}



