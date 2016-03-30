/*
 * Name        : sl_list.cpp
 * Author      : Ian Larkin
 * Description : SLList class implementation File
 */


#include "sl_list.h"




SLList::SLList(SLNode* head, unsigned int size) {
    head_ = head;
    size_ = size;
}

SLList::~SLList() {
    Clear();
}

void SLList::InsertHead(int contents) {
    SLNode* node = new SLNode(contents);
	  node->set_next_node(head_);
	  head_ = node;
	  size_++;
}

void SLList::RemoveHead() {
    if (head_ !=NULL) {
        SLNode* temp = head_->next_node();
        delete head_;
        head_ = temp;
        size_--;
   
   
    
}
}
void SLList::Clear() {
  while(head_ != NULL) {
        RemoveHead();
    }
    
}
unsigned int SLList::size() {
    return size_;
}
string SLList::ToString() const {
    stringstream ss;
    for (SLNode* i = head_; i != NULL; i = i->next_node()) {
       
        ss << i->contents();
        if (i->next_node() != NULL) {
            ss << ", ";
    }
    }
    return ss.str();
}

 
 