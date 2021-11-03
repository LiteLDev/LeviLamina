#include <Utils/PluginOwnData.h>

#include <minwindef.h>
#include <string_view>

std::unordered_map<HMODULE, std::unordered_map<std::string_view, void*>> ll_PluginOwnData;