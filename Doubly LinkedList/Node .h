#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node ();
        virtual ~Node ();

        int Getdata() { return data; }
        void Setdata(int val) { data = val; }
        Node* GetNext() { return Next; }
        void SetNext(Node* val) { Next = val; }
        Node* GetPrev() { return Prev; }
        void SetPrev(Node* val) { Prev = val; }
    protected:

    private:
        int data;
        Node* Next;
        Node* Prev;
};

#endif // NODE _H
