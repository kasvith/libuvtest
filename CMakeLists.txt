cmake_minimum_required(VERSION 3.15)
project(LibUVTest)
add_executable(main main.cc)

add_subdirectory(libuv)
add_subdirectory(plg)

target_link_libraries(main uv_a)
