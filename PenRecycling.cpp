#include<iostream>
using namespace std;
int RecyclePen(int N,int R,int K,int C){
    int ans =0;
    for(int i = 1;i<=N;i++){
        int Reward = (N-i)*K;
        int Totalmoney = Reward+R;
        int Pencost = i*C;
        if(Totalmoney>=Pencost){
            ans = i;
        }
    }
    return ans;
}
int main()
 {
     int N,R,K,C;
     cout<<"enter the number of Empty pen"<<endl;
    cin>>N;
    cout<<"enter the amount in pocket"<<endl;
    cin>>R;
    cout<<"enter the reward per recycle"<<endl;
    cin>>K;
    cout<<"enter the cost of per refil"<<endl;
    cin>>C;
    int MaxUsablePen;
    MaxUsablePen = RecyclePen(N,R,K,C);
    cout<<"the maximum number of usable pen we can make are: "<<MaxUsablePen;
    return 0;
}