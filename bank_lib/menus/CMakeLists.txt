# Add all source files from the src directory to a list
file(GLOB SOURCES "src/*.cpp")

# Create a library target using the gathered source files
add_library(menus ${SOURCES})

find_path(BCRYPT_INCLUDE_DIR NAMES bcrypt/bcrypt.h)
find_library(BCRYPT_LIBRARY NAMES bcrypt)
message("${BCRYPT_INCLUDE_DIR} is found")
message("${BCRYPT_LIBRARY} IS FOUND")
if(BCRYPT_INCLUDE_DIR AND BCRYPT_LIBRARY)
    include_directories(${BCRYPT_INCLUDE_DIR})
    # If you are linking bcrypt to a specific library or executable, for example:
    target_include_directories(menus PRIVATE ${BCRYPT_INCLUDE_DIR})
    target_link_libraries(menus PRIVATE ${BCRYPT_LIBRARY})
else()
    message(FATAL_ERROR "bcrypt not found")
endif()


message("${CMAKE_CURRENT_SOURCE_DIR} is the current source")
 

target_include_directories( menus PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)