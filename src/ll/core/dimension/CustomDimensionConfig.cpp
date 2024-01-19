
#include "CustomDimensionConfig.h"

#include "ll/api/Config.h"
#include "ll/api/Logger.h"
#include "ll/api/service/Bedrock.h"

#include "mc/world/level/Level.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/storage/LevelData.h"

namespace ll::dimension::CustomDimensionConfig {

static ll::Logger  logger("CustomDimensionConfig");
static std::string dimensionConfigPath{R"(worlds\Bedrock level\dimension_config.json)"};
Config             dimConfig{};

void setDimensionConfigPath() {
    if (!ll::service::getLevel()) {
        return;
    }
    auto levelName = ll::service::getLevel()->getLevelData().getLevelName();
    dimensionConfigPath.replace(dimensionConfigPath.find("Bedrock level"), 13, levelName);
}

bool loadConfigFile() {
    setDimensionConfigPath(); // set real world path
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
