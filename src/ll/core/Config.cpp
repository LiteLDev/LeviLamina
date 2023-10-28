#include "ll/core/Config.h"

#include "ll/api/Config.h"


namespace ll {

static const std::string LLConfigPath{R"(plugins\LeviLamina\config.json)"};

LLConfig globalConfig;

bool loadLLConfig() { return ll::config::loadConfig(globalConfig, LLConfigPath); }

bool saveLLConfig() { return ll::config::saveConfig(globalConfig, LLConfigPath); }
} // namespace ll
