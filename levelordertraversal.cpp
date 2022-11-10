#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void levelorder(TreeNode *root) {
    queue<TreeNode *> q;
    vector<int> result;
    if (root == NULL) {
        return;
    }
    q.push(root);
    while (!q.empty()) {
        TreeNode *temp = q.front();
        q.pop();
        if (temp != NULL) {
            cout << temp->data << " ";

            if (temp->left != NULL) {
                q.push(temp->left);
            }
            if (temp->right != NULL) {
                q.push(temp->right);
            }
        } else if (!q.empty()) {
            q.push(NULL);
        }
    }
}

int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
}