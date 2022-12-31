//1
/*#include <iostream>
using namespace std;

int parity(int n){
if(n%2==0&&n>0){
    return 0;
}
else 
return 1;
}

int main(){
    cout<<parity(5)<<endl;
    cout<<parity(-2)<<endl;
    cout<<parity(6)<<endl;
}
//2

#include <iostream>
using namespace std;

int usecnt[5]={};

void useitem(int);

int main(){
    useitem(4);
    useitem(2);
    useitem(1);
    useitem(4);
    useitem(0);

    for(int i =0;i<5;i++){
        cout<<"슬롯"<<i<<"의 아이템을"<<usecnt[i]<<"번 썼습니다.";
    }
}

void useitem(int item){
    usecnt[item]++;
}

#include <iostream>
using namespace std;

void rec(int n){
    if(n==0) return;
    cout<<n;
    rec(n-1);
    cout<<n;
}

int main(){
    rec(5);
}
#include <iostream>
using namespace std;

void printnospace(const char *str){
int len = strlen(str);
for(int i = 0;i<len;i++){
    if(str[i] !=  ' '){
        cout<<str[i];
    }
}
}

int main(){
    printnospace("hello, World!\n");
    printnospace("My name is Doodle\n");
}*/