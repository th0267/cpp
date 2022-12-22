/*#include <iostream>
using namespace std;

int main(){
    int grade;
    cin>>grade;
    if(grade>100)
    cout<<"wrong grade";
    else if(grade>=90)
    cout<<"A";
    else if(grade>=80)
    cout<<"B";
    else if(grade>=70)
    cout<<"c";
    else if(grade>=60)
    cout<<"D";
    else if(grade<60&&grade>=0)
    cout<<"F";
    else
    {cout<<"wrong grade";}
}
#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n;
    for(m=1;m<=n;m++){
    if(n%m==0)
    cout<<m;}
    return 0;
}*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%10==3||i%10==6||i%10==9)
        cout<<"*";
        else
        cout<<i;
    }
}
