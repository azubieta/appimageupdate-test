cmake_minimum_required(VERSION 3.20)
project(test_libappimageupdate)

set(CMAKE_CXX_STANDARD 14)
find_package(AppImageUpdate)

add_executable(test_libappimageupdate main.cpp)
target_link_libraries(test_libappimageupdate PRIVATE AppImageUpdate::libappimageupdate)
