//
// Created by POG on 2021/9/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef LINK_LIST_SINGLYLINKEDLIST_H
//#define LINK_LIST_SINGLYLINKEDLIST_H
typedef int ElemType;
typedef struct SinglyLinkedListRecord SinglyLinkedList;
//单链表结构
struct SinglyLinkedListRecord {
    ElemType data;
    struct Node *next;
};

//初始化单链表
int initList(SinglyLinkedList *L);

//判断单链表是否为空
bool listEmpty(SinglyLinkedList *L);

//打印单链表
void printList(SinglyLinkedList *L);

//插入元素
int listInsert(SinglyLinkedList *L, int index, ElemType elem);

//删除元素
int listDelete(SinglyLinkedList *L, int index);

//销毁单链表
void destroyList(SinglyLinkedList *L);

//清空单链表
int clearList(SinglyLinkedList *L);

//获取单链表长度
int getListLength(SinglyLinkedList *L);

//查找元素位置
int findElemIndex(SinglyLinkedList *L, ElemType elem);

//获取单链表元素
ElemType getElem(SinglyLinkedList *L, int index);

//获取元素elem的前一个元素
ElemType getPreviousElement(SinglyLinkedList *L, ElemType elem);

//获取元素elem的下一个元素
ElemType getNextElement(SinglyLinkedList *L, ElemType elem);

#endif //LINK_LIST_SINGLYLINKEDLIST_H

//初始化单链表
int initList(SinglyLinkedList *L) {}

//判断单链表是否为空
bool listEmpty(SinglyLinkedList *L) {}

//打印单链表
void printList(SinglyLinkedList *L) {}

//插入元素
int listInsert(SinglyLinkedList *L, int index, ElemType elem) {}

//删除元素
int listDelete(SinglyLinkedList *L, int index) {}

//销毁单链表
void destroyList(SinglyLinkedList *L) {}

//清空单链表
int clearList(SinglyLinkedList *L) {}

//获取单链表长度
int getListLength(SinglyLinkedList *L) {}

//查找元素位置
int findElemIndex(SinglyLinkedList *L, ElemType elem) {}

//获取单链表元素
ElemType getElem(SinglyLinkedList *L, int index) {}

//获取元素elem的前一个元素
ElemType getPreviousElement(SinglyLinkedList *L, ElemType elem) {}

//获取元素elem的下一个元素
ElemType getNextElement(SinglyLinkedList *L, ElemType elem) {}