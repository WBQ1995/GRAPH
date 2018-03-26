//
//  main.cpp
//  GRAPH
//
//  Created by PRO on 2018-03-25.
//  Copyright © 2018 AIR. All rights reserved.
//

#include <iostream>
#include <queue>
#include "mgraph.h"

using namespace std;

int main(int argc, const char * argv[]) {
   
    mgraph g;
    initial(g);
    auto_create(g);
    print(g);
    
    return 0;
}
