/* Enter your solutions in this file */
#include <stdio.h>
/*max function*/
int max(int a[],int n)
{
	int max=a[0];
	for (int i=0;i<n;i++)
	{
		if (a[i]>max)
			max=a[i];
		else
			continue;
	}
	return max;
}
