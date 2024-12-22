#include <stdio.h>

struct sinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main(){
    struct sinhVien SV[50]= {
        {1, "Phung Vuong", 18, "0246892272"},
        {2, "Bui Vu", 18, "0287267383"},
        {3, "Le Son", 18, "03827299229"},
        {4, "Pham Anh", 18, "082624161717"},
        {5, "Hoang Nhat", 18, "01938363636"}
    };
    
    int n = 5;
    
    struct sinhVien newSV;
    int index;
    
    printf("nhap vi tri can chen (0 den %d): ", n);
    scanf("%d", &index);
    getchar();

    if(index < 0 || index > n){
        printf("vi tri chen khong hop le.\n");
        return 1;
    }
    printf("nhap id sinh vien: ");
    scanf("%d", &newSV.id);
    getchar();
    printf("nhap ten sinh vien: ");
    fgets(newSV.name, sizeof(newSV.name), stdin);
    strtok(newSV.name, "\n");
    printf("nhap tuoi sinh vien: ");
    scanf("%d", &newSV.age);
    getchar();
    printf("nhap so dien thoai sinh vien: ");
    fgets(newSV.phoneNumber, sizeof(newSV.phoneNumber), stdin);
    strtok(newSV.phoneNumber, "\n");

    for(int i = n; i > index; i--){
        SV[i] = SV[i - 1];
    }

    SV[index] = newSV;
    n++;
    printf("\nthong tin sinh vien sau khi chen:\n");
    for (int i = 0; i < n; i++) {
        printf("sinh vien %d:\n", SV[i].id);
        printf("id: %d\n", SV[i].id);
        printf("ten: %s\n", SV[i].name);
        printf("tuoi: %d\n", SV[i].age);
        printf("so dien thoai: %s\n", SV[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

