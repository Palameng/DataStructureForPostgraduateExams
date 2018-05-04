cmake_minimum_required(VERSION 3.9)
project(CSProjects C)

set(CMAKE_C_STANDARD 99)

add_executable(CSProjects main.c Unit_2/OrderList.h Unit_2/OrderList.c BaseHeader/base.h Unit_2/LinkedList.h Unit_2/LinkedList.c Unit_3/StackAndQueue.c Unit_3/StackAndQueue.h Unit_4/String.h Unit_4/String.c Unit_6/Tree.h Unit_6/Tree.c Unit_5/GeneralizedList.h Unit_5/GeneralizedList.c)