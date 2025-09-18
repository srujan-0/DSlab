#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

int minValue(struct Node* root) {
	if (root == NULL) {
		return -1;
	}
	
	struct Node* curr = root;
	
	while(curr->left != NULL) {
		curr = curr->left;
	}
	
	return curr->data;
}

struct Node* createNode(int val) {
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = val;
	node->left = node->right = NULL;
	return node;
}

int main() {
	struct Node* root = createNode(5);
	root->left = createNode(4);
	root->right = createNode(6);
	root->left->left = createNode(3);
	root->right->right = createNode(7);
	root->left->left->left = createNode(2);
	
	printf("%d\n", minValue(root));
	return 0;
}
