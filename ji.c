#include <stdio.h>
int main(void)
{
	int i;
	float x=1.0, size=0.0, sum=0.0;

	for(i=1;i<=100;i++) {
		size = x*x;
		sum+=size;
		printf("x�� ���̰� %f �� �� ������ ���̴� %f - %f = %f \n", x, sum, sum-size, size);
		x=x/2;
		if(size<=0.000001)
			break;
	}
	printf("����� ������ ���� %f�Դϴ�.\n",sum-size);

	return 0;
	
}
