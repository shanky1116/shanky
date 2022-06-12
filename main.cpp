#include<stdio.h>
#include<conio.h>
int main()
{
	char processnum[10][10];
	int arrival[10], service[10], completetime[10], starttime[10],tat[10],wt[10],i,n;
	int totalwt=0, totaltat=0;
	printf("enter the number of process: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the process name, arrival time and service time: \n");
		scanf("%s%d%d", &processnum[i], &arrival[i], &service[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			starttime[i]=arrival[i];
			wt[i]=starttime[i]-arrival[i];
			completetime[i]=starttime[i]+service[i];
			tat[i]=completetime[i]-arrival[i];
		}
		else
		{
			starttime[i]=completetime[i-1];
			wt[i]=starttime[i]-arrival[i];
			completetime[i]=starttime[i]+service[i];
			tat[i]=completetime[i]-arrival[i];
		}
	}
	printf("processname arrivaltime servicetime completetime tat\n");
	for(i=0;i<n;i++)
	{
		printf("\n%s%\td%\td%\td\n");
	}
}
