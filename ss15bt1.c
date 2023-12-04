#include<stdio.h>
#include<string.h>

struct student{
		char name[50];
		int age;
		char sdt[12];
		char email[50];
	};

void display(struct student s);

int main(){
	struct student s1;
	
	printf("ENTER NAME:");
	gets(s1.name);
	printf("ENTER SDT:");
	gets(s1.sdt);
	printf("ENTER email:");
	gets(s1.email);
	
	printf("ENTER AGE:");
	scanf("%d",&s1.age);
	display(s1);
	return 0;
	
}

void display (struct student s){
	printf("thong tin\n");
	printf("Name: %s\n",s.name);
	printf("age:%d\n",s.age);
	printf("Sdt: %s\n",s.sdt);
	printf("Email: %s\n",s.email);
	
}
