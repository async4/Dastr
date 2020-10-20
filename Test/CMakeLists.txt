FIND_PACKAGE (Threads REQUIRED)

INCLUDE (ExternalProject)

ExternalProject_Add (
   gtest
   URL https://github.com/google/googletest/archive/master.zip
   PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
   INSTALL_COMMAND ""   
)

ExternalProject_Get_Property (gtest source_dir binary_dir)

ADD_LIBRARY (libgtest IMPORTED STATIC GLOBAL)
ADD_DEPENDENCIES (libgtest gtest)

SET_TARGET_PROPERTIES (libgtest PROPERTIES
   "IMPORTED_LOCATION" "${binary_dir}/googletest/gtest/libgtest.a"
   "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"   
)

ADD_LIBRARY (libgmock IMPORTED STATIC GLOBAL)
ADD_DEPENDENCIES (libgmock gtest)

SET_TARGET_PROPERTIES (libgmock PROPERTIES
   "IMPORTED_LOCATION" "${binary_dir}/googlemock/libgmock.a"
   "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
)

INCLUDE_DIRECTORIES (
   "${source_dir}/googletest/include"
   "${source_dir}/googlemock/include"   
)

ADD_SUBDIRECTORY (TLinkedList)
