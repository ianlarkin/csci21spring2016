/*
 * Name        : sl_list.h
 * Author      : Ian Larkin
 * Description : SLList Class Header File
 */

#pragma once

#include "sl_node.h"

class SLList {
    public:
        SLList(SLNode* head = NULL, unsigned int size = 0);
        ~SLList();
        void InsertHead(int);
        void RemoveHead();
        void Clear();
        unsigned int size();
        string ToString() const;
        
    private:
        SLNode* head_;
        unsigned int size_;
};

