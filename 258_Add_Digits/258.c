#include <stdio.h>

int addDigits(int num)
{
	int tmp = 0;
	int dig = 0;

start:
	do {
		tmp = num / 10;
		dig += num - tmp * 10;
		num /= 10;
	} while (num > 0);

	if (dig >= 10) {
		num = dig;
		dig = 0;
		goto start;
	}

	return dig;

}


int main()
{
	int result = 0;

	result = addDigits(19);

	printf("result = %d\n", result);

	return 0;
}
