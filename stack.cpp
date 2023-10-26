#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top= -1;
    }
    void push(int data){
        if(size-top>=0){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"not possible"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{cout<<"satck underflow"<<endl;}
    }
    int peek(){
   
    if(top>=0){return arr[top];}
    else{cout<<"empty"<<endl;}
    }

};

int main(){
    Stack st(6);
    st.push(23);
    st.push(45);
    cout<<st.peek();
}
