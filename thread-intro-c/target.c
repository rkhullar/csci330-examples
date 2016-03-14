/*
 * @author  :  Rajan Khullar
 * @created :  03/13/16
 * @updated :  03/13/16
 */

#include <stdio.h>
#include <pthread.h>  // POSIX Thread

#define LIMIT 10000

void *doit(void *arg)
{
  int i;
  while(i < LIMIT)
  {
    printf("hello\n");
    i++;
  }
  return 0;
}

int main(int argc, char **argv)
{
  pthread_t t;
  printf("creating thread\n");
  pthread_create(&t, NULL, doit, "hello");
  printf("joining thread\n");
  pthread_join(t, NULL);
  return 0;
}
