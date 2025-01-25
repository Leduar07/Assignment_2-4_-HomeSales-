#include "stdio.h"

int main(void) {

  int sales1 = 0, sales2 = 0, sales3 = 0;
  char d, e, f, name;

  do {
    printf("Please enter the name of the sales person:\n");
    scanf(" %c", &name);

    if (name == 'd' || name == 'D') {
      printf("Please enter the sales for the day:\n");
      scanf("%d", &sales1);

    } else if (name == 'e' || name == 'E') {
      printf("Please enter the sales for the day:\n");
      scanf("%d", &sales2);

    } else if (name == 'f' || name == 'F') {
      printf("Please enter the sales for the day:\n");
      scanf("%d", &sales3);

    } else if (name == 'z' || name == 'Z') {
      printf("Grand total: %d\n", sales1 + sales2 + sales3);

      if (sales1 > sales2 && sales1 > sales3) {
        printf("Highest Sale: Danielle\n");
      }
      if (sales2 > sales1 && sales2 > sales3) {
        printf("Highest Sale: Edward\n");
      }
      if (sales3 > sales1 && sales3 > sales2) {
        printf("Highest Sale: Francis\n");
      }
      return 1;
    } else {
      printf("\nintermediate output: Error, invalid salesperson selected, please try again\n");
    }

  } while (name != 'z' || name != 'Z');

  return 0;
}