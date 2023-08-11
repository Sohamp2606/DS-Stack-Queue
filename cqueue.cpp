
// circular queue

#include<iostream>
using namespace std;
int arr[5],size=5,front=-1,rear=-1;

// function to insert element
void inqueue()
{
    int val;

    if(front==-1 && rear==-1)
        front=rear=0;

    else if((rear+1)%size == front){
            cout<<"\n-------> Queue is Overflow \n"<<endl;
            return;
    }
    else{
        rear = (rear+1)%size;
    }
    cout<<"Enter Value :";
    cin>>val;
    arr[rear]=val;
    cout<<"\n------> Element is inserted \n"<<endl;
    cout<<front<<rear<<endl;

}

// function to delete element
void dequeue()
{
    if(front ==-1){
        cout<<"\n------> Queue is Underflow \n"<<endl;
        return;
    }
    else if(front == rear){
        front=rear=-1;
    }
    else{
        front = (front+1)%size;
    }
    cout<<"\n-------> Element is deleted "<<arr[front-1]<<endl;
    cout<<front<<rear<<endl;

}

void display()
{
    if(front==-1){
        cout<<"\n------> Queue is Underflow \n"<<endl;
    }
    else{
        int i=front;
        cout<<"Element in Queue : ";
        do{
            cout<<arr[i]<<" ";
            i=(i+1)%size;
        }while(i!=(1+rear)%size);
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

