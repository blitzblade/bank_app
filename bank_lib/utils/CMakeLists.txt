add_library(utils src/util.cpp)
message("${CMAKE_CURRENT_SOURCE_DIR} is the current source")
# If the target is defined in bank_lib/menus/CMakeLists.txt

find_path(BCRYPT_INCLUDE_DIR NAMES bcrypt/bcrypt.h)
find_library(BCRYPT_LIBRARY NAMES bcrypt)
message("${BCRYPT_INCLUDE_DIR} is found")
message("${BCRYPT_LIBRARY} IS FOUND")
if(BCRYPT_INCLUDE_DIR AND BCRYPT_LIBRARY)
    include_directories(${BCRYPT_INCLUDE_DIR})
    # If you are linking bcrypt to a specific library or executable, for example:
    target_include_directories(utils PUBLIC ${BCRYPT_INCLUDE_DIR})
    target_link_libraries(utils PUBLIC ${BCRYPT_LIBRARY})
else()
    message(FATAL_ERROR "bcrypt not found")
endif()


 
target_include_directories( utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
