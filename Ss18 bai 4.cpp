#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
int main() {
    Student students[50];
    int numberOfStudents = 5;
    printf("Nhap thong tin cua %d sinh vien:\n", numberOfStudents);
    for (int i = 0; i < numberOfStudents; i++) {
        students[i].id = i + 1; 
        printf("Sinh vien %d:\n", i + 1);
        printf("Nhap ten: ");
        scanf(" %[^\n]", students[i].name);
        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);
        printf("Nhap so dien thoai: ");
        scanf(" %[^\n]", students[i].phoneNumber);
    }
    printf("\nDanh sach sinh vien:\n");
    printf("%-5s %-20s %-10s %-15s\n", "ID", "Ten", "Tuoi", "So dien thoai");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("%-5d %-20s %-10d %-15s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
    return 0;
}

