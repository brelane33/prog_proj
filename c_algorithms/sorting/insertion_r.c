#include "PPSH.h"

int main()
{
    /*for each position in the array, compare to previous/left elements,
     swapping with each greater element until no larger elements
     or position 0 is reached*/
    int nums[] = {25, 15, 19, 48, 27, 42, 40, 13, 4, 30, 39, 33, 44, 16, 49, 14, 28, 17, 47, 31};
     int s1 = sizeof(nums)/sizeof(nums[0]);

     printarray(nums, s1);

     for (int i = 0; i < s1; i++){
         int j=i;
         while(nums[j]<nums[j-1] && j>0){
            swapints(&nums[j],&nums[j-1]);
            j--;
         }
     }

     printf("\n");
     printarray(nums, s1);

/*    int testarray[] = {4,2,0,1,15};
    testiewestie(&testarray[0], testarray);
    swapints(&testarray[0],&testarray[1]);
    for(int i=0; i<4;i++){
      printf("%d ",testarray[i]);
    }
    printarray(testarray,(sizeof(testarray)/sizeof(testarray[0])));
*/
    return 0;
}
