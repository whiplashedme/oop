add_executable(main1 main.cpp)

add_executable(tests1 tests/test_time.cpp)

include_directories(${CMAKE_SOURCE_DIR}/external/googletest/googletest/include)
target_link_libraries(tests1 gtest gtest_main)

include(GoogleTest)

gtest_discover_tests(tests1)