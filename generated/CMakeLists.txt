cmake_minimum_required(VERSION 3.10)
project(services)

set(CMAKE_CXX_STANDARD 17)

add_executable(ex_serv1 serv1.cpp ex_serv1.cpp)
target_link_libraries(ex_serv1)

add_executable(ex_serv2 serv2.cpp ex_serv2.cpp)
target_link_libraries(ex_serv2)


