#include <unistd.h>

int main (int argc, char * argv[])
{
    int n = 0;
    int sum = 0;
    int i = 2;

    if(argc != 2)
    {
        write(1, "0\n", 2);
        return(0);
    }

    const char *str = argv[1];
    while(*str >= '0' && *str <= '9')
    {
        n = n * 10 + (*str -'0');
        str++;
    }
    if (n <= 0)
    {
        write(1, "0\n", 2);
        return (0);
    }
    while(i <= n)
    {
        int is_prime = 1;
        int j = 2;

        while (j * j <= i)
        {
            if(i % j == 0)
            {
                is_prime = 0;
                break;
            }
            j++;
        }
        if(is_prime)
        {
            sum += i;
        }
        i++;
    }
    if(sum == 0)
    {
        write(1, "0", 1);
    }
    else
    {
        char buffer[10];
        int len = 0;

        while (sum > 0)
        {
            buffer[len] = (sum % 10) + '0';
            sum = sum / 10;
            len ++;
        }
        while(len > 0)
        {
            len --;
            write(1, &buffer[len], 1);
        }
    }

    write(1, "\n", 1);
    return 0;
}
