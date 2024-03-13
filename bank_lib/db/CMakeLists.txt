# Add all source files from the src directory to a list
file(GLOB SOURCES "src/*.cpp")

# Create a library target using the gathered source files
add_library(db ${SOURCES})

message("${CMAKE_CURRENT_SOURCE_DIR} is the current source")
 

target_include_directories( db PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)