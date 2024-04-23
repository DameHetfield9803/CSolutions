#include <stdio.h>

int main(){
  float salary,cpf,newSalary;
  printf("Enter your salary (in SGD) > ");
  scanf("%f", &salary);
  int age;
  printf("Enter your age this year > ");
  scanf("%d", &age);
    if(age >= 18 && age <55)
  {
      newSalary = salary * 0.80;
      cpf = salary * 0.37;
      printf("Your remaining salary is %f and your CPF is %f.\n", newSalary, cpf );
      }
    if(age >= 55 && age < 60)
  {
      newSalary = salary * 0.83;
      cpf = salary * 0.325;
      printf("Your remaining salary is %f and your CPF is %f.\n", newSalary, cpf);
  }
    if(age >=60 && age < 65)
  {
        newSalary = salary * 0.885;
        cpf = salary * 0.235;
        printf("Your remaining salary is %f and your CPF is %f.\n", newSalary, cpf);
  }
    if(age >= 65 && age < 70)
  {
        newSalary = salary * 0.165;
        cpf = salary * 0.925;
        printf("Your remaining salary is %f and your CPF is %f.\n", newSalary, cpf);
  }
    if(age > 70)
  {
        newSalary = salary * 0.95;
        cpf = salary * 0.125;
        printf("Your remaining salary is %f and your CPF is %f.\n", newSalary, cpf);
  }
  return 0;
}
