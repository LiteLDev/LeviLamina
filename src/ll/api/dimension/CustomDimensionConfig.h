#pragma once

#include <string>
#include <unordered_map>

#include "ll/api/Logger.h"
#include "ll/api/base/StdInt.h"
#include "mc/world/level/levelgen/GeneratorType.h"

namespace CustomDimensionConfig {
namespace {
ll::Logger logger("CustomDimensionConfig");
}

struct Config {
    struct dimensionInfo {
        int           id            = -1;
        uint          seed          = 123;
        GeneratorType generatorType = GeneratorType::Void;
    };
    int                                            version       = 1;
    std::unordered_map<std::string, dimensionInfo> dimensionList = {};
};
extern std::string dimensionConfigPath;
extern Config      dimConfig;

void setDimensionConfigPath();
bool loadConfigFile();
bool saveConfigFile();
}; // namespace CustomDimensionConfig
