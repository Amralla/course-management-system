#include <iostream>
#include "course.cpp"
using namespace std;
int main()
{
    cout<<"\n\n\t\t\t----------welcom to course registeration-------------\n\n";
    CourseM obj;
    int choice;
    while (true)
    {
        cout << "pres 1 to register data\n";
        cout << "pres 2 to display  data\n";
        cout << "pres 3 to update  data\n";
        cout << "pres 4 to  reserch data\n";
        cout << "pres 5 to  delete  data\n";
        cout << "pres 6 to  reserch by course data\n";
        cout << "pres 7 to  exit from program\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj.enter();
            break;
        case 2:
            obj.show();
            break;
        case 3:
            obj.Edit();
            break;
        case 4:
            obj.search();
            break;
        case 5:
            obj.deleteRecord();
            break;
        case 6:
            obj.searchbyCourse();
            break;
        case 7:
            exit(0);
            break;
        default:
            cout << "errer choice \n\n";
            break;
        }
    }

    system("pause");
    return 0;
}