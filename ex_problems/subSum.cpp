#include <iostream>

using namespace std;

int maxSubSum(int N[], int lN);

int main()
{
  int a = {1,2,-5,4,-3,2};
  int b = {1,2,5,4,-3,2};
  int c = {1,2,5,4,3,2};

  cout << "A: "<<maxSubSum(a,6)<<endl;
  cout << "B: "<<maxSubSum(b,sizeof(b)/sizeof(*b))<<endl;
  cout << "C: "<<maxSubSum(c,sizeof(c)/sizeof(*c))<<endl;
}

int * maxSubSum(int N[], int lN)
{
  int maxSum = 0;
  int maxStart
  for (int first = 0; first < lN; first++)
    {
      for (int last = first; last < lN; last++)
	{
	  
	}
    }
}
