#include <stdio.h>
#include <stdint.h>

int hammingWeight(uint32_t n)
{
	int flag = 0;

	while (n > 0) {
		if (n & 0x1) {
			flag++;
		}
		n = n >> 1;

	}
    
	return flag;
}

int main()
{
	int ret = 0;

	ret = hammingWeight(0xf);

	printf("ret = %d\n", ret);

	return 0;
}
