#include "ll/core/Config.h"

#include "ll/api/Config.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll {
using namespace i18n_literals;

struct LeviConfig globalConfig;

bool loadLeviConfig() {
    try {
        if (ll::config::loadConfig(globalConfig, getSelfModIns()->getConfigDir() / u8"config.json")) {
            return true;
        }
    } catch (...) {
        logger.error("LeviConfig load failed"_tr());
        ll::error_utils::printCurrentException(logger);
    }
    try {
        if (ll::config::saveConfig(globalConfig, getSelfModIns()->getConfigDir() / u8"config.json")) {
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
        res = ll::config::saveConfig(globalConfig, getSelfModIns()->getConfigDir() / u8"config.json");
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
