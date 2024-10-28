cmake_minimum_required(VERSION 3.10)
project(oop_course)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXTERNAL_DIR "${CMAKE_BINARY_DIR}/external")

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
  SOURCE_DIR "${EXTERNAL_DIR}/googletest"
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(lab1)
# add_subdirectory(lab2)
# add_subdirectory(lab3)
# add_subdirectory(lab4)

enable_testing()