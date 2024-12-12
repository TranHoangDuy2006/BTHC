#include <stdio.h>

int main ()

{
    int lua_chon;
    float chuyen_doi, tien_goc;
    const float USD = 23500;
    const float EUR = 25000;
    const float GBP = 28000;
    const float JPY = 180;
   
    printf("=========== CONG CU CHUYEN DOI TIEN TE SO ============");
    printf("\n");
    printf("\n1. USD to VND.");
    printf("\n2. EUR to VND.");
    printf("\n3. GBP to VND.");
    printf("\n4. JPY to VND.");
    printf("\n5. VND to USD.");
    printf("\n6. VND to EUR.");
    printf("\n7. VND to GBP.");
    printf("\n8. VND to JPY.");
    printf("\n");

    printf("\n-> Chon phuong an ma ban muon chuyen doi tien te: ");
    scanf("%d", &lua_chon);

    printf("\n-> Nhap so tien ban muon chuyen doi (USD / EUR / GBP / JPY / VND): ");
    scanf("%f", &tien_goc);

    switch(lua_chon)
    {
    case 1: 
        chuyen_doi = tien_goc * USD;
        break;
    case 2:
        chuyen_doi = tien_goc * EUR;
        break;
    case 3:
        chuyen_doi = tien_goc * GBP;
        break;
    case 4:
        chuyen_doi = tien_goc * JPY;
        break;
    case 5:
        chuyen_doi = tien_goc / USD;
        break;
    case 6:
        chuyen_doi = tien_goc / EUR;
        break;
    case 7:
        chuyen_doi = tien_goc / GBP;
        break;
    case 8:
        chuyen_doi = tien_goc / JPY;
        break;
    default: 
        printf("\nBan nhap sai lua chon!");
    }

    printf("\n[ * ] Tien sau khi duoc chuyen doi la: %.0f (USD, EUR, GBP, JPY, VND)", chuyen_doi);

    return 0;
}