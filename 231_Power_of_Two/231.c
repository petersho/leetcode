#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n)
{
	int flag = 2;

	while (n > 0) {
		if (n & 0x1) {
			flag--;
		}

		if (flag == 0) {
			return 0;
		}

		n = n >> 1;
	}
	
	if (flag == 1) {
		return 1;
	}

}

int main()
{
	int ret = 0;

	ret = isPowerOfTwo(1024);

	printf("ret = %d\n", ret);

	return 0;
}
