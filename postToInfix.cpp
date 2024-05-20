
#include <stack>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string getString(char x)
{
    string s(1, x);
 
    return s;   
}

string postToInfix(string s){
    
    stack<string> st;
    string ans="";
    for(int i=0; i<s.size(); i++){
        if((s[i]<='z' &&  s[i]>='a')||(s[i]<='Z' &&  s[i]>='A'))
        {
            
            st.push(getString(s[i]));
        }
        else{
            string a1=st.top();
            st.pop();
            string a2=st.top();
            st.pop();
            st.push("("+a2+s[i]+a1+")");
        }
        
    }
    ans=st.top();
    st.pop();
    return ans;
}
int main()
{
    int ch;
    // do{
        
    //     cout<<"1: Want to find infix "<<endl;
    //     cout<<"2: EXIT "<<endl;
    //     cout<<endl<<endl;
    //     cout<<"Enter choice "<<endl;
    //     cin>>ch;
    //     switch(ch){
    //         case 1: 
    //                 string s;
    //                 cout<<"Enter expression "<<endl;
    //                 cin>>s;
    //                 cout<<"infix expression of "<<s<<" is "<<postToInfix(s)<<endl;
    //                 break;
            
                    
    //     }
        
    // }while(ch!=2);
    
   
    return 0;
}
