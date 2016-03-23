/*
 * Name        : sl_node.h
 * Author      : Ian Larkin
 * Description : SLNode Class Header File
 */

#pragma once

#include <cstdlib>

class SLNode {
    public:
        SLNode(int contents = 0, SLNode* nextNode = NULL);
        ~SLNode();
        void set_contents(int);
        int contents() const;
        void set_next_node(SLNode*);
        SLNode* next_node() const;
    private:
        SLNode* next_node_;
        int contents_;
};