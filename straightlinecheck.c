// program to check whethet input points by user lie on a straight line
#include<stdio.h>
int main (){
    double x1,y1,z1,x2,y2,z2;
    printf("enter A(x1,x2): ");
    scanf("%lf\t%lf",&x1,&x2);
    printf("enter B(y1,y2): ");
    scanf("%lf\t%lf",&y1,&y2);
    printf("enter C(z1,z2): ");
    scanf("%lf\t%lf",&z1,&z2);
    double m1,m2;
    m1=(y2-x2)/(y1-x1);
    m2=(z2-y2)/(z1-y1);
    if (m1==m2)
    {
       printf("points form a straight line ABC");
    }
    else
    {
        printf("points do not form a straight line ABC");
    }
      return 0;
}