#include <stdio.h>

void printInt(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar(n / divisor + '0');
		n %= divisor;
		divisor /= 10;
	}
}

int main(void)
{
	int n = 12345;

	printInt(n);
	return (0);
}

/*#include <stdio.h>
void printInt(int n) {
    if(n < 0) {
        putchar('-');
        n = -n;
    }
    do {
        putchar(n%10 + '0');
        n /= 10;
    } while(n);
}
int main() {
    int n = 12345;
    printInt(n);
    return 0;
}
*/

/*
#include <stdio.h>
void printInt(int n) {
    if(n < 0) {
        putchar('-');
        n = -n;
    }
    if(n/10)
        printInt(n/10);
    putchar(n%10 + '0');
}
int main() {
    int n = 12345;
    printInt(n);
    return 0;
}

The program first takes an input number from the user.
It then checks if the number is negative.
If the number is negative, it prints a ‘-’ sign and makes the number positive.
It then checks if the number has more than one digit.
If it does, it calls itself recursively with the quotient of the number divided by 10.
Finally, it prints the last digit of the number.
*/

