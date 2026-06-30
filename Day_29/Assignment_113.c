#include <stdio.h>

int main(){
    int ch;
    float a,b;
    printf("---MENU DRIVEN CALCULATOR---\n");
    printf("1.ADD 2.SUB 3.MUL 4.DIV 5.EXIT\n");
    while (1)
    {
       printf("\nEnter your choice (1-5) : ");
       scanf("%d", &ch);
       if (ch==5)
       {
        printf("exiting program\n");
        break;
       }
       if (ch>=1&&ch<=4)
       {
        printf("Enter 1st number : \n");
        scanf("%f",&a);
        printf("Enter 2nd number : \n");
        scanf("%f",&b);
       }
       switch (ch)
       {
       case 1:
       printf("Result=%.2f\n",a+b);
        break;
        case 2:
       printf("Result=%.2f\n",a-b);
        break;
        case 3:
       printf("Result=%.2f\n",a*b);
        break;
        case 4:
        if (b!=0)
        {
            printf("Result=%.2f\n",a/b);
        }
        else{
            printf("ERROR");
           
        }
        break;
       

       
       default: 
       printf("INVALID!!!!\n");
       break;
        
       }
       
       
    }
    
    return 0;
}
