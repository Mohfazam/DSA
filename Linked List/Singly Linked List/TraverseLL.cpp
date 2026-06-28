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


int main(){
    vector<int> nums = {2, 5, 10, 15};

    Node *head = new Node(nums[0]);
    Node *tail = head;

    for(int i = 1; i < nums.size(); i++){
        Node *temp = new Node(nums[i]);
        tail->next = temp;
        tail = temp;
    }

    Node *temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}