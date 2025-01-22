#include<iostream>
using namespace std;
class ciphertext
{
public:
    int a;  //a is key
    void encrypt(char n[40])
    {
    cout<<"enter the pass key =";
    cin>>a;
    for ( char i=0; (i<40&& n[i]!='\0'); i++)
    {
        n[i]=n[i]+a;
    }
     cout<<"your data encrypted= "<<n;
    }
    // decrypt logic

    void decrypt(char n[40])
    {
        int a;
    cout<<"enter the pass key =";
    cin>>a;
    for ( char i=0; (i<40 && n[i]!='\0'); i++)
    {
        n[i]=n[i]-a;
    }
     cout<<"your plain text data = "<<n;
    }

};

 int main()
 {
int x;

     ciphertext p;
     int i;
     char z[40];
     bool run=true;

     while(run){
     cout<<"enter your input =";
     cin>>z;
     cout<<" press 1 for encrypt = "<<endl;
     cout<<"press 2 for decrypt = "<<endl;
     cin>>i;
     switch (i)
     {
     case 1:
        p.encrypt(z);
        break;
     case 2:
        p.decrypt(z);
        break;
     default:
        cout<<" input invalid";
     }
     cout<<"\n l 1-Repeat l 0-Exit l"<<endl;
     cin>>run;
     }


  }