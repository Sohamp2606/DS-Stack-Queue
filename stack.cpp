
// stack

#include<iostream>
using namespace std;
int arr[5], n=5,top=-1;

// function to PUSH element
void push()
{
    int val;

    if(top == n-1)
        cout<<"\n-------> stack is Full \n"<<endl;
    else{
        cout<<"Enter Value :";
        cin>>val;
        top++;
        arr[top] = val;
        cout<<"\n-------> Element pushed \n"<<endl;
    }
}

// function to POP element
void pop()
{
    if(top == -1)
        cout<<"\n-------> stack is Empty \n"<<endl;
    else{
        cout<<"\n -------> POP element is :"<<arr[top]<<endl<<endl;
        top--;
    }
}


void display()
{
    if(top == -1)
        cout<<"\n-------> stack is Empty \n"<<endl;
    else{

        cout<<"\n -------> stack element : ";
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int ch;
    cout<<" 1.Push\n 2.Pop \n 3.Display\n 4.Exit"<<endl;

    do{
       cout<<"Enter Choice : ";
       cin>>ch;
       switch(ch)
       {
           case 1:
                  push();
                  break;

           case 2:pop();
                  break;

           case 3:display();
                  break;

           case 4:cout<<"Exiting ";
                  ch=4;

            default : cout<<"Wrong choice"<<endl;

       }
    }while(ch!=4);
}
