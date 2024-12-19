#include <stdio.h>

struct sinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct sinhVien std1;

    printf("nhap ten sinh vien: ");
    fgets(std1.name, sizeof(std1.name), stdin);
    printf("nhap tuoi sinh vien: ");
    scanf("%d", &std1.age);
    fflush(stdin);
    printf("nhap so dien thoai sinh vien: ");
    fgets(std1.phoneNumber, sizeof(std1.phoneNumber), stdin);
    printf("ten sinh vien: %s", std1.name);
    printf("tuoi sinh vien: %d\n", std1.age);
    printf("so dien thoai: %s", std1.phoneNumber);

    return 0;
}

