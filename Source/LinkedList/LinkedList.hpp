#ifndef __LINKEDLIST_HPP__
#define __LINKEDLIST_HPP__ 

#include <iostream>

typedef struct Node
{
   int data;
   Node* next;
} Node;


class LinkedList
{
public:
   static void Print (Node** head);                                // Print elements of linked list
   static void Append (Node** head, int data);                     // Add to end of the linked list
   static int Pop (Node** head);                                   // Remove to end of the linked list
   static void Push (Node** head, int data);                       // Add to head of the linked list 
   static bool Search (Node** head, int data);                     // Search data in the linked list
   static int Find (Node** head, unsigned int index);              // Find index of data in the linked list
   static unsigned int Length (Node** head);                       // Get length of the linked list
   static unsigned int Count (Node** head, int data);              // Counts of data of node in the linked list
   static void Reverse (Node** head);                              // Reverse the linked list
   static void Insert (Node** head, unsigned int index, int data); // Insert node to given index location in the linked list
   static void Remove (Node** head, unsigned int index);           // Remove node in the linked list
   static void Delete (Node** head);                               // Delete linked list 
};

#endif                                                             // !__LINKEDLIST_HPP__
