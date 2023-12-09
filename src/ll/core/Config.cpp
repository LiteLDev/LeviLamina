#include "ll/core/Config.h"
#include "ll/api/Config.h"
#include "ll/core/LeviLamina.h"

namespace ll {
using namespace i18n_literals;

static constexpr std::string_view leviConfigPath = R"(plugins\LeviLamina\config\config.json)";

struct LeviConfig globalConfig;

bool loadLeviConfig() {
    if (!ll::config::loadConfig(globalConfig, leviConfigPath, false)) {
        if (ll::config::saveConfig(globalConfig, leviConfigPath)) {
            logger.warn("ll.config.rewrite.success"_tr);
        } else {
            logger.warn("ll.config.rewrite.fail"_tr);
        }
        return false;
    }
    return true;
}

bool saveLeviConfig() {
    if (!ll::config::saveConfig(globalConfig, leviConfigPath)) {
        logger.error("ll.config.save.fail"_tr);
        return false;
    }
    return true;
}

} // namespace ll
