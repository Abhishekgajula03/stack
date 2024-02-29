#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top= -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{cout<<"not possible"<<endl;}
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{cout<<"not possible"<<endl;}
    }
    int peek(){
        if(top>=0 ){
            return arr[top];
        }
        else{return -1;}
    }

    bool isempty(){
        if(top==-1){return true;}
        else{return false;}
    }
};

int main(){
    int size=5;
    Stack s(size);
    s.push(56);
    s.push(23);
    for(int i=0;i<size;i++){
   if(!s.isempty()){

    cout<<s.peek()<<" ash  ";
    s.pop();}}
  
}
