#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[10],b[10],t[10],w[10],g[1],i,m;
    float att=0,awt=0;
    /*for(i=0; i<10; i++) {
        a[i]=i;
        b[i]=i;
        w[i]=i;
        g[i]=i;
    }*/
    printf("Enter the number of processes:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the burst time:");
        scanf("%d",&b[i]);
    }
    for(i=0; i<n; i++){
        printf("Enter the arrival time:");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++) {
		if(i == 0) {
        	t[i]= b[i]-a[i];
			g[0] = b[i];
			w[i] = t[i]-b[i];
		}
		else {
			g[0] += b[i];
			t[i] = g[0]-a[i];
			w[i] = t[i]-b[i];
		}
        awt=awt+w[i];
        att=att+t[i];
    }
    awt=awt/n;
    att=att/n;
    printf("\n\t Process\t Waiting time \tTurnaroundtime\n");
    for(i=0; i<n; i++) {
        printf("\t %d\t\t %d\t\t %d\n", i,w[i],t[i]);
    }
    printf("\n The average waiting time is %f \n",awt);
    printf("The average turnaround time is %f \n",att);
}
