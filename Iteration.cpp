#include<bits/stdc++.h>
#define   iteration(x)   sqrt(1/(x+1))

using namespace std;

int main()
{
	 int step=1, N=10;
	 float initial=0.75, next, e=0.0001, error;
	 cout<< setprecision(5)<< fixed;
	 cout<<"---Iteration Method---"<< endl<< endl;
	 do
	 {
		  next = iteration(initial);
		  cout<<"Iteration-"<< step<<":\t x"<<step<<" = "<< next;
		  error = abs(next-initial);
		  cout<<"\t and\t x"<<step<<"-x"<<step-1<<" = "<<error << endl;

		  step = step + 1;
		  if(step>N){
			   cout<<"Invalid...";
			   exit(0);
		  }
		  initial = next;
	 }
	 while( error > e);
	 cout<<"\nRoot is: "<< next << endl;
	 return(0);
}
