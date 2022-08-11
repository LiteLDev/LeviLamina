cmake_minimum_required(VERSION 3.21)
project(LiteLoader.Js)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND QUICKJS)
set(SCRIPTX_BACKEND QuickJs)
set(LLSE_BACKEND_LIBRARY QuickJs)

include(../../CMakeLists.txt)
