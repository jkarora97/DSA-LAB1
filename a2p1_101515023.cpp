#include <iostream>
using namespace std;


int max(int m, int n)
 {  return (m > n)? m: n; }

int *add(int A[], int B[], int m, int n)
{
   int size = max(m, n);
   int *sum = new int[size];


   for (int i = 0; i<m; i++)
     sum[i] = A[i];

   for (int i=0; i<n; i++)
       sum[i] += B[i];

   return sum;
}
 int *multiply(int A[], int B[], int m, int n)
{
   int *prod = new int[m+n-1];


   for (int i = 0; i<m+n-1; i++)
     prod[i] = 0;


   for (int i=0; i<m; i++)
   {

     for (int j=0; j<n; j++)
         prod[i+j] += A[i]*B[j];
   }

   return prod;
}

void printPoly(int poly[], int n)
{


    for (int i=0; i<n; i++)
    {
       cout << poly[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n-1)
       cout << " + ";
    }
}


int main()
{
    //  polynomial 5 + 10x^2 + 6x^3
    int A[] = {5, 0, 10, 6};

    //  polynomial 1 + 2x + 4x^2
    int B[] = {1, 2, 4};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);

    cout << "First polynomial is \n";
    printPoly(A, m);
    cout << "\nSecond polynomial is \n";
    printPoly(B, n);

    int *sum = add(A, B, m, n);
    int size = max(m, n);

    cout << "\nsum of polynomial is\n";
    printPoly(sum, size);
    int *prod = multiply(A, B, m, n);
     cout << "\nProduct polynomial is \n";
    printPoly(prod, m+n-1);


    return 0;
}
