#include <stdio.h>
#include <stdlib.h>
//ponteiro
void permuta(int *par1,int *par2){
int vtemp;
vtemp = *par1;
     *par1 = *par2;
     *par2 = vtemp;
}
int main()
{
    int x = 10;
    int y =5;

  //  permuta(x,y);
    permuta(&x,&y);

    printf("a variavel x = %d\n",x);
    printf("a variavel y = %d\n",y);
    //*ponteiro
    int *px = NULL ;

    px =&x;
    //altera o x
    *px = 100;
    printf("a variavel x = %d\n",x);
    printf("endere�o de memoria de x = %d\n",&x);
    printf("a variavel px = %d\n",px);
    return 0;
}

