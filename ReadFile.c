#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = write(fd,Arr,10); //Kashyatun vachaych,kay Wachwaych, kiti wachvaych

    printf("%d bytes gets writen in the file\n ",Ret);
    printf("ata is : %s\n",Arr);

    close(fd);

    return 0;
}
