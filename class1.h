namespace c1{
    class Tree {
    public:
        int data;
        Tree* left;
        Tree* right;

        // Konstruktor
        Tree(int value) : data(value), left(nullptr), right(nullptr){};
        void insertNode(Tree*& root, int value);
        void printInOrder(Tree* root);
        void deleteTree(Tree* root);
        Tree* findNode(Tree* node);
        Tree* deleteNode(Tree* root, int value);
        void findPath(Tree* root, int value);
};
}

