#pragma once

#include <string>
#include <unordered_map>

#include "ll/api/base/StdInt.h"
#include "mc/world/level/levelgen/GeneratorType.h"

namespace ll::dimension::CustomDimensionConfig {
struct Config {
    struct Info {
        int         dimId{};
        std::string base64Nbt;
    };
    int                                   version = 3;
    std::unordered_map<std::string, Info> dimensionList{};
};
extern Config dimConfig;

void setDimensionConfigPath();
bool loadConfigFile();
bool saveConfigFile();
}; // namespace ll::dimension::CustomDimensionConfig
