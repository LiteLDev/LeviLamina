cmake_minimum_required(VERSION 3.21)
project(LiteLoader.Lua)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND LUA)
set(SCRIPTX_BACKEND Lua)
set(LLSE_BACKEND_LIBRARY Lua)

include(../../CMakeLists.txt)
