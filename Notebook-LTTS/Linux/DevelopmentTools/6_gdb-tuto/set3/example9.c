#include<stdio.h>

const int maxlen = 20;

typedef struct {
  int empid;
  char ename[20];
  double esalary;
  int eage;    
}employee;

//TODO : array of structures - debugging

int main(int argc, char* argv[]) {
 
  return 0;
}
employee* create(int id, char* name, double sal, int age) {
  int namelen = strlen(name);
  int len = namelen > maxlen ? maxlen : namelen;
  employee *ptr = malloc(sizeof(employee));
  ptr->empid=id;
  strncpy(ptr->ename, name, 10);     //what if namelen > 20
  ptr->esalary=100;
  ptr->eage=age;
}
void display(const employee *pc) {
  //print pc->empid, pc->ename, pc->esalary, pc->eage
}
void release(employee *ptr) {
  free(ptr);
}
