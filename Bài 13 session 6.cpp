#include <iostream>
using namespace std;
int main (){
	int n,a,b,temp;
	a=0;  // so thu nhat
	b=1;  //  so thu hai
	printf ("nhap vao so fibonaci can xuat ra man hinh: ");
	scanf ("%d", &n);
	for (int i=0;i<n;i++){
		printf ("%d\n",a);
		temp =a;
		a=b;
		b=temp+b;
	}
	return 0;
}

