cmake_minimum_required(VERSION 3.21)
project(LiteLoaderBDS)

# Add sub directories
add_subdirectory(LLPreLoader)
add_subdirectory(LiteLoader)
add_subdirectory(ScriptEngine/CMake/ScriptEngine-Lua)
add_subdirectory(ScriptEngine/CMake/ScriptEngine-QuickJs)
add_subdirectory(ScriptEngine/CMake/ScriptEngine-NodeJs)
add_subdirectory(Tools/Demangler)
add_subdirectory(ScriptEngine/third-party/ScriptX/CMake/ScriptX-Lua)
add_subdirectory(ScriptEngine/third-party/ScriptX/CMake/ScriptX-QuickJs)
add_subdirectory(ScriptEngine/third-party/ScriptX/CMake/ScriptX-NodeJs)
add_subdirectory(Tools/SymDBHelper)

include(${CMAKE_SOURCE_DIR}/CMake/PackOutput.cmake)
include(${CMAKE_SOURCE_DIR}/CMake/PackSDK.cmake)
include(${CMAKE_SOURCE_DIR}/CMake/CleanOutput.cmake)
