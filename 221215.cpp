/*#include <iostream>
using namespace std;

int main(){
    int score;
    cout<<"점수입력:";
    cin>>score;
    if(score>=90){
        cout<<"A\n";
    }
    else if(score>=80){
        cout<<"B\n";
    }
    else if(score>=70){
        cout<<"C\n";
    }
    else if(score>=60){
        cout<<"D\n";
    }
    else {
        cout<<"F\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int i =1 ;

    while (i<=10){
        cout<<i;
        i++;
    }
}

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"자연수 입력";
    cin>>n;
    int i, pow;
    for(i=1, pow =1; i<=n;i++,pow*=2);
    cout<<n<<pow<<endl;
    return 0;
}

i번째 입력 결과를 출력하다가 0이 입력되면 종료되는 프로그램
#include <iostream>
using namespace std;
int main(){
    for(int i = 1; ; i++){
        int k;
        cin>>k;
        if(k ==0){
            break;
        }
        cout<<i<<k;
    }
}

//3의 배수를 제외한 자연수를 출력하는 프로그램
#include <iostream>
using namespace std;

int main(){
    int n;

    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0)continue;
        cout<<i;
    }
}

//별표nxn개로 이루어진 정사각형 출력하기
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++)
        cout<<"*";
    cout<<endl;
    }
    return 0;
}

//높이가 n인 계단 출력하기
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
}*/