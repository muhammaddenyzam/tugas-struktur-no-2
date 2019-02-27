#include <iostream>

using namespace std;
int main()
{
    int j,n, X[100];
    cout<<"input batas deret = ";
    cin>>n;cout<<"\n";
    for (j=0; j<=n; j++)
    {
        if (j<=1)
        X[j]=j ;
        else
        X[j] =X[j-1]+X[j-2];
    }
    for (j=1; j<=n; j++)
    {
        cout<<X[j]<<"  ";
        
    }
    cout<<endl<<endl;

	return 0;
}
