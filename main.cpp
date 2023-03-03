#include <iostream>
#include <string>

using namespace std;

class Nodecreate
{
public:
    string name;
    string id;
    Nodecreate* next;

    Nodecreate()
    {
        name = " ";
        id = " ";
        next = NULL;
    }
    Nodecreate(string d, string s)
    {
        name = s;
        id = d;
    }


};

class linkedlists
{
public:
    Nodecreate* head;

    linkedlists()
    {
        head = NULL;
    }
    linkedlists(Nodecreate* n)
    {
        head = n;

    }

    void Appendname(Nodecreate* n)
    {
        if(head == NULL)
        {
            n->next = head;
            head = n;
            cout << "name appended"<<endl;
        }
        else
        {
            Nodecreate* ptr = head;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            cout << "name added"<<endl;
        }
    }
    void pre_appendname(Nodecreate* n)
    {
        n->next = head;
        head = n;

    }

    void printnames()
    {
        if(head == NULL)
        {
            cout << "no names added"<<endl;
        }
        else
        {
            Nodecreate* temp = head;
            while(temp!=NULL)
            {
                cout <<"("<<temp->id<<","<<temp->name<<")-->";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    linkedlists s;
    string name;
    string id;
    int option;

    do
    {
        Nodecreate* n = new Nodecreate();

        cout << "select an option "<<endl;
        cout << "1, append name and index-number"<<endl;
        cout << "2, pre append name and index-number"<<endl;
        cout << "3, clear screen"<<endl;
        cout << "4, show added names of students"<<endl;
        cout << "0, to exit the program"<<endl;
        cin>>option;

        switch(option)
        {
        case 1:
            cout << "enter name and id of student respectively"<<endl;
            cin>>n->name;
            cin>>n->id;
            s.Appendname(n);
            break;
        case 2:
            cout << "enter name of student and index number respectively to append"<<endl;
            cin>>n->name;
            cin>>n->id;
            s.pre_appendname(n);
            break;
        case 3:
            system("cls");
            break;
        case 4:
            cout << "added names with index numbers"<<endl;
            s.printnames();
            break;
        default:
            cout << "incorrect input"<<endl;

        }
    }while(option !=0);


    return 0;
}
