
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int findClosestNumber(int* nums, int numsSize) {
    int i , min;
    min = *nums;
    for (i = 1 ; i <numsSize ; i ++){
    if (abs(*(nums +i))<abs(min )
    || 
    (abs(*(nums +i))== abs(min) 
    && 
    *(nums +i) > min )){
        min=*(nums + i);
    }
    
    }
    return min;
}

int main(){
    int nums[] = {2,3,4,5,-4,-1,1};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    printf("%d \n",findClosestNumber(nums,numsSize));
}