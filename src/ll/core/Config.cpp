#include "ll/core/Config.h"

#include "ll/api/Config.h"


namespace ll {

static const std::string LLConfigPath{"plugins\\LeviLamina\\config.json"};

LLConfig globalConfig;

bool LoadLLConfig() { return ll::config::loadConfig(globalConfig, LLConfigPath); }

bool SaveLLConfig() { return ll::config::saveConfig(globalConfig, LLConfigPath); }
} // namespace ll
