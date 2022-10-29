#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        int temp = max(A,B);
        temp = max(C,temp);
        int w = min(A,B);
        w = min(w,C);
        cout<<temp-w<<endl;
    }
    return 0;
  
  
  
}  
