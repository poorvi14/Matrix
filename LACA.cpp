#include<stdio.h>
int main()
{
	float a[3][3],b[3][1],c[1][3],d[3][3],mul[3][3],G[3][3],sum=0.0,f,e[3][1]={1.0,1.0,1.0},g,p[3][3],C,N,T;
	int i,j,k;
	printf("Enter the winning points of C,N and T teams respectively \n");

	for(i=0;i<3;i++)             //*matrix h i.e, the points*//
	{
		for(j=0;j<3;j++)
		{
			scanf("%f",&a[i][j]);

		}
	}
	printf("\n enter the value of damping factor (f)");                    //*value of f which depends on previous events*//
	scanf("%f",&f);
	printf("the stochastic matrix is :- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=a[i][j]*f;
			printf("\t%f",a[i][j]);
		}
		printf("\n");

	}
	g=1.0-f;
	printf("the value of 1-f is %f",g);
	          printf("\n the matrix b(product of g and e) is:-");                                               //*matrix b which is product of g and e*//

		for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			b[i][j]=g*e[i][j];
			printf("\n\t %f",b[i][j]);

		}
		printf("\n");
	}
	printf("now enter the values of v matrix \n");    //*matrix c which is personalizatin vector which is the probablity for each team winning*//
		for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\t%f",&c[i][j]);

		}
		printf("\n");
	}
		for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%f",c[i][j]);

		}
		printf("\n");
	}
	     //*product of two matrices*//
		 for(i=0;i<3;i++)
		 {
		 	for(j=0;j<3;j++)
		 	{
		 		sum=0;
		 		for(k=0;k<3;k++)
		 		{
		 		sum=sum+b[i][k]*c[k][j];
		 	}
		 	mul[i][j]=sum;
		 }
      }

    printf("Product of ge(b) and v(c):-\n");

  for(i=0;i<3;i++)
		 {
		 	for(j=0;j<3;j++)
		 	{

        printf("%f\t", mul[i][j]);
}
      printf("\n");
    }
	for(i=0;i<3;i++)                     //*addition of a and mul*//
     {  for(j=0;j<3;j++)
	 {
            G[i][j]=a[i][j]+mul[i][j];
        }
    }
   printf("\n hence the first row of google matrix is \n");
   for(i=0;i<1;i++)
   {
       printf("\n");
       for(j=0;j<3;j++)
            printf("%f\t",G[i][j]);
}
	printf("\n After arranging first row in ascending order\n");          //*arranging the first row in ascending order*//
    for (i = 0; i < 1; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            for (k =(j + 1); k < 3; ++k)
            {
                if (G[i][j] > G[i][k])
                {
                    p[i][j]= G[i][j];
                    G[i][j] = G[i][k];
                    G[i][k] = p[i][j];
                }
            }
             printf("\n the points table which gives the ranking of the teams is %f", G[i][j]);
        }
        
    }
}

