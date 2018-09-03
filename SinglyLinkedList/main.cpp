//
//  main.cpp
//  SinglyLinkedList
//
//  Created by Aj Gill on 9/3/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>

#include "LList.h"

using namespace std;

int main() {
    LList Aj;
    Aj.Insert(5);
    Aj.Insert(8);
    Aj.Insert(10);
    Aj.PrintList();
    Aj.Remove(8);
    Aj.PrintList();
    Aj.Remove(5);
    Aj.PrintList();
    
}
