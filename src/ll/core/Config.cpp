#include "ll/core/Config.h"

#include "ll/api/Config.h"


namespace ll {

static const std::string leviConfigPath{R"(plugins\LeviLamina\config.json)"};

struct LeviConfig globalConfig;

bool loadLeviConfig() { return ll::config::loadConfig(globalConfig, leviConfigPath); }

bool saveLeviConfig() { return ll::config::saveConfig(globalConfig, leviConfigPath); }

} // namespace ll
