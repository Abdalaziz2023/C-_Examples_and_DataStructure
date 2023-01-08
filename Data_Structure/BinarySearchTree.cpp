#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
class BST
{
    public:
    Node* root;
    BST()
    {
        root = NULL;
    }
    //=============== insert

    Node *insert(Node* R, int data)
    {
        if (R == NULL)
        {
            Node* newnode = new Node(data);
            R = newnode;
        }
        else if (R->data > data)
        {
            R->left = insert(R->left,data);
        }
        else
        {
            R->right = insert(R->right,data);
        }
        return R;
    }

    //================ insert()
    void insert(int data)
    {
        root = insert(root,data);
    }
    //================== Display() ============
    void Preorder(Node *R) // root left right
    {
        if (R == NULL)
        {
            return;
        }
        else
        {
            cout<<R->data<<"\t";
            Preorder(R->left);
            Preorder(R->right);
        }
    }
    //============= inorder() left root right

    void inorder(Node *R)
    {
        if (R == NULL)
        {
            return;
        }
        else
        {
            inorder(R->left);
            cout<<R->data<<"\t";
            inorder(R->right);
        }
    }

    //============ postorder() left right root

    void postorder(Node *R)
    {
        postorder(R->left);
        postorder(R->right);
        cout<<R->data<<"\t";
    }

    //================= search()
    Node *Search(Node *R,int key)
    {
        if (R == NULL)
        {
            return NULL;
        }
        if (R->data == key)
        {
            return R;
        }
        else if (R->data > key)
        {
            return Search(R->left,key);
        }
        else
        {
            return Search(R->right,key);
        }
    }

    //============ laxury search()

    void Search(int key)
    {
        if (Search(root,key) == NULL)
        {
            cout<<"key is not found";
        }
        else
        {
            cout<<"key is found";
        }   
    }
    //================ FindMax
    Node *FindMax(Node *R)
    {
        if (R == NULL)
        {
            return NULL;
        }
        else if (R->right == NULL)
        {
            return R;
        }
        else
        {
            return FindMax(R->right);
        }
    }
    // ============ FindMin
    Node* FindMin(Node* R)
    {
        if (R == NULL)
        {
            return NULL;
        }
        else
        if(R->left == NULL)
        {
            return R;
        }
        else
        {
            return FindMin(R->left);
        }
        
    }
    //================ Delete() 
    Node *Delete(Node *R,int key)
    {
        if (R == NULL)
        {
            return NULL;
        }
        if (R->data > key)
        {
            R->left = Delete(R->left,key);
        }
        else if(R->data < key)
        {
            R->right = Delete(R->right,key);
        }
        else
        {
            if (R->left == NULL and R->right == NULL)
            {
                R = NULL;
            }
            else if (R->left != NULL and R->right == NULL)
            {
                R->data = R->left->data;
                delete R->left;
            }
            else if (R->left == NULL and R->right != NULL)
            {
                R->data = R->right->data;
                delete R->right;   
            }
            else
            {
                Node* Max = FindMax(R->left);
                R->data = Max->data;
                R->left = Delete(R->left,Max->data);
            }
        }
        return R;
    }

    // ========= Delete()

    void Delete(int key)
    {
        Delete(root,key);
    }
};

int main()
{
    BST T1;
    T1.insert(1);
    T1.insert(22);
    T1.insert(3);
    T1.insert(14);
    T1.insert(51);
    T1.insert(60);
    T1.insert(7);
    Node * result = T1.Delete(T1.root,60);
    T1.Preorder(result);
}