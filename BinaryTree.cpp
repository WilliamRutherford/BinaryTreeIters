
template <class T>
class BinaryTree{
    public:
        
        enum path { BreadthFirst, DepthFirst_preorder, DepthFirst_inorder, DepthFirst_postorder };
        
        struct node {
            T value;
            node* left;
            node* right;
        }

        struct Iterator{

            using iterator_category = std::forward_iterator_tag;
            using value_type = node;
            using pointer = node*;
            using reference = node&; 

            node curr;

            Iterator(pointer ptr) : curr(ptr) {}

            reference operator*(){ return *curr; }
            pointer operator->(){ return curr; }
            //this is where the logic for finding the next node goes
            Iterator operator++(){}

        };


        node root;
        path traveral_method;

        Iterator begin(){}
        Iterator end(){}

};