cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20) # Use 14, 17, 20, or 23 for newer standards
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
project(bank_app)




add_subdirectory(bank_lib)
add_subdirectory(bank_app)