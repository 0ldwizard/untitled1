#include <iostream>

using namespace std;


int pow(int chis,int step) {
    int res={};
    for (int i = 0; i < step ; ++i) {
       res= chis*chis;
    }
    return res;
}

int main() {

    int length=10;
    int *arr=new int[length];

    for (int i = 0; i < length; ++i)
    {
        arr[i]=rand()%3+(-2);
    }

    for (int i = 0; i < length; ++i)
    {
        cout<<arr[i]<<"  ";
    }


    int n={};
    cin>>n;
int res={};
    for (int i = 0; i < n; ++i) {

      res+= pow((arr[i]+arr[i+1]+arr[i+2]),2)*arr[i+1];
    }
    cout <<res;
    return 0;
}
