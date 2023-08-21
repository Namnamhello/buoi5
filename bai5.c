#include <stdio.h>

struct Sinhvien{
    char name[50];
    int student_code;
    float point;
};

void nhapDanhsachSinhvien (struct Sinhvien svx[],int x){
    for (int i=1;i<=x;i++){
        printf("Nhap thong tin cho sinh vien %d: \n", i);
        getchar();
        printf("Ho va ten: ");
        gets(svx[i].name);
        printf("Ma so sinh vien: ");
        scanf("%d", &svx[i].student_code);
        printf("Diem trung binh: ");
        scanf("%f", &svx[i].point);
        printf("\n");
    }
}

int maxStudent(struct Sinhvien svx[],int x){
    float max=0.00;
    int address_max=0;
    for (int i=1;i<=x;i++){
        if (svx[i].point>max){
            address_max=i;
            max=svx[i].point;
        }
    }
    return address_max;
}

void hienThiSinhVienCoKetQuaCaoNhat(struct Sinhvien svx[],int x){
    printf("Sinh vien co diem trung binh cao nhat: \n");
    printf("Ho va ten: %s \n",svx[x].name);
    printf("Ma so sinh vien: %d \n",svx[x].student_code);
    printf("Diem trung binh: %.2f \n",svx[x].point);
}
void hienthidanhsachSinhvien (struct Sinhvien svx[],int x){
    printf("Thong tin sinh vien: \n");
    for (int i=1;i<=x;i++){
        printf("Sinh vien %d: \n",i);
        printf("Ho va ten: %s\n",svx[i].name);
        printf("Ma so sinh vien: %d\n",svx[i].student_code);
        printf("Diem trung binh: %.2f\n \n",svx[i].point);
    }
}
int main(){
    int x;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &x);
    struct Sinhvien sv[x];
    nhapDanhsachSinhvien(sv,x);
    hienthidanhsachSinhvien(sv,x);
    hienThiSinhVienCoKetQuaCaoNhat(sv,maxStudent(sv,x));
    return 0;


}