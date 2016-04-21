#ifndef PAINTINGDLLIST_H_INCLUDED
#define PAINTINGDLLIST_H_INCLUDED

#include <string>
using namespace std;

struct DLNode
{
    int info;
    struct DLNode *next;
    struct DLNode *prev;
}*start;

class PaintingDLList{
public:
    double_llist()
        {
            start = NULL;
        }
        void create_DLList(int value);
        void add_DLbegin(int value);
        void add_DLafter(int value, int position);
        void delete_DLelement(int value);
        void search_DLelement(int value);
        void display_DLList();
        void count();

};

#endif // PAINTINGDLLIST_H_INCLUDED
