# EmbeddedLinux_Lec3Task1

## CMake overview

### What is CMake?

Cmake is an open-source croos-platform build system application

### Use of CMake

1. CMake is used by developers to describe & automate the building process in a platform-independent manner.

	1.1 this helps keep the source directory clean and facilitates building the same codebase with different configurations by:

	1.1.1 supporting out-of-source builds.

### Generation

it generates native build files such as:

1. Makefiles 

2. Project files for IDEs based in the developer configuration.

## Making a CMake for our calculator project

### 0. Pre-requist

you must install CMake tool to be able to use CMake

```
sudo apt install cmake  # version 3.28.1
```



### 1. Create a project directory

```
mkdir Calc_Project
```

### 2. Create include directory

to have all of the project headers in it

### 3. Create Lib directory 

to have all of the project source files in it

### 4. Create CMakeLists.txt file in the project directory

```
touch CMakeLists.txt
```

inside the CMakeList.txt we need to write the following commands

#### 4.1. Set min CMake version

```
cmake_minimum_required(VERSION 3.1...3.2)
```



#### 4.2. Create project info

```
project(Calculator VERSION 1.1
    DESCRIPTION "This is a simple calculator program"
    LANGUAGES C)
```



#### 4.3.Set variable to source files

```
file(GLOB SOURCE_FILES ./Lib/*.c)
```

for some reason set command did not work, however file(GLOB...) is not recommended for big project, but to put them manually. 

#### 4.4. Set variable to header files

```
set(HEADER_FILES ./Include)
```



#### 4.5. Create Library

```
add_library(CalcLibrary STATIC ${SOURCE_FILES} ${HEADER_FILES})
```



#### 4.6. Tell the CMake to use this library

```
target_include_directories(CalcLibrary PUBLIC ${HEADER_FILES})
```



#### 4.7.Create executable file

```
add_executable(${PROJECT_NAME} ../Calc_Project/main.c)
```



#### 4.8. Link library with executable

```
target_link_libraries(${PROJECT_NAME} PRIVATE CalcLibrary)
```



### 5. Creating our Build directory

as we said before CMake supports out-of-source builds so we need make a build directory for our project

```
mkdir build
cd build
```



### 6. Configure the project using CMake

```
cmake ..
```

### 7. Build the project using the generated build files

```
make
```


inside build file you should find your executable under the name of Calculator
