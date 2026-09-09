#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Arr[] = "Preplacement acticity";
    int iRet = 0;

    fd = open("Marvellous.txt",O_RDWR | O_Append);

    iRet = write(fd,Arr,22); //Kashyat lihaych,kay lihayvh, kiti lihaych

    printf("%d bytes gets writen in the file\n ",iRet);
    close(fd);

    return 0;
}

