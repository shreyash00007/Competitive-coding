/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int BinarySearch (int A[], int n, int X,int OK){
   int Left=0, Right=n-1, mid;
   int result =-1;
   while (Left <= Right) {
    mid = (Left + Right) /2;
    if (X==A[mid]) {
        result=mid;
       if (OK==1) Right=mid-1;
       if (OK==2) Left=mid+1;

    }else if (X<A[mid]) Right=mid-1;
    else Left=mid-1;
   }
   return result;
}
int main()
{
    int A[] = {1,1,1,3,3,3,3,3,3,3,5,6,6,8,9,9};

     int FirstOccurence = BinarySearch (A, 16, 10, 1);
     int LastOccurence = BinarySearch (A, 16, 10, 2);
     if (FirstOccurence==-1) cout<<"The element is not in the array";
                        else cout<<"The element appears"<<LastOccurence - FirstOccurence +1;
    return 0;
}
*/
# include <bits/stdc++.h>
using namespace std;
int BinarySearch (int A[], int n, int X, int OK) {
    int Left=0, Right=n-1, mid;
    int result=-1;
    while (Left <= Right) {
        mid=(Left + Right) /2;

        if (X==A[mid]) {
            result=mid;
            if (OK==1) Right=mid-1; // First occurrence
            if (OK==2) Left=mid+1; //Last occurrence
        } else if (X<A[mid]) Right=mid-1;
        else Left=mid+1;
    }
    return result;
}
int main ()
{
    int A[] = {1,1,1,3,3,3,3,3,3,3,5,6,6,8,9,9};

    int FirstOccurrence = BinarySearch (A, 16, 1, 1);
    int LastOccurrence = BinarySearch (A, 16, 1, 2);

    if (FirstOccurrence==-1) cout<<"The element is not in the array";
                        else cout<<"The element appears "<<LastOccurrence - FirstOccurrence +1;

    return 0;
}
