#include<stdio.h>
#define MAX 1000

//Funtion to Generate and find FIBONACCI SERIES
void fibonacci(int n)
{
	int i, t1 = 0, t2 = 1, nextTerm;
	for (i = 1; i<=n; i++)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("The number present in the position is fibonacci series and it is %d", t1);
}

//Funtion to Generate and find PRIME NUMBER SERIES
void prime(int n)
{
  //generating Prime Numbers
    int count = 0;
    int i,j,k=0,w;
     int primeNumbers[MAX];
   for(i=2;i<=MAX;i++){
        for(j=2;j<=i;j++){
             if(i%j == 0){
                 break;
             }
        }
         if(i==j){
                 primeNumbers[k] = i;//STORING IT IN A ARRAY
                 k++;
             }   
}  

  int length = sizeof(primeNumbers)/sizeof(primeNumbers[0]);  
       for(int i=0;i<length;i++){
        // printf("%d\n",primeNumbers[i]);
       }
       printf("The number present in the position is a prime number and it is %d ",primeNumbers[n-1]);
}

//MAIN FUNCTION
int main()
{
	int n;

	printf("Enter the postion to know the number");
	scanf("%d", &n);
	if(n%2 == 1)
		fibonacci (n/2 + 1);
	else
		prime(n/2);
return 0;
}