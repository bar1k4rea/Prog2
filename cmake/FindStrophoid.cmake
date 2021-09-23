set(FIND_STROPHOID_PATHS
        ~/Library/strophoid)

find_path(STROPHOID_INCLUDE_DIR strophoid.h
        PATH_SUFFIXES include
        PATHS ${FIND_STROPHOID_PATHS})

find_library(STROPHOID_LIBRARY
        NAMES strophoid
        PATH_SUFFIXES lib
        PATHS ${FIND_STROPHOID_PATHS})


