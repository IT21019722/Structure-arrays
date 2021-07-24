#include<iostream>
using namespace std;
//function prototype
void averageMarks(int mrk1, int mrk2, float &t_avg);
//structure Marks 
struct Marks{
  int studentNo;
  int garde;
  int mark1;
  int mark2;
  float avg;
}
//get the input from 5 students;
int main()
{
  for(int x=0; x<5; x++)
  {
    cout<<"Enter the student number: ";
    cin>>Marks[x].studentNo;
    cout<<"Enter the class grade: ";
    cin>>Marks[x].grade;
    cout<<"Enter subject 1 mark: ";
    cin>>Marks[x].mark1;
    cout<<"Enter subject 2 mark: ";
    cin>>Marks[x].mark2;

    averageMarks(Marks[x].mark1, Marks[x].mark2, Marks[x].avg);

  }


  return 0;
}

void averageMarks(int mrk1, int mrk2, float &t_avg)
{
  t_avg = (mrk1 + mrk2)/2.0;
}