//
//  DFA.hpp
//  Javacompiler
//
//  Created by 张恩智 on 2020/03/08.
//  Copyright © 2020 张恩智. All rights reserved.
//

#ifndef DFA_h
#define DFA_h

#include "Token.hpp"
#include "Token_Type.hpp"
#include <vector>
typedef TOKEN_TYPE TYPE;

struct DFA_Node{
    std::string lexeme = "END";
    DFA_Node* next = nullptr;
};

class DFA {
    
    private:
    
        DFA_Node* root;
        TYPE type;
        
    public:
    
        void Build_Tree();
        std::string Search_Tree(Token token);
    
    DFA(std::vector<std::string>){Build_Tree();};
//    DFA(TYPE type);
};

#endif /* DFA_h */
