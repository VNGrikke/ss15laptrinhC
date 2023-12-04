#include <stdio.h>
#include <string.h>

typedef struct student{
    char FullName[100];
    char Address[100];
    char Email[100];
    char PhoneNumber[100];
    int Age;
} students1;

void input(students1 *students[], int n){
    int i;
	printf("Nhap thong tin: \n");
    for ( i = 0; i < n; i++){
        printf("Nhap thong tin hoc sinh thu %d:\n", i + 1);
            fflush(stdin);
        printf("Ho ten: ");
        gets((*students[i]).FullName);
            fflush(stdin);
        printf("Tuoi: ");
        scanf("%d", &(*students[i]).Age);
            fflush(stdin);
        printf("Dia chi: ");
        gets((*students[i]).Address);
            fflush(stdin);
        printf("Email: ");
        gets((*students[i]).Email);
            fflush(stdin);
        printf("So dien thoai: ");
        gets((*students[i]).PhoneNumber);
            fflush(stdin);
    }
}
void output(students1 *students[], int n){
    int i;
	for ( i = 0; i < n; i++){
        printf("\nthong tin hoc sinh thu %d\n", i + 1);
        printf("Ho ten: %s\n", (*students[i]).FullName);
        printf("Tuoi: %d\n", (*students[i]).Age);
        printf("Dia chi: %s\n", (*students[i]).Address);
        printf("Email: %s\n", (*students[i]).Email);
        printf("So dien thoai: %s\n", (*students[i]).PhoneNumber);
    }
    printf("\n");
}

void repair( students1 *students[], int x){
	
	printf("sua thong tin hoc sinh thu %d:\n", x + 1);
    		fflush(stdin);
	    printf("Ho ten: ");
        gets((*students[x]).FullName);
	        fflush(stdin);
        printf("Tuoi: ");
        scanf("%d", &(*students[x]).Age);
    	    fflush(stdin);
        printf("Dia chi: ");
        gets((*students[x]).Address);
        	fflush(stdin);
        printf("Email: ");
        gets((*students[x]).Email);
        	fflush(stdin);
        printf("So dien thoai: ");
        gets((*students[x]).PhoneNumber);
        	fflush(stdin);
}
void del( students1 *students[], int y, int n){
	int i;
	for( i = y-1; i < n-1; i++){
		*students[i] = *students[i+1];
	}
}
void add(students1 *students[], int z, int n){
	int i;
	for( i = n+1; i > z; i--){
		if(z > n){
			z = n+1;
		}
			*students[i] = *students[i-1];
	}
		printf("them thong tin hoc sinh thu %d:\n", z);
    		fflush(stdin);
	    printf("Ho ten: ");
        gets((*students[z]).FullName);
	        fflush(stdin);
        printf("Tuoi: ");
        scanf("%d", &(*students[z]).Age);
    	    fflush(stdin);
        printf("Dia chi: ");
        gets((*students[z]).Address);
        	fflush(stdin);
        printf("Email: ");
        gets((*students[z]).Email);
        	fflush(stdin);
        printf("So dien thoai: ");
        gets((*students[z]).PhoneNumber);
        	fflush(stdin);

}


int main(){
    students1 students[100];
    int i,x,y,z;
	int n;
    scanf("%d", &n);
    students1 *ptr[100];
    for (i = 0; i < n; i++){
        ptr[i] = &students[i];
    }
    input(ptr, n);
    output(ptr, n);
    
    printf("nhap vi tri ban muon sua: ");
	scanf("%d", &x);
	repair(ptr, x - 1);
	output(ptr, n);
	
	printf("nhap vi tri ban muon xoa: ");
	scanf("%d", &y);
	del(ptr, y, n);
	output(ptr, n-1);
	
	printf("nhap vi tri muon them: ");
	scanf("%d", &z);
	add(ptr, z, n+1);
	output(ptr, n+1);
	
}
