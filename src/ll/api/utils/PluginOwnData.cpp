#include "ll/api/utils/PluginOwnData.h"

std::unordered_map<HMODULE, std::unordered_map<std::string, void*>> ll_PluginOwnData;
