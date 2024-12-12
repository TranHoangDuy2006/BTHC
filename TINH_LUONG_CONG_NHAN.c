#include <stdio.h>

int main ()
{
    float luong_theo_gio, tong_tien, luong_co_ban, tien_tro_cap, gio_lam_viec;
    const float phu_cap = 0.1;

    printf("\nNhap vao so gio lam viec: ");
    scanf("%f", &gio_lam_viec);

    printf("\nNhap vao muc luong theo gio: ");
    scanf("%f", &luong_theo_gio);

    luong_co_ban = (gio_lam_viec) * luong_theo_gio;

    if(gio_lam_viec > 160)
    {
        tien_tro_cap = phu_cap * luong_co_ban;
    }
        else
            {
                tien_tro_cap = 0;
            }

    tong_tien = luong_co_ban + tien_tro_cap;
    
    printf("\nTong so tien nhan duoc la: %.0f dong", tong_tien);

    printf("\n");

    printf("\nSo tien tro cap la: %.0f dong", tien_tro_cap);

    return 0;

}