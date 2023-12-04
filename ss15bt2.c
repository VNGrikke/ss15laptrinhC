#include<stdio.h>
#include<string.h>
struct std{
    char name[50];
    int age;
    char phone[15];
    char email[50];
};
void input(struct std *sv){
	printf("Nhap ten: ");	
	fgets(sv->name, sizeof(sv->name), stdin);
	printf("Nhap tuoi: ");	
	scanf("%d", &sv->age);
	fflush(stdin);
    printf("Nhap so dien thoai: ");
	fgets(sv->phone, sizeof(sv->phone), stdin);
	printf("Nhap email: ");		
	scanf("%s", &sv->email);
	}
void output( struct std *sv){
    printf("\nThong tin sinh vien:\n");
    printf("Ho ten: %s", sv->name);
    printf("Tuoi: %d\n", sv->age);
    printf("So dien thoai: %s\n", sv->phone);
    printf("Email: %s\n", sv->age);
}
int main(){
    struct std sv;
    input(&sv);
    output(&sv);
    return 0;
}
