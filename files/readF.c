#include <stdlib.h>
#define BUFSIZE   1024
#define O_RDONLY  00
int main ()
{
  char buffer [BUFSIZE];
  int length;
  int fd;
  if ( ( fd = open ("alice.txt", O_RDONLY) ) < 0 ) {
     perror("Unable to open data");
    exit (1);
  }
  while ( (length = read (fd, buffer, BUFSIZE)) > 0 ) {
    write (1, buffer, length);
  }
  close (fd);
  exit (0);
}
