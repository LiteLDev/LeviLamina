#pragma once

#include "ll/api/base/Global.h"
#include "ll/api/plugin/Version.h"


namespace ll::plugin {

struct Plugin {
    std::string                               mName;
    std::string                               mDescription;
    Version                                   mVersion;
    std::map<std::string, std::string>        mExtraInfo;
    std::unordered_map<std::string, std::any> mSharedData;

    LLNDAPI std::string getDefaultDataPath() const;

    template <typename T, typename... Args>
    void addSharedData(std::string const& key, Args&&... args)
        requires(std::is_constructible_v<std::any, std::in_place_type_t<T>, Args...>)
    {
        mSharedData[key] = std::make_any<T>(std::forward<Args>(args)...);
    }
    template <typename T>
    optional_ref<T> getSharedData(std::string const& key) {
        if (mSharedData.contains(key)) { return std::any_cast<T>(&mSharedData[key]); }
        return std::nullopt;
    }
};

} // namespace ll::plugin
