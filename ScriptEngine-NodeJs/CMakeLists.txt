cmake_minimum_required(VERSION 3.21)
project(LiteLoader.NodeJs)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)

set(LLSE_BACKEND NODEJS)
set(SCRIPTX_BACKEND V8)
set(LLSE_BACKEND_LIBRARY NodeJs)

include(../ScriptEngine/CMakeLists.txt)
