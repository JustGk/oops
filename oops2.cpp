#include<iostream>
using namespace std;
class calculator{
    public:
    float n1,n2,ans;
    void addition(float n1,float n2);
    void subtraction(float n1,float n2);
    void multiplication(float n1,float n2);
    void division(float n1,float n2);

};
void calculator::addition(float n1,float n2){
    ans=n1+n2;
    cout<<"ADDITION IS "<<ans;
    cout<<endl;

}

void calculator::subtraction(float n1,float n2){
    ans=n1-n2;
    cout<<"SUBTRACTION IS "<<ans;
    cout<<endl;

}
void calculator::multiplication(float n1,float n2){
    ans=n1*n2;
    cout<<"MULTIPLICATION IS "<<ans;
    cout<<endl;

}
void calculator::division(float n1,float n2){
    ans=n1/n2;
    cout<<"DIVISION IS "<<ans;
    cout<<endl;

}
int main(){
    calculator user;
    int flag=1;
    float n1,n2;
    cout<<"ENTER FIRST NUMBER : "<<endl;
    cin>>n1;
    cout<<"ENTER SECOND NUMBER : "<<endl;
    cin>>n2;
    while (flag==1)
    {
       cout<<"FOR ADDITION TYPE 1"<<endl;
       cout<<"FOR SUBTRACTION TYPE 2"<<endl;
       cout<<"FOR MULIPLICATION TYPE 3"<<endl;

       cout<<"FOR DIVISION TYPE 4"<<endl;
       cout<<"EXIT TYPE 0"<<endl;
       int op;
       cout<<"ENTER YOUR CHOICE "<<endl;
       cin>>op;
       switch (op)
       {
       case 1:
       user.addition(n1,n2);
       break;

       case 2:
       user.subtraction(n1,n2);
       break;

       case 3:
       user.multiplication(n1,n2);
       break;

       case 4:
       user.division(n1,n2);
       break;

       case 0:
       flag=0;
       }

       }
    
return 0;
}