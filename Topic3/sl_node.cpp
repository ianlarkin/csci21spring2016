/*
 * Name        : sl_node.cpp
 * Author      : Ian Larkin
 * Description : SLNode Class Implementation File
 */

#include "sl_node.h"

//Constructor
SLNode::SLNode(int contents, SLNode* nextNode) {
    set_contents(contents);
    set_next_node(nextNode);
}

//Destructor
SLNode::~SLNode() {}

//Function to set contents_
//One Parameter - contents
void SLNode::set_contents(int contents) {
    contents_ = contents;
}

//Getter function of private variable contents_
int SLNode::contents() const {
    return contents_;
}

//Function to set next_node_
//One Parameter - nextNode
void SLNode::set_next_node(SLNode* nextNode) {
    next_node_ = nextNode;
    
}

//Getter function of private variable next_node_
SLNode* SLNode::next_node() const {
    return next_node_;
}