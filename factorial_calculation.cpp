#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

long long fact_rec(int n){
if(n<=1) return n;
return n*fact_rec(n-1);
}

long long fact_iter(int n){
    int t=1;
 for(int i=2;i<=n;i++) t*=i;

 return t;

}

int main()
{

     auto start = chrono::steady_clock::now();
     fact_rec(10000);

     //fact_iter();

     auto end = chrono::steady_clock::now();

     auto diff = end - start;

     cout << chrono::duration<long double>(diff).count() << " s" << endl;

    return 0;
}
