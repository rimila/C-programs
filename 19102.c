#include<stdio.h>
void main()
{
	int rnum=9102;
	switch(rnum%5)
	{
		case 1 : printf("1");
		case 2 : printf("2");
		case 3 : printf("3");
		case 0 : printf("4");
	}
}
