#include <stdio.h>

struct test1 {
    int age;
    char name[50]; 
    int height;
};

int main() {
    struct test1 s; 

    printf("enter age: ");
    scanf("%d", &s.age); 
    printf("enter name: ");
    scanf(" %49s", s.name); 
    printf("enter height: ");
    scanf("%d", &s.height); 

    printf("%d, %s, %d\n", s.age, s.name, s.height); 

    return 0;
}

