#include<stdio.h>
#include<conio.h>
void main()
{
    int length,breadth,area;
    printf("\t\tFind the Area of a Rectangle\n");
    printf("Enter the Value of Length and Breadth\n");
    scanf("%d%d",&length,&breadth);
    area=length*breadth;
    printf("Area = %d Unit Square",area);
    getch();
}
