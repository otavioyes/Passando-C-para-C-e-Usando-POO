# Set the minimum required version of CMake to 3.28
cmake_minimum_required(VERSION 3.28)

# Define the project name as 'Date' and specify the language as C++
project(Date LANGUAGES CXX)

# Set the C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
# Ensure that the C++ standard is strictly enforced
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the binary output directory
set(BIN_DIR ${CMAKE_BINARY_DIR}/bin)

# Copy the file std.ixx to the binary output directory
file(COPY "$ENV{VCToolsInstallDir}/modules/std.ixx"
     DESTINATION ${BIN_DIR}
 )

 # Add the executable to the project and specify the sources
 add_executable(${PROJECT_NAME})

 # Specify the sources for the target executable
 target_sources(${PROJECT_NAME}
  # Specify module files to be included in the target
  PRIVATE FILE_SET CXX_MODULES FILES
    ${BIN_DIR}/std.ixx
    date.ixx
  # Specify other source files
  PRIVATE
    main.cpp
)

# Include the binary output directory as an include directory
target_include_directories(${PROJECT_NAME} PRIVATE ${BIN_DIR})
