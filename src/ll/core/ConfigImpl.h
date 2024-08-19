#pragma once

#include "ll/api/Config.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#define LL_CONFIG_IMPL(CLAZZ, PATH)                                                                                    \
    CLAZZ& get##CLAZZ() {                                                                                              \
        using namespace i18n_literals;                                                                                 \
        static CLAZZ config = []() {                                                                                   \
            CLAZZ res;                                                                                                 \
            try {                                                                                                      \
                if (ll::config::loadConfig(res, getSelfModIns()->getConfigDir() / PATH)) {                             \
                    return res;                                                                                        \
                }                                                                                                      \
            } catch (...) {                                                                                            \
                getLogger().error("{0} load failed"_tr(#CLAZZ));                                                       \
                ll::error_utils::printCurrentException(getLogger());                                                   \
            }                                                                                                          \
            try {                                                                                                      \
                if (ll::config::saveConfig(res, getSelfModIns()->getConfigDir() / PATH)) {                             \
                    getLogger().warn("{0} rewrite successfully"_tr(#CLAZZ));                                           \
                } else {                                                                                               \
                    getLogger().error("{0} rewrite failed"_tr(#CLAZZ));                                                \
                }                                                                                                      \
            } catch (...) {                                                                                            \
                getLogger().error("{0} rewrite failed"_tr(#CLAZZ));                                                    \
                ll::error_utils::printCurrentException(getLogger());                                                   \
            }                                                                                                          \
            return res;                                                                                                \
        }();                                                                                                           \
        return config;                                                                                                 \
    }                                                                                                                  \
    bool save##CLAZZ() {                                                                                               \
        using namespace i18n_literals;                                                                                 \
        bool res{};                                                                                                    \
        try {                                                                                                          \
            res = ll::config::saveConfig(get##CLAZZ(), getSelfModIns()->getConfigDir() / PATH);                        \
        } catch (...) {                                                                                                \
            res = false;                                                                                               \
            ll::error_utils::printCurrentException(getLogger());                                                       \
        }                                                                                                              \
        if (!res) {                                                                                                    \
            getLogger().error("{0} failed to save"_tr(#CLAZZ));                                                        \
            return false;                                                                                              \
        }                                                                                                              \
        return true;                                                                                                   \
    }
