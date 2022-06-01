cmake_minimum_required(VERSION 3.21)
project(ClothingLab)

set(CMAKE_CXX_STANDARD 14)

add_executable(ClothingLab src/main.cpp src/Accessory.cpp src/Accessory.h src/Clothing.cpp src/Clothing.h src/Wearable.cpp src/Wearable.h)
