#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int>d;

    d.push_back(12);
    d.push_front(14);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();

    if(d.empty()){
        cout<<"queue is empty"<<endl;

    }else{
        cout<<"queue is not empty"<<endl;
    }

}