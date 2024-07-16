cmake_minimum_required(VERSION 3.28)
project(cpp07)

set(CMAKE_CXX_STANDARD 17)

add_executable(ex00
		ex00/main.cpp
		ex00/templates.h
		ex02/Array.h
)

add_executable(ex01
		ex01/interTemplate.h
		ex01/main.cpp
)
