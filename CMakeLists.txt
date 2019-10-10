cmake_minimum_required(VERSION 3.15)
project(LibUVTest)

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_subdirectory(libuv)
add_subdirectory(loader)

add_executable(main main.cc)
target_link_libraries(main uv_a)
target_link_libraries(main loader)

add_library(hello SHARED plg/hello.c)
target_link_libraries(hello loader)
