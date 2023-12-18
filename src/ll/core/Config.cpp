#include "ll/core/Config.h"
#include "ll/api/Config.h"
#include "ll/api/base/ErrorInfo.h"
#include "ll/core/LeviLamina.h"

namespace ll {
using namespace i18n_literals;

static constexpr std::u8string_view leviConfigPath = u8R"(plugins\LeviLamina\config\config.json)";

struct LeviConfig globalConfig;

bool loadLeviConfig() {
    try {
        if (!ll::config::loadConfig(globalConfig, leviConfigPath)) {
            if (ll::config::saveConfig(globalConfig, leviConfigPath)) {
                logger.warn("ll.config.rewrite.success"_tr);
            } else {
                logger.error("ll.config.rewrite.fail"_tr);
                return false;
            }
        }
        return true;
    } catch (...) {
        logger.error("ll.config.load.fail"_tr);
        ll::error_info::printCurrentException();
        return false;
    }
}

bool saveLeviConfig() {
    bool res{};
    try {
        res = ll::config::saveConfig(globalConfig, leviConfigPath);
    } catch (...) {
        logger.error("ll.config.save.fail"_tr);
        ll::error_info::printCurrentException();
        return false;
    }
    if (!res) {
        logger.error("ll.config.save.fail"_tr);
        return false;
    }
    return true;
}

} // namespace ll
