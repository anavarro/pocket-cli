#include <stdio.h>
#include <stdlib.h>
#include "pocket.h"

int main(int argc, char **argv) {
  char *token;
  char key[50];

  pocket_init();

  printf("\n1. open your browser and go to:\n\n "
         "http://getpocket.com/developer/apps/new \n\n");
  printf(" paste here the autogenerated consumer-key string: ");
  scanf("%s", key);

  printf("\n2. Trying to obtain a request token for %s\n", key);
  token = pocket_get_token(key);

  printf("\n3. Enter the following URL and confirm the app \n %s \n(Enter when "
         "done):\n",
         get_auth_url(token));
  getchar();

  pocket_clean();
}