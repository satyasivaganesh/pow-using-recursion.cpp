#include <iostream>
using namespace std;
int power(int n,int p){
    if(p==1){
        return n;
    }
    else{
        if(p%2==0){
            return power(n*n,p/2);
        }
        else{
            return n*power(n*n,p/2);
        }
    }
    
}

int main() {
    int n,p;
	cin>>n>>p;
	cout<<power(n,p);
	return 0;
}
