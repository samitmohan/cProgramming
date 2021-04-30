//Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.


#include <stdio.h>

int setbits(const int x, const int p, const int n, const int y)
{
	return x & ~(((1U << n) - 1) << p) | (y & ((1U << n) - 1)) << p;
}

int main(void)
{
	printf("0x%X\n", setbits(0x0FFF, 4, 4, 0xA));

	return 0;
}
