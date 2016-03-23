/*
 * Name        : sl_node.cpp
 * Author      : Ian Larkin
 * Description : SLNode Class Implementation File
 */

#include "sl_node.h"

SLNode::SLNode(int contents, SLNode* nextNode) {
    set_contents(contents);
    set_next_node(nextNode);
}

SLNode::~SLNode() {}
        
void SLNode::set_contents(int contents) {
    contents_ = contents;
}

int SLNode::contents() const {
    return contents_;
}

void SLNode::set_next_node(SLNode* nextNode) {
    next_node_ = nextNode;
    
}

SLNode* SLNode::next_node() const {
    return next_node_;
}