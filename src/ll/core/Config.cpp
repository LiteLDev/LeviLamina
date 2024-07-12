#include "ll/core/Config.h"

#include "ll/api/Config.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll {
using namespace i18n_literals;

LeviConfig& getLeviConfig() {
    static LeviConfig config = []() {
        LeviConfig res;
        try {
            if (ll::config::loadConfig(res, getSelfModIns()->getConfigDir() / u8"config.json")) {
                return res;
            }
        } catch (...) {
            getLogger().error("LeviConfig load failed"_tr());
            ll::error_utils::printCurrentException(getLogger());
        }
        try {
            if (ll::config::saveConfig(res, getSelfModIns()->getConfigDir() / u8"config.json")) {
                getLogger().warn("LeviConfig rewrite successfully"_tr());
            } else {
                getLogger().error("LeviConfig rewrite failed"_tr());
            }
        } catch (...) {
            getLogger().error("LeviConfig rewrite failed"_tr());
            ll::error_utils::printCurrentException(getLogger());
        }
        return res;
    }();
    return config;
}

bool saveLeviConfig() {
    bool res{};
    try {
        res = ll::config::saveConfig(getLeviConfig(), getSelfModIns()->getConfigDir() / u8"config.json");
    } catch (...) {
        res = false;
        ll::error_utils::printCurrentException(getLogger());
    }
    if (!res) {
        getLogger().error("LeviConfig failed to save"_tr());
        return false;
    }
    return true;
}

} // namespace ll
