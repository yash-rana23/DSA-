

#include <bits/stdc++.h>
#include <string>
using namespace std;
template <typename T>
class Treenode{
public:
    T data;
    vector <Treenode<T>*> children;

Treenode(T data){
this->data=data;


}

};
void printtree(Treenode<int>*root){
cout<<root->data<<endl;
for(int i=0;i<root->children.size();i++){
    printtree(root->children[i]);
}
return;

}
int main(){
Treenode <int>* root=new Treenode<int>(1);
 Treenode <int>* node1=new Treenode<int>(1);
 Treenode <int>* node2=new Treenode<int>(1);
 Treenode <int>* node3=new Treenode<int>(1);
root->children.push_back(node1);
root->children.push_back(node2);
root->children.push_back(node3);
printtree(root);
return 0;

}
