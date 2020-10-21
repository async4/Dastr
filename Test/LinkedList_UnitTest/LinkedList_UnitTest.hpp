#ifndef __LINKEDLIST_UNITTEST_HPP__
#define __LINKEDLIST_UNITTEST_HPP__

#include "LinkedList.hpp"

#include "gtest/gtest.h"


class LinkedListUnitTest : public ::testing::Test
{
protected:
   virtual void SetUp() override
   {
      LinkedList::Append(&head, 1);
      LinkedList::Append(&head, 2);
      LinkedList::Append(&head, 3);
      LinkedList::Append(&head, 5);
      LinkedList::Append(&head, 6);
      LinkedList::Append(&head, 6);
      LinkedList::Append(&head, 7);
      LinkedList::Append(&head, 8);
      LinkedList::Append(&head, 9);
   }

   virtual void TearDown() override
   {
      LinkedList::Delete(&head);
   }

   Node* head = nullptr;
};


#endif // __LINKEDLIST_UNITTEST_HPP__
