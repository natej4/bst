#include <iostream>
#include "bst.h"
using namespace std;

int main()
{
  BinarySearchTree<int> t(0);
  
  t.insert(6);
  t.insert(2);
  t.insert(1);
  t.insert(4);
  t.insert(3);
  t.insert(8);
  t.insert(9);
  t.printTree();
  cout << endl;
  
  t.postOrder();
  cout << endl;
  
  cout << t.height() << endl;
  
  cout << t.numLeaves() << endl;
  
  if (t.isBalanced())
    cout << "It's Balanced!" << endl;
  else
    cout << "It's Not Balanced" << endl;
}