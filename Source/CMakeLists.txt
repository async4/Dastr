SET ("MAIN_SRC"
   Main.cpp
)

ADD_EXECUTABLE ("dastr"
   ${MAIN_SRC}
)

ADD_SUBDIRECTORY (LinkedList)

INSTALL (TARGETS "dastr" DESTINATION Binary)
