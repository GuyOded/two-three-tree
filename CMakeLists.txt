cmake_minimum_required(VERSION 3.6)
project(two_three_tree)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp source/TwoThreeTree.cpp source/TwoThreeTree.h source/TwoThreeTreeNode.cpp source/TwoThreeTreeNode.h)
add_executable(two_three_tree ${SOURCE_FILES})