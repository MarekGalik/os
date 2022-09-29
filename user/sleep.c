#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
   if(argc != 2){
      write(1, "Define ticks to sleep", 20);
      exit(1);
    } 
  sleep(atoi(argv[0]));
  exit(0);
}



