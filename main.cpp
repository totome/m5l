#include <iostream>
#include <string>

typedef std::string T;

struct node
{
    node * _prev;
    node * _next;
    T _val;
};

class list
{
public:
    node * _head;
    node * _tail;
    int _count;

    list();
    ~list();
    void push_back(T val);
    void pop_back();
};

list::list()
    : _head(nullptr), _tail(nullptr), _count(0)
{
}

list::~list()
{
}

void dlist::remove(dlistEl * e)
{
  count--;
  if(e->prev) e->prev->next = e->next;
  else        head = e->next;
  if(e->next) e->next->prev = e->prev;
  else        tail = e->prev;
  delete e;
}

void list::push_back(T val)
{
//----konstruction:
    node * nPtr = new node;
    nPtr->_val=val;
    nPtr->_next=nullptr;
    nPtr->_prev=_tail;

//----attach:
    _tail=nPtr;
    if(nPtr->_prev)nPtr->_prev->_next=nPtr;
    else _head=nPtr;

//----increment counter:
    ++_count;
}








int main(int argc, char ** argv)
{
    for(int i=0; i<100; i++,i++)std::cout<<i*i<<std::endl;
    return 0;
}
