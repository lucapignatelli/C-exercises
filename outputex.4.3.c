#include<stdio.h>

int main(void) {

int j, k, i; {


    i = 1;
    printf("%d\t", i++ -1);
    printf("%d\n", i);

    i = 10; j = 5;
    printf("%d\t", i++ -  ++j);
    printf("%d %d\n", i, j);

    i = 7; j = 8;
    printf("%d\t", i++ - --j);
    printf("%d %d\n", i, j);

    i = 3; j = 4; k = 5;
    printf("%d\n", i++ - j++ + --k);

printf("_______________________________\n");


    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);

    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);
 
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);

    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);

}

return 0;


}


