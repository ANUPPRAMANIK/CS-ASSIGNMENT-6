#include<iostream>
using namespace std;
main() {
	int i=0;
	float f=0;
	double d=0;
	char ch='0';
	int *in;
	in=&i;
	float *fl;
	fl=&f;
	double *dbl;
	dbl=&d;
	char *c;
	c=&ch;
	cout<<" \nPRINTING THE SIZE OF PRIMITIVE VARIABLES: ";
	cout<<" \nSize of INTEGER VARIABLE is: "<<sizeof(i);
	cout<<" \nSize of FLOAT VARIABLE is: "<<sizeof(f);
	cout<<" \nSize of DOUBLE VARIABLE is: "<<sizeof(d);
	cout<<" \nSize of CHARACTER VARIABLE is: "<<sizeof(ch);
	cout<<" \n \nPRINTING THE SIZE OF PRIMITIVE VARIABLES AS POINTERS:";
	cout<<" \nSize of INTEGER VARIABLE is: "<<sizeof(in);
	cout<<" \nSize of FLOAT VARIABLE is: "<<sizeof(fl);
	cout<<" \nSize of DOUBLE VARIABLE is: "<<sizeof(dbl);
	cout<<" \nSize of CHARACTER VARIABLE is: "<<sizeof(c);
	}
