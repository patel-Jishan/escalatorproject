#include<iostream>
#include<vector>
using namespace std;

class stack{
    private:
    int*arr;
    int topIndex;
    int capacity;
    public:
    stack(int size){
        capacity=size;
        arr=new int[capacity];
        topIndex=-1;
    }
    ~stack(){
        delete[]arr;
    } 

    void push(int value){
        if(topIndex>=capacity-1){
            cout<<"Stack is full.Cannot push,"<<endl;
        }
        else{
            arr[topIndex++]=value;
            cout<<value<<"pushed to stack."<<endl;
        }
    }

    void pop(){
        if(topIndex<0){
            cout<<"Stack is empty.Cannot pop,"<<endl;
        }
        else{
             cout<<arr[topIndex--]<<"popped from stack."<<endl;
            

        }
    }
    void displayTop(){
        if(topIndex<0){
            cout<<"Stack is empty.No top element"<<endl;
        }
        else{
            cout<<"Top element is "<<arr[topIndex]<<endl;
        }
    }
    void isempty(){
       if(topIndex<0){
        cout<<"Stack is empty."<<endl;
       }
       else{
        cout<<"Stack is not empty."<<endl;
       }
    }
    void ifull(){
        if(topIndex>=capacity-1){
            cout<<"Stack is full."<<endl;
    }
    else{
        cout<<"Stack is not full."<<endl;
    }

    }

};
int main(){
    int size;
    cout<<"Enter the size of the stack"<<endl;
    cin>>size;
    stack s(size);

    int choice,value;
    do{
    
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display top"<<endl;
        cout<<"4.Check if stack is empty"<<endl;
        cout<<"5.Check if stack is full"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter the value to be pushed";
            cin>>value;
            s.push(value);
            break;
            case 2:
            s.pop();
            break;
            case 3:
            s.displayTop();
            break;
            case 4:
            s.isempty();
            break;
            case 5:
            s.ifull();
            break;
            case 6:
            cout<<"Exiting the program"<<endl;
            break;
}
    }
    while (choice != 6);

    
}