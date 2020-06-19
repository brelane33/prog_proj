#include "PPSH.h"

int main()
{
   int nums[] = {25, 15, 19, 48, 27, 42, 40, 13, 4, 30, 39, 33, 44, 16, 49, 14, 28, 17, 47, 31};

  int s1 = sizeof(nums)/sizeof(nums[0]);

  printarray(nums, s1);
  printf("\n");
  bool needed = 0;
  int passes = 0;
//The Sort
  do {
    needed = 0;
    for(int i=0; i<s1; i++){
      if (nums[i] > nums[i+1])
        {
          needed=1;
          swapints(&nums[i],&nums[i+1]);
        }
      }
      passes++;
    } while(needed);

  printf("Sorted Array:\t");
  printarray(nums, s1);
  printf("\n");
  printf("Number of passes: %d\n", passes);

  return 0;
}
