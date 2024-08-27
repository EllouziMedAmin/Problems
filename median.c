#include <stdio.h>
#include <stdlib.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0, j = 0, k = 0;
    int *arr = (int *)malloc(sizeof(int) * (nums1Size + nums2Size));
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            arr[k++] = nums1[i++];
        } else {
            arr[k++] = nums2[j++];
        }
    }
    while (i < nums1Size) {
        arr[k++] = nums1[i++];
    }
    while (j < nums2Size) {
        arr[k++] = nums2[j++];
    }
    if (k % 2 == 0) {
        return (arr[k / 2] + arr[k / 2 - 1]) / 2.0;
    } else {
        return arr[k / 2];
    }
    
    
}
double methode2(int *nums1, int nums1Size, int *nums2, int nums2Size){
    int m1 = (nums1Size == 0) ? 0 : nums1[nums1Size - 1];
    int m2 = (nums2Size == 0) ? 0 : nums2[nums2Size - 1];
    int min1 = (nums1Size == 0) ? 0 : nums1[0];
    int min2 = (nums2Size == 0) ? 0 : nums2[0];
    int max = (m1 > m2) ? m1 : m2;
    int min = (min1 < min2) ? min1 : min2;
    return ((max + min)/2.0);
    

}
int main() {
    int nums1[] = {1, 2};
    int nums2[] = {3,4};
    printf("%f\n", findMedianSortedArrays(nums1, 2, nums2, 2));
    printf("%f\n", methode2(nums1, 2, nums2, 2));
    return 0;
}