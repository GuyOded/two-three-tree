//
// Created by guy on 20/01/17.
//

#ifndef TWO_THREE_TREE_TWOTHREETREENODE_H
#define TWO_THREE_TREE_TWOTHREETREENODE_H

template<class T>
class TwoThreeTreeNode {
private:
    TwoThreeTreeNode<T>* m_left;
    TwoThreeTreeNode<T>* m_middle;
    TwoThreeTreeNode<T>* m_right;

public:
    TwoThreeTreeNode(T value);
};


#endif //TWO_THREE_TREE_TWOTHREETREENODE_H
