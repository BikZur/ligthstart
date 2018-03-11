#include <stdio.h>
/*подсчет вводимых символов; 1 версия*/
int main()
    {
    long nc;
    int c;
    //c=getchar();
    nc=0;
    while((c=getchar())!=EOF)
        {
            printf("%ld\n", nc);
            ++nc;
        }
    }
