#include <stdio.h>

int fibo(int num)
{

    if (num<2)
    {
        return num;
    }else{
        return fibo(num-1)+fibo(num-2);
    }


}

int main()
{

    int num,fiboNum;
    scanf("%d",&num);

    fiboNum = fibo(num);

    printf("%d",fiboNum);

    return 0;
}