add_executable(bank_app main.cpp)

find_path(BCRYPT_INCLUDE_DIR NAMES bcrypt/bcrypt.h)
find_library(BCRYPT_LIBRARY NAMES bcrypt)
message("${BCRYPT_INCLUDE_DIR} is found")
message("${BCRYPT_LIBRARY} IS FOUND")
if(BCRYPT_INCLUDE_DIR AND BCRYPT_LIBRARY)
    include_directories(${BCRYPT_INCLUDE_DIR})
    # If you are linking bcrypt to a specific library or executable, for example:
    target_include_directories(bank_app PUBLIC ${BCRYPT_INCLUDE_DIR})
    target_link_libraries(bank_app PUBLIC ${BCRYPT_LIBRARY} db utils business menus sqlite3)
else()
    message(FATAL_ERROR "bcrypt not found")
endif()