
struct Node {
	int data;
	Node *left = nullptr;
	Node *right = nullptr;
};

class TREE
{

public:
	void add(Node*, int);

private:
	int data;
	Node*root;
};



