#include<stdio.h>
#include<string.h>
struct string{
	char name[50];
	char age[10];
	char phoneNumber[50];
};
int main(){
	string s ;
	strcpy(s.name,"Nguyen Duy Manh");
	strcpy(s.age,"18");
	strcpy(s.phoneNumber,"0344762838");
	printf("Thong tin sinh vien: \n");
	printf("Ho va ten: %s\n",s.name);
	printf("Tuoi: %s\n",s.age);
	printf("So dien thoai: %s\n",s.phoneNumber);
	return 0;
}

