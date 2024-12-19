#include <stdio.h>

struct sinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main(){
    struct sinhVien SV[50] = {
        {1, "Phung Vuong", 18, "0246892272"},
        {2, "Bui Vu", 18, "0287267383"},
        {3, "Le Son", 18, "03827299229"},
        {4, "Pham Anh", 18, "082624161717"},
        {5, "Hoang Nhat", 18, "01938363636"}
    };

    int currentSV = 5;
    struct sinhVien newSV;
    printf("Nhap thong tin sinh vien moi:\n");
    printf("Nhap id: ");
    scanf("%d", &newSV.id);
    fflush(stdin);
    printf("Nhap ten: ");
    fgets(newSV.name, sizeof(newSV.name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &newSV.age);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    fgets(newSV.phoneNumber, sizeof(newSV.phoneNumber), stdin);
    SV[currentSV] = newSV;
    currentSV++;
    printf("\nThong tin cac sinh vien sau khi them moi:\n");
    for(int i = 0; i < currentSV; i++){
        printf("Sinh vien %d:\n", SV[i].id);
        printf("id: %d\n", SV[i].id);
        printf("ten: %s", SV[i].name);
        printf("tuoi: %d\n", SV[i].age);
        printf("so dien thoai: %s", SV[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

