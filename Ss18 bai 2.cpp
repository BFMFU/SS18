#include<stdio.h>
#include<string.h>
struct string{
	char name[50];
	int age;
	char phoneNumber[20];
};
int main(){
	string s;
	printf("Nhap ho va ten cua ban: ");
	fgets(s.name,50,stdin);
	printf("Nhap so tuoi cua ban: ");
	scanf("%d",&s.age);
	fflush(stdin);
	printf("Nhap so dien thoai cua ban: ");
	fgets(s.phoneNumber,20,stdin);
	printf("Ho va ten: %s",s.name);
	printf("Tuoi: %d\n",s.age);
	printf("So dien thoai: %s\n",s.phoneNumber);
	return 0;
}

