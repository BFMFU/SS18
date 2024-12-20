#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		char fullName[50];
		int age;
		char phone[20];
	};
	struct Student students[5];
	for(int i=0;i<5;i++){
		printf("Moi ban nhap ho va ten sinh vien thu %d: ",i+1);
		fgets(students[i].fullName,50,stdin);
		printf("Moi ban nhap tuoi: ");
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("Moi ban nhap so dien thoai: ");
		fgets(students[i].phone,20,stdin);
	}
	for(int i=0;i<5;i++){
		printf("Thong tin sinh vien thu %d: \n",i+1);
		printf("Ten: %s",students[i].fullName);
		printf("Tuoi: %d\n",students[i].age);
		printf("So dien thoai: %s",students[i].phone);
	}
	return 0;
}

