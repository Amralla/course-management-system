#pragma once
#include <iostream>
using namespace std;
class CourseM{
  public:
  int num_id[20];
  string name[20],course[20],email[20],phone[20];
    int total=0;
    void enter();
    void search();
    void Edit();
    void show();
    void searchbyCourse();
    void deleteRecord();
};