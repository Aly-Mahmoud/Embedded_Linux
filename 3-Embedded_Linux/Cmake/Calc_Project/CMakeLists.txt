# 1. Set minimum CMake version
cmake_minimum_required(VERSION 3.1...3.2)

# 2. Create project info
project(Calculator VERSION 1.1
    DESCRIPTION "This is a simple calculator program"
    LANGUAGES C)

# 3. Set variable to source files
file(GLOB SOURCE_FILES ./Lib/*.c)

# 4. Set variable to header files
set(HEADER_FILES ./Include)

# 5. Create Library
add_library(CalcLibrary STATIC ${SOURCE_FILES} ${HEADER_FILES})

# 6. Tell CMake to use this library
target_include_directories(CalcLibrary PUBLIC ${HEADER_FILES})

# 7. Create executable file
add_executable(${PROJECT_NAME} ../Calc_Project/main.c)

# 8. Link library with executable
target_link_libraries(${PROJECT_NAME} PRIVATE CalcLibrary)
