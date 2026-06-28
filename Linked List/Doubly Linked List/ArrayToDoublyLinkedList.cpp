#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *back;

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

int main(){

    vector<int> nums = {5, 8, 9, 10, 3};

    Node *head = new Node(nums[0]);

    Node *tail = head;

    for(int i = 1; i < nums.size(); i++){
        Node *temp = new Node(nums[i]);
        tail->next = temp;
        temp->back = tail;
        tail = temp;
    }

    


    return 0;
}