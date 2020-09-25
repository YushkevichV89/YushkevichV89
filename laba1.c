#include       <sys/io.h>
#include        <stdio.h>
#include        <fcntl.h>
#include        <sys/stat.h>
#include        <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#define BUF_SIZE 10


int main(int argc, char const *argv[]) {
  int fd, ret;
  char buf[BUF_SIZE+1];
  int k;
  int n;
  printf("Для выхода введите 0\n" );
  while (k!=5) {
    printf("Введите номер строки\n" );
    scanf("%d", &n);
    fd=open("text.txt", O_RDONLY);
    switch (n) {
      case 0:
      return 0;
      case 1:
      lseek(fd, 0, SEEK_SET);
      ret = read(fd, buf, BUF_SIZE);
      printf("%s\n", buf);
      close(fd);
      break;
      case 2:
      lseek(fd, 9, SEEK_SET);
      ret = read(fd, buf, BUF_SIZE);
      printf("%s\n", buf);
      close(fd);
      break;
      case 3:
      lseek(fd, 18, SEEK_SET);
      ret = read(fd, buf, BUF_SIZE);
      printf("%s\n", buf);
      close(fd);
      break;
      case 4:
      lseek(fd, 27, SEEK_SET);
      ret = read(fd, buf, BUF_SIZE);
      printf("%s\n", buf);
      close(fd);
      break;
    }
  }

  return 0;
}
