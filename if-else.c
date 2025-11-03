 #include <stdio.h>

  int main() {
    int maths, phy, chem, total, math_phy_total;


    printf(" your  Physics marks  : ");
    scanf("%d", &phy);

    printf("your   Chemistry marks: ");
    scanf("%d", &chem);

    printf("your   Mathematics marks : ");
    scanf("%d", &maths);


    total = maths + phy + chem;
    math_phy_total = maths + phy;


    printf("Total marks of Maths, Physics and Chemistry : %d\n", total);
    printf("Total marks of Maths and Physics : %d\n", math_phy_total);


    if ((maths >= 65 && phy >= 55 && chem >= 50 && total >= 190) ||
        (math_phy_total >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
     }
