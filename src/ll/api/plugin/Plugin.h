#pragma once

#include "ll/api/base/Global.h"
#include "ll/api/plugin/Version.h"
#include "ll/api/utils/WinHelper.h"


namespace ll::plugin {

struct Plugin {
    std::string                               mName;
    std::string                               mDescription;
    Version                                   mVersion;
    std::map<std::string, std::string>        mExtraInfo;
    std::unordered_map<std::string, std::any> mSharedData;

    HMODULE mHandle = nullptr;

    LLNDAPI std::string getDefaultDataPath() const;

    void addSharedData(std::string const& key, std::any const& value) { mSharedData[key] = value; }

    template <typename T>
    std::optional<T> getSharedData(std::string const& key) {
        if (mSharedData.contains(key)) {
            if (mSharedData[key].type() == typeid(T)) { return std::any_cast<T>(mSharedData[key]); }
        }
        return std::nullopt;
    }

    template <typename T>
    T getSharedData(std::string const& key, T const& defaultValue) {
        if (mSharedData.contains(key)) {
            if (mSharedData[key].type() == typeid(T)) { return std::any_cast<T>(mSharedData[key]); }
        }
        return defaultValue;
    }
};

} // namespace ll::plugin
