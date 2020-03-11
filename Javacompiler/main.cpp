//
//  main.cpp
//  Javacompiler
//
//  Created by 张恩智 on 2020/03/08.
//  Copyright © 2020 张恩智. All rights reserved.
//

#include <iostream>
#include "DFA.hpp"
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
//    DFA();
    vector<string> table = {
        //words
        "abstruct","externs","class","final","implement","import",
        "package","protected","public","static",
    };
    
    for(int i = 0;i!=table.size();i++)
    {
        cout<<table[i]<<endl;
    }
    
    return 0;
}
