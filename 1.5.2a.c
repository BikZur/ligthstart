#include <stdio.h>
/*подсчет вводимых символов; 1 версия*/
int main()
    {
    double nc;
    //int c;
    //c=getchar();
    //nc=0;
    for(nc=0; getchar()!=EOF; ++nc);
            printf("%f\n", nc);
    }
