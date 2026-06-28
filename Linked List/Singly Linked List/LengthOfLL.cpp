#include<bits/stdc++.h>

using namespace std;

class Node{
    public:

    int data;
    Node *next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

int sizeOfLL(Node *head){
    int cnt = 0;

    Node *mover = head;

    while(mover){
        mover = mover->next;
        cnt++;
    }

    return cnt;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cout<<"Enter the numbers in the nums: ";
        cin>>nums[i];

    }

    Node *head = new Node(nums[0]);
    Node *tail = head;

    for(int i = 1; i < n; i++){
        Node *temp = new Node(nums[i]);
        tail->next = temp;
        tail = temp;
    }


    cout<<"The Size of LL is : " <<sizeOfLL(head);

    return 0;

}