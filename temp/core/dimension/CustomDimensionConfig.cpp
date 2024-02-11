
#include "CustomDimensionConfig.h"

#include "ll/api/Config.h"
#include "ll/api/Logger.h"
#include "ll/api/service/Bedrock.h"

#include "mc/world/level/Level.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/storage/LevelData.h"

namespace ll::dimension::CustomDimensionConfig {

static ll::Logger            logger("CustomDimensionConfig");
static std::filesystem::path dimensionConfigPath{u8"./worlds"};
Config                       dimConfig{};

void setDimensionConfigPath() {
    if (!ll::service::getLevel()) {
        throw std::runtime_error("Level nullptr");
    }
    dimensionConfigPath /= string_utils::str2u8str(ll::service::getLevel()->getLevelData().getLevelName());
    dimensionConfigPath /= u8"dimension_config.json";
}

bool loadConfigFile() {
    if (!ll::config::loadConfig(dimConfig, dimensionConfigPath, [](auto&, auto&) -> bool { return false; })) {
        if (ll::config::saveConfig(dimConfig, dimensionConfigPath)) {
            logger.warn("Config file rewrite success!");
        } else {
            logger.warn("Config file rewrite fail!");
            return false;
        }
    }
    return true;
}

bool saveConfigFile() {
    if (!ll::config::saveConfig(dimConfig, dimensionConfigPath)) {
        logger.error("Config file save fail!");
        return false;
    }
    return true;
}
} // namespace ll::dimension::CustomDimensionConfig
