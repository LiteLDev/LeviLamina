cmake_minimum_required(VERSION 3.21)
project(LL-Parent)

# Add sub directories
add_subdirectory(PreLoader)
add_subdirectory(LiteLoader)
add_subdirectory(Tools/LLUnifiedOutput)
add_subdirectory(Tools/SymDBHelper)
add_subdirectory(ScriptEngine)
