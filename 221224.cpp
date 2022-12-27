/*#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr = &a;
    cout<<*ptr<<endl;
    int *ptr_a = a;
    cout<<*ptr_a;
}

#include <iostream>
using namespace std;

int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8,},{9,10,11,12}};
    for(int (*pi)[4]=arr;pi<arr+3;pi++){
        for(int*pj=*pi;pj<*pi+4;pj++){
            cout<<*pj;
        }
        cout<<endl;
    }
}*/

#include <iostream>
using namespace std;

int main(){
    char str[4][10]={"hello","world","doodle","google"};
    char *ptr[4];

    for(int i =0;i<4;i++){
        ptr[i]=str[i];
        cout<<ptr[i]<<endl;
    }
}