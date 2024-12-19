#include <stdio.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct sinhVien SV[50];
    int n = 5;
    for (int i = 0; i < n; i++) {
        SV[i].id = i + 1;
        printf("nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("nhap ten sinh vien: ");
        fgets(SV[i].name, sizeof(SV[i].name), stdin);
        printf("nhap tuoi sinh vien: ");
        scanf("%d", &SV[i].age);
        fflush(stdin);
        printf("nhap so dien thoai sinh vien: ");
        fgets(SV[i].phoneNumber, sizeof(SV[i].phoneNumber), stdin);
        printf("\n");
    }

    printf("thong tin cac sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("sinh vien %d:\n", SV[i].id);
        printf("id: %d\n", SV[i].id);
        printf("ten: %s", SV[i].name);
        printf("tuoi: %d\n", SV[i].age);
        printf("so dien thoai: %s", SV[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

