#include <stdio.h>

struct sinhVien{
    char name[50];
    int age;
    char phoneNumber[15];
}; 

int main()
{
    struct sinhVien std1 = {"Vu Hong Van", 20, "0987654321"};
    printf("ten sinh vien: %s\n", std1.name);
    printf("tuoi sinh vien: %d\n", std1.age);
    printf("so dien thoai: %s\n", std1.phoneNumber);

    return 0;
}

