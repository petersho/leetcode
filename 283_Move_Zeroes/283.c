#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
	int i, j, tmp = 0;
    
	for (i = 0 ; i < numsSize - 1; i++) {
		for (j = i + 1 ; j < numsSize ; j++) {
			printf("before : nums[%d] = %d nums[%d] = %d\n", i, nums[i], j, nums[j]);
			if ((nums[j] != 0 && nums[i] == 0)) {
				tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
				
				break;
			}
			printf("after : nums[%d] = %d nums[%d] = %d\n", i, nums[i], j, nums[j]);
		}
	}

	for (i = 0 ; i < numsSize ; i++) {
		printf("nums[%d] = %d\n", i, nums[i]);
	}


}


int main()
{
	int num1[2] = {2, 1};
	int num2[5] = {0, 1, 0, 13, 5};
	

	moveZeroes(num1, 2);
	moveZeroes(num2, 5);


	return 0;
}
