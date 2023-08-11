
// queue

#include<iostream>
using namespace std;
int arr[5],n=5,front=-1,rear=-1;

// function to insert element
void inqueue()
{
    int val;
    if(rear>n-1)
        cout<<"\n-------> Queue is Overflow \n"<<endl;

    else{
        cout<<"Enter Value :";
        cin>>val;
        if(front==-1)front=0;
        rear++;
        arr[rear]=val;
        cout<<"\n------> Element is inserted \n"<<endl;
    }
}

// function to delete
void dequeue()
{
    if(front==-1 || front>rear)
        cout<<"\n------> Queue is Underflow \n"<<endl;

    else{
        cout<<"\n-------> Element is deleted "<<arr[front]<<endl;
        front++;
    }
}

void display()
{
    if(front==-1 || front>rear)
        cout<<"\n------> Queue is Underflow \n"<<endl;

    else{
        cout<<"Element in Queue : ";
        for(int i=front;i<=rear;i++
        )
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int ch;

    cout<<" 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit"<<endl;
    do{
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch)
        {
        case 1:inqueue();
               break;

        case 2:dequeue();
               break;

        case 3:display();
               break;

        case 4:cout<<"Exiting "<<endl;
                ch=4;
                break;

        default:cout<<"\n wrong choice "<<endl;

        }
    }while(ch!=4);

}
