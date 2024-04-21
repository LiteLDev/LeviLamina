#include "ll/core/Config.h"

#include "ll/api/Config.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll {
using namespace i18n_literals;

static constexpr std::u8string_view leviConfigPath = u8R"(plugins\LeviLamina\config\config.json)";

struct LeviConfig globalConfig;

bool loadLeviConfig() {
    try {
        if (ll::config::loadConfig(globalConfig, leviConfigPath)) {
            return true;
        }
    } catch (...) {
        logger.error("LeviConfig load failed"_tr());
        ll::error_utils::printCurrentException(logger);
    }
    try {
        if (ll::config::saveConfig(globalConfig, leviConfigPath)) {
            logger.warn("LeviConfig rewrite successfully"_tr());
        } else {
            logger.error("LeviConfig rewrite failed"_tr());
            return false;
        }
    } catch (...) {
        logger.error("LeviConfig rewrite failed"_tr());
        ll::error_utils::printCurrentException(logger);
    }
    return false;
}

bool saveLeviConfig() {
    bool res{};
    try {
        res = ll::config::saveConfig(globalConfig, leviConfigPath);
    } catch (...) {
        res = false;
        ll::error_utils::printCurrentException(logger);
    }
    if (!res) {
        logger.error("LeviConfig failed to save"_tr());
        return false;
    }
    return true;
}

} // namespace ll
