#include <stdio.h>

typedef struct Person{
  char name[20];
  int age;
  char nationality[20];
} per;

int main(){
  struct Person p1;
  strcpy(p1.name, "Anurag");
  p1.age = 20;
  strcpy(p1.nationality, "Indian");

  puts(p1.name);
  printf("%d\n", p1.age);
  puts(p1.nationality);

  per p2;
  strcpy(p2.name, "Aman");
  puts(p2.name);
}