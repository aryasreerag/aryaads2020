/*
*C program to construct a binary search tree and perform deletion,inorder traversal on it*/
#include<stdio.h>
#include<stdlib.h>

struct btnode
{
 int value;
 struct btnode *l;
 struct btnode *r;
 }*root=NULL,*temp=NULL,*t2,*t1;

 void delete1();
 void insert();
 void delete();
 void inorder(struct btnode *t);
 void create();
 void search(struct btnode *t)
