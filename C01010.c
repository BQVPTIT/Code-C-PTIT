#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int nam = n/365;
	n%=365;
	int tuan = n/7;
	n%=7;
	
	printf("%d %d %d",nam,tuan,n);
}