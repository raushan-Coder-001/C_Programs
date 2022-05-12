 #include<iostream>
 using namespace std;

 class linklist
 {
     protected :
        
        struct node
            {
                int data;
                node *link;
            }*p;

    public :

        linklist();
        ~linklist();
        void append(int num);
        void addatbeg(int num);
        void addafter(int c,int num);
        void del(int num);
 };

 linklist::linklist()
 {
     p = NULL;
 }

 linklist::~linklist() //destructor
 {
     node *t;
     while(p != NULL)
     {
         t = p;
         p = p->link;
         delete t;
     }
 }

 //adds nodes at the end of the linked list
 void linklist::append(int num)
 {
     node *q, *t;

     if (p == NULL) // if the list is empty
     {
         p = new node ;
         p -> data = num;
         p ->link = NULL;
     }
     else
     {
         q = p ;
         while (q ->link != NULL)
         q = q ->link;

         t = new node;
         t-> data = num;
         t-> link = NULL;
         q-> link = t;
     }
 }

 //adds node at beggining of list
 void linklist::addatbeg(int num)
 {
     node *q;

     q = new node;
     q->data = num;
     q->link = p;
     p = q;
 }

 //adds a new node after the specified number of nodes
 void linklist::addafter(int c, int num)
 {
     node *q,*t;
     int i;

     for(i = 0,q=p;i<c;i++)
     {
         q = q->link;
         if(q==NULL) // if end of list is encountered
         {
             cout<<endl<<"There are less than "<<c<<" elements.";
             return;
         }
     }

     //insert new node
     t->new node;
     t->data = num;
     t->link = q->link;
     q->link = t;
 }

 //delete node from the linked list
 void linklist::del (int num)
 {
     node *q,*r;

     q = p;
     if(q -> data == num) // if node to delete is first node
     {
         p = q->link;
         delete q;
         return;
     }

     r = q;
     while (q != NULL)
     {
         if(q->data == num)
         {
             r ->link = q ->link;
             delete q;
             return;
         }

         r=q;
         q = r->link;
     }

     cout<<endl<<"Element "<<num<<" not found";
 }

 class linklist1: public linklist{
     public :
         void display();
         int coutn();
 };

 //displays contents of the linked list
 void linklist1::display()
 {
     node *q;

     cout<<endl;
     for(q = p;q != NULL;q=q->link)
     cout<<q->data<<endl;
 }
 //counts number of nodes in the linked list
 int linklist1::coutn()
 {
     node *q;
     int c = 0;
     for(q = p;q!=NULL;q = q->link)
     c++;

     return (c);
 }
 
 int main()
 {
     linklist1 ll;

     cout<<endl
 }