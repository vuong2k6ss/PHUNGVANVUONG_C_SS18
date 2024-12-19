#include <stdio.h>

struct sinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct sinhVien SV[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("Nhap ten sinh vien: ");
        fgets(SV[i].name, sizeof(SV[i].name), stdin);
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &SV[i].age);
        fflush(stdin);
        printf("Nhap so dien thoai sinh vien: ");
        fgets(SV[i].phoneNumber, sizeof(SV[i].phoneNumber), stdin);
        printf("\n");
    }

    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++){
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s", SV[i].name);
        printf("Tuoi: %d\n", SV[i].age);
        printf("So dien thoai: %s", SV[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

