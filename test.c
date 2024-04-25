#include <fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main(){
	char buff[10];
	int fd;
	fd=open("test.txt", O_RDONLY);
	if(fd<0){
		perror("comment:Not open");
		exit(1);
	}
	
	fd=read(fd, buff, 10);
	
	write(1,buff,10);
	close(fd);
}
