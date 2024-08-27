/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *result = (int *)malloc(sizeof(int) * numsSize);
    int x= 1;
    int y=0 , z=1;
    for (int i =0; i<numsSize; i++){
        x*=nums[i];
        if (nums[i]==0){
            y++;
        }else{
            z*=nums[i];
            
        }
    }

    if (y>1)
       {
        for (int j =0; j<numsSize; j++){
           result[j] = 0;
           }
           return result;
       }
if (y==1){
    for (int i =0; i<numsSize; i++){
       
        if(nums[i]==0 )
        {
            result[i] = z;
            
                
        }
        else{
            result[i] = 0;
        }
    }
    return result;
    }
            for (int i =0; i<numsSize; i++){
                result[i] = x/nums[i];
            }
        
          
       
    
    return result;
    
    
}
int main(){
    int nums[] = {1,2,3,4};
    int *result = productExceptSelf(nums, 4, NULL);
    for (int i =0; i<4; i++){
        printf("%d ", result[i]);
    }
    return 0;
}