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
  int sub1, sub2, grd, average, stdNo;
  for(int x=0; x<5; x++)
  {
    cout<<"Enter the student number: ";
    cin>>stdNo;
    cout<<"Enter the class grade: ";
    cin>>grd;
    cout<<"Enter subject 1 mark: ";
    cin>>sub1;
    cout<<"Enter subject 2 mark: ";
    cin>>sub2;

  }


  return 0;
}

void averageMarks(int mrk1, int mrk2, float &t_avg)
{

}