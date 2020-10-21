#include "LinkedList.hpp"

void LinkedList::Print(Node** head)
{
   if (*head)
   {
      Node* walk = *head;
      while (walk)
      {
         std::cout << walk->data << " ";
         walk = walk->next;
      }
      std::cout << std::endl;
   }
}


void LinkedList::Append(Node** head, int data)
{
   Node* temp = new Node();
   temp->data = data;
   temp->next = nullptr;

   if (!*head)
      *head = temp;
   else {
      Node* walk = *head;
      while (walk->next)
         walk = walk->next;
      walk->next = temp;
   }
}


int LinkedList::Pop(Node** head)
{
   int temp;

   if (*head)
   {
      Node* walk = *head;
      while(walk->next->next)
         walk = walk->next;
      temp = walk->next->data;
      delete walk->next;
      walk->next = nullptr;
   }

   return temp;
}


void LinkedList::Push(Node** head, int data)
{
   Node* temp = new Node();
   temp->data = data;

   if (!*head)
      *head = temp;
   else {
      Node* save = *head;
      *head = temp;
      temp->next = save;
   }
}


bool LinkedList::Search(Node** head, int data)
{
   bool result = false;

   if (*head)
   {
      Node* walk = *head;

      while (walk->next)
      {
         if (walk->data == data) {
            result = true;
            break;
         }
         walk = walk->next;
      }
   }

   return result;
}


int LinkedList::Find(Node** head, unsigned int index)
{
   int result;

   if (*head)
   {
      Node* walk = *head;
      for (auto i = 0; i < index; i++) {
         walk = walk->next;
      }
      result = walk->data;
   }

   return result;
}


unsigned int LinkedList::Length(Node** head)
{
   unsigned int length = 0;

   if (*head)
   {
      Node* walk = *head;
      while (walk)
      {
         length++;
         walk = walk->next;
      }
   }

   return length;
}


unsigned int LinkedList::Count(Node** head, int data)
{
   unsigned int result = 0;

   if (*head)
   {
      Node* walk = *head;

      while (walk)
      {
         if (walk->data == data)
            result++;
         walk = walk->next;
      }
   }

   return result;
}


void LinkedList::Reverse(Node** head)
{
   Node* current = *head;
   Node* prev = nullptr;
   Node* next = nullptr;

   while (current)
   {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }

   *head = prev;
}


void LinkedList::Insert(Node** head, unsigned int index, int data)
{
   if (index == 0)
   {
      Node* temp = new Node();
      temp->data = data;
      temp->next = *head;
      *head = temp;
      return;
   }

   if (*head)
   {
      Node* temp = new Node();
      temp->data = data;

      Node* walk = *head;
      unsigned int i = 0;

      while (walk)
      {
         if (i == index-1) {
            Node* save = walk->next;
            walk->next = temp;
            temp->next = save;
            break;
         }
         i++;
         walk = walk->next;
      }
   }
}


void LinkedList::Remove(Node** head, unsigned int index)
{
   if (index == 0)
   {
      Node* save = (*head)->next;
      delete *head;
      *head = save;
      return;
   }


   if (*head)
   {
      Node* walk = *head;
      unsigned int i = 0;

      while (walk)
      {
         if (i == index-1) {
            Node* save = walk->next->next;
            delete walk->next;
            walk->next = save;
            break;
         }
         i++;
         walk = walk->next;
      }
   }
}


void LinkedList::Delete(Node** head)
{
   while (*head)
   {
      Node* walk = *head;
      *head = walk->next;
      delete walk;
   }

   std::cout << "Deleted\n";
}
