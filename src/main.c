#include <stdio.h>
struct StudentData{
  char *stu_name;
  int stu_id;
  int stu_age;
};
int main ()
{
  /*student is the variable of stucture StudentData*/
  struct StudentData student;
  /* Assinging the valus to StudentData*/
  student.stu_name = "qianqiyue";
  student.stu_id = 123456;
  student.stu_age = 22;

  /* Displaying the values of struct member */
  printf ("Hello, %s", student.stu_name);
  printf ("\nStudent Id is: %d", student.stu_id);
  printf ("\nStudent Age is: %d",student .stu_age);
  printf ("\nGoodbye !");
  return 0;
}