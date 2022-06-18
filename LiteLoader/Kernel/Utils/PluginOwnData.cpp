#include <Utils/PluginOwnData.h>

#include <minwindef.h>
#include <string_view>

namespace PluginOwnData {
    std::unordered_map<HMODULE, std::unordered_map<std::string, void*>> data;
}