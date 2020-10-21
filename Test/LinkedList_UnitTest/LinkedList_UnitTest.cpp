#include "LinkedList_UnitTest.hpp"

TEST_F (LinkedListUnitTest, LINKEDLIST_APPEND_FUNCTION)
{
   LinkedList::Append(&head, 20);
   EXPECT_EQ (20, LinkedList::Find(&head, LinkedList::Length(&head)-1));
}

TEST_F (LinkedListUnitTest, LINKEDLIST_POP_FUNCTION)
{
   EXPECT_EQ (9, LinkedList::Pop(&head));
   EXPECT_EQ (8, LinkedList::Pop(&head));
   EXPECT_EQ (7, LinkedList::Pop(&head));
}

TEST_F (LinkedListUnitTest, LINKEDLIST_PUSH_FUNCTION)
{
   LinkedList::Push(&head, 0);
   EXPECT_EQ (0, head->data);
}

TEST_F (LinkedListUnitTest, LINKEDLIST_SEARCH_FUNCTION)
{
   EXPECT_EQ (true, LinkedList::Search(&head, 5));
   EXPECT_EQ (true, LinkedList::Search(&head, 6));
   EXPECT_EQ (false, LinkedList::Search(&head, 10));
}

TEST_F (LinkedListUnitTest, LINKEDLIST_FIND_FUNCTION)
{
   EXPECT_EQ (2, LinkedList::Find(&head, 1));
}

TEST_F (LinkedListUnitTest, LINKEDLIST_LENGTH_FUNCTION)
{
   EXPECT_EQ (9, LinkedList::Length(&head));
}

TEST_F (LinkedListUnitTest, LINKEDLIST_COUNT_FUNCTION)
{
   EXPECT_EQ (2, LinkedList::Count(&head, 6));
   EXPECT_EQ (1, LinkedList::Count(&head, 1));
}

TEST_F (LinkedListUnitTest, LINKEDLIST_REVERSE_FUNCTION)
{
   LinkedList::Reverse(&head);
   EXPECT_EQ (9, head->data);

   LinkedList::Reverse(&head);
   EXPECT_EQ (1, head->data);
}

TEST_F (LinkedListUnitTest, LINKEDLIST_INSERT_FUNCTION)
{
   LinkedList::Insert(&head, 6, 15);
   EXPECT_EQ (15, LinkedList::Find(&head, 6));
}

TEST_F (LinkedListUnitTest, LINKEDLIST_REMOVE_FUNCTION)
{
   LinkedList::Remove(&head, 6);
   EXPECT_NE (15, LinkedList::Find(&head, 6));
}

TEST_F (LinkedListUnitTest, LINKEDLIST_DELETE_FUNCTION)
{
   LinkedList::Delete(&head);
   EXPECT_EQ (head, nullptr);
}
