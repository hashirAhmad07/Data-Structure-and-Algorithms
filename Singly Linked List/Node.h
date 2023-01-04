#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();

        virtual ~Node();

        int Getdata() { return data; }
        void Setdata(int val) { data = val; }
        Node* Getnext() { return next; }
        void Setnext(Node* val) { next = val; }
        void display();
    protected:

    private:
        int data;
        Node* next;
};

#endif // NODE_H
