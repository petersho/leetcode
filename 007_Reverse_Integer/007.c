#include <stdio.h>

int reverse(int x)
{
	int tmp = 0;
	int dig = 0;
	int neg = 0;

	if (x == -2147483648) {
		return 0;
	}

	if (x < 0) {
		neg = 1;
		x = -x;
	}
		
	while (x >= 10) {
		tmp = x / 10;
		dig += x % (tmp * 10);
		if (dig > 214748364) {
               		return 0;
     		}

		dig = dig * 10;
		printf("dig = %d\n", dig);
		x = tmp;
	}

	dig = dig + x;

	if (neg > 0) {
		dig = -dig;
	}

	printf("dig = %d\n", dig);
    	
	return dig;

}

int main()
{
	int ret = 0;

	ret = reverse(1);


	printf("ret = %d\n", ret);
	ret = reverse(-2147483648);
	printf("ret = %d\n", ret);

	return 0;
}
