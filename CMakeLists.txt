cmake_minimum_required(VERSION 3.21)
project(LL-Parent)

# Add sub directories
add_subdirectory(PreLoader)
add_subdirectory(LiteLoader)
add_subdirectory(ScriptEngine/CMake/ScriptEngine-Lua)
add_subdirectory(ScriptEngine/CMake/ScriptEngine-QuickJs)
add_subdirectory(ScriptEngine/CMake/ScriptEngine-NodeJs)
add_subdirectory(Tools/Demangler)
add_subdirectory(ScriptEngine/third-party/ScriptX/CMake/ScriptX-Lua)
add_subdirectory(ScriptEngine/third-party/ScriptX/CMake/ScriptX-QuickJs)
add_subdirectory(ScriptEngine/third-party/ScriptX/CMake/ScriptX-NodeJs)
add_subdirectory(Tools/SymDBHelper)