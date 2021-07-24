#include<iostream>
#include<iomanip>
using namespace std;
//function prototype
void averageMarks(int mrk1, int mrk2, float &t_avg);
//structure Marks 
struct Marks{   //consider as field names 
  int studentNo;
  int grade;
  int mark1;
  int mark2;
  float avg;
};
//get the input from 5 students;
int main()
{
  Marks array1[3];  //array number according to the number of records in the table
  int x;
  for(x=0; x<3; x++)
  {
    cout<<"Student "<<x+1<<endl;
    cout<<"Enter the student number: ";
    cin>>array1[x].studentNo;
    cout<<"Enter the class grade: ";
    cin>>array1[x].grade;
    cout<<"Enter subject 1 mark: ";
    cin>>array1[x].mark1;
    cout<<"Enter subject 2 mark: ";
    cin>>array1[x].mark2;

    //call the function 
    averageMarks(array1[x].mark1, array1[x].mark2, array1[x].avg);
  }

  cout<<"Student Num\tGrade\tSubject 1\tSubject 2\tAverage"<<endl;  //table headings
    
  for(x=0; x<3; x++)//display the table
  {
    cout<<array1[x].studentNo<<"\t\t\t"<<array1[x].grade<<"\t\t"<<array1[x].mark1<<"\t\t\t"<<array1[x].mark2<<"\t\t\t";
    cout<<setw(5)<<setiosflags(ios::fixed)<<setprecision(2)<<array1[x].avg<<endl;
  }
  return 0;
}

void averageMarks(int mrk1, int mrk2, float &t_avg)
{
  t_avg = (mrk1 + mrk2)/2.0;
}