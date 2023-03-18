#include<iostream>
#include<queue>
using namespace std;
int main(){

    //creating queue
    queue<int>q;

    q.push(1);
    q.push(4);
    q.push(5);

    cout<<"size of queue "<<q.size()<<endl;
    q.pop();
    q.pop();

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }
}