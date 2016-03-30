/*
 * Name        : sl_node.h
 * Author      : Ian Larkin
 * Description : SLNode Class Header File
 */

#pragma once

#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;
//SLNode Class
class SLNode {
    public:
        //Constructor - defulats contents_ to 0 and next_node_ to  NULL
        SLNode(int contents = 0, SLNode* nextNode = NULL);
        //destructor
        ~SLNode();
        
        //sets and gets for our two private variables, contents_ and next_node_
        void set_contents(int);
        int contents() const;
        void set_next_node(SLNode*);
        SLNode* next_node() const;
    private:
        SLNode* next_node_;
        int contents_;
};