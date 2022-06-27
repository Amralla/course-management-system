#include "umlClass.h"
using namespace std;

void CourseM::enter()
{
    int n;
    cout << "\t\t\t\t\t\tHow Many Stydent You Want To Enter : ";
    cin >> n;
    if (total == 0)
    {
        total = total + n;
        for (int i = 0; i < n; i++)
        {
            cout << "\nEnter data of Stydent : " << i + 1 << endl
                 << endl;
            cout << "Enter your name :  ";
            cin >> name[i];
            cout << "Enter your id number :  ";
            cin >> num_id[i];
            cout << "Enter your course :  ";
            cin >> course[i];
            cout << "Enter your Email :  ";
            cin >> email[i];
            cout << "Enter your phone :  ";
            cin >> phone[i];
        }
    }
    else
    {
        for (int i = total; i < n + total; i++)
        {
            cout << "\nEnter data of Stydent : " << i + 1 << endl
                 << endl;
            cout << "Enter your name :  ";
            cin >> name[i];
            cout << "Enter your id number :  ";
            cin >> num_id[i];
            cout << "Enter your course :  ";
            cin >> course[i];
            cout << "Enter your Email :  ";
            cin >> email[i];
            cout << "Enter your phone :  ";
            cin >> phone[i];
        }
        total = total + n;
    }
}
// end of register
void CourseM::show()
{
    if (total == 0)
        return;
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "\ndata of stydent:  " << i + 1 << endl
                 << endl;
            cout << "Name is:  " << name[i] << endl;
            cout << "Id is:  " << num_id[i] << endl;
            cout << "course is:  " << course[i] << endl;
            cout << "Email is:  " << email[i] << endl;
            cout << "Phone is:  " << phone[i] << endl;
        }
    }
}

void CourseM::search()
{
    int id;
    cout << "\t\t\t\t\tEnter your id which you want to search:  ";
    cin >> id;
    for (int i = 0; i < total; i++)
    {
        if (id == num_id[i])
        {
            cout << "\ndata of stydent:  " << i + 1 << endl
                 << endl;
            cout << "Name is:  " << name[i]<<endl;
            cout << "Id is:  " << num_id[i]<<endl;
            cout << "course is:  " << course[i]<<endl;
            cout << "Email is:  " << email[i]<<endl;
            cout << "Phone is:  " << phone[i]<<endl;
            cout<<"\t\t\tthis end of display\n\n";
        }
    }
}

void CourseM::Edit()
{
    int id;
    cout << "\t\t\t\t\t\tEnter your id which you want to update:  ";
    cin >> id;
    for (int i = 0; i < total; i++)
    {
        if (id == num_id[i])
        {
            cout << "nthe previous data \n\n";
            cout << "data of stydent:  " << i + 1 << endl
                 << endl;
            cout << "Name is:  " << name[i];
            cout << "Id is:  " << num_id[i];
            cout << "course is:  " << course[i];
            cout << "Email is:  " << email[i];
            cout << "Phone is:  " << phone[i];
            cout << "\nenter new data \n";
            cout << "Enter your name :  ";
            cin >> name[i];
            cout << "Enter your id number :  ";
            cin >> num_id[i];
            cout << "Enter your course :  ";
            cin >> course[i];
            cout << "Enter your Email :  ";
            cin >> email[i];
            cout << "Enter your phone :  ";
            cin >> phone[i];
        }
    }
}
void CourseM::deleteRecord()
{
    int num;
    int id;
    cout << "\t\t\t\tpress 1 to delete all data " << endl;
    cout << "\t\t\t\tpress 2 to delete specific data " << endl;
    cin >> num;
    if (num == 1)
    {
        total = 0;
    }
    else if (num == 2)
    {
        cout << "\t\t\t\tEnter your id which you want to delete it:  ";
        cin >> id;
        for (int i = 0; i < total; i++)
        {
            if (id == num_id[i])
            {
                for (int j = i; i < total; i++)
                {
                    name[j] = name[j + 1];
                    course[j] = course[j + 1];
                    email[j] = email[j + 1];
                    num_id[j] = num_id[j + 1];
                    phone[j] = phone[j + 1];
                }
                total--;
                cout << "your required record is deleted !!----\n\n";
            }
        }
    }
}
void CourseM::searchbyCourse()
{
    int m = 0;
    string cours;
    cout << "\t\t\tplease enter your course name:  ";
    cin >> cours;
    cout << "your register member in this course is\n";
    for (int i = 0; i < total; i++)
    {
        if (cours == course[i])
        {
            cout << "your name is: " << name[i] << endl;
            cout << "your id is:  " << num_id[i] << endl;
            m++;
        }
    }
    cout<<"\n the number of registe in course of "<<cours<<" is:  "<<m<<endl<<endl;
}