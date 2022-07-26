cmake_minimum_required(VERSION 3.21)
project(LL-Parent)

# Add sub directories
add_subdirectory(PreLoader)
add_subdirectory(LiteLoader)
add_subdirectory(ScriptEngine/Lua)
add_subdirectory(ScriptEngine/QuickJs)
add_subdirectory(ScriptEngine/NodeJs)
add_subdirectory(Tools/Demangler)
add_subdirectory(Tools/ScriptX/ScriptX-Lua-Build)
add_subdirectory(Tools/ScriptX/ScriptX-QuickJs-Build)
add_subdirectory(Tools/ScriptX/ScriptX-NodeJs-Build)
add_subdirectory(Tools/SymDBHelper)