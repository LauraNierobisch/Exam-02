#include<unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int flag = 0;
    if(argc== 2)
    {
        while(argv[1][i])
        {
        while(argv[1][i] == '\t' || argv[1][i] == ' ')
        {
            i++;
        }
        if(argv[1][i] != '\t' || argv[1][i] != ' ')
        {
            write(1,&argv[1][i],1);
            i++;
        }
        while(argv[1][i] == '\t' || argv[1][i] == ' ')
        {
            i++;
            flag = 1;
        }
        if(flag  && argv[1][i] != '\0' )
        {
            write(1,"   ", 3);
            flag = 0;
        }
        }
    }
    write(1, "\n", 1);
    return(0);
}