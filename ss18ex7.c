#include <stdio.h>
#include <string.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct sinhVien SV[50] = {
        {1, "Phung Vuong", 18, "0246892272"},
        {2, "Bui Vu", 18, "0287267383"},
        {3, "Le Son", 18, "03827299229"},
        {4, "Pham Anh", 18, "082624161717"},
        {5, "Hoang Nhat", 18, "01938363636"}
    };

    char deletename[50];
    int flag = 0;

    printf("Nhap ten sinh vien can xoa: ");
    fgets(deletename, sizeof(deletename), stdin);
    strtok(deletename, "\n");
    for(int i = 0; i < 5; i++){
        if(strcmp(SV[i].name, deletename) == 0){
            flag = 1;
            for(int j = i; j < 4; j++){ 
                SV[j] = SV[j + 1];
            }
            break;
        }
    }
    if(flag==0){
        printf("Khong tim thay sinh vien co ten '%s'.\n", deletename);
    }else{
        printf("\nThong tin sinh vien sau khi xoa:\n");
        for(int i = 0; i < 4; i++){ 
            printf("Sinh vien %d:\n", SV[i].id);
            printf("ID: %d\n", SV[i].id);
            printf("Ten: %s\n", SV[i].name);
            printf("Tuoi: %d\n", SV[i].age);
            printf("So dien thoai: %s\n", SV[i].phoneNumber);
            printf("\n");
        }
    }

    return 0;
}

