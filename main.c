#include <stdio.h>
#include <stdlib.h>
#include <linux/kernel.h>
#include <sys/sysinfo.h>

int main(int argc, char* argv[]) {
  struct sysinfo info;
  memset(&info, 0, sizeof(info));
  sysinfo(&info);
  fprintf(stderr, "totalmem : %ld kb\n", info.totalram / 1024);
  fprintf(stderr, "freemem  : %ld kb\n", info.freeram / 1024);
  return EXIT_SUCCESS;
}
