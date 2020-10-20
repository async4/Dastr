ADD_EXECUTABLE (linkedlist_test
   TMain.cpp
)

TARGET_LINK_LIBRARIES (linkedlist_test
   LINKEDLIST   
)

ADD_TEST (
   NAME linkedlist_test
   COMMAND linkedlist_test   
)
