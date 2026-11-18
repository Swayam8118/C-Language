#include<stdio.h>
int main()
{
    //Convert bytes into KB, MB and GB
    float bytes, kb, mb, gb;
    printf("Enter Bytes : ");
    scanf("%f",&bytes);
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    printf("KB : %0.2f\n",kb);
    printf("MB : %0.2f\n",mb);
    printf("GB : %0.2f\n",gb);


    return 0;
}