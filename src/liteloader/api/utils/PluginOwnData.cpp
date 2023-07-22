#include "liteloader/api/utils/PluginOwnData.h"

#include <minwindef.h>
#include <string_view>

std::unordered_map<HMODULE, std::unordered_map<std::string, void*>> ll_PluginOwnData;
