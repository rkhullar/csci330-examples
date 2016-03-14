/*
 * @author  :  Rajan Khullar
 * @created :  03/14/16
 * @updated :  03/14/16
 */

#include <stdio.h>

int main(int argc, char **argv)
{
  printf("__STDC__ = %d\n", __STDC__);
  #if defined(__STDC_VERSION__)
    printf("__STDC_VERSION__ = %ld\n",__STDC_VERSION__);
  #endif
  return 0;
}
