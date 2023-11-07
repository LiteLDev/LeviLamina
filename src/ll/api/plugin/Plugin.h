#pragma once

#include <any>
#include <filesystem>
#include <string>
#include <unordered_map>

#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/Version.h"

#include "mc/common/wrapper/optional_ref.h"

namespace ll::plugin {

class Plugin {
    Manifest                                          mManifest;
    mutable std::unordered_map<std::string, std::any> mSharedData;

public:
    LLAPI explicit Plugin(Manifest manifest);

    LLNDAPI const Manifest& getManifest() const;

    LLNDAPI std::unordered_map<std::string, std::any>& getSharedData() const;

    LLNDAPI std::filesystem::path getDefaultDataPath() const;

    template <typename T, typename... Args>
    [[maybe_unused]] void setSharedData(std::string const& key, Args&&... args)
        requires(std::is_constructible_v<std::any, std::in_place_type_t<T>, Args...>)
    {
        getSharedData().insert_or_assign(key, std::make_any<T>(std::forward<Args>(args)...));
    }

    template <typename T>
    optional_ref<T> getSharedData(std::string const& key) const {
        if (getSharedData().contains(key)) { return std::any_cast<T>(&getSharedData().at(key)); }
        return std::nullopt;
    }
};

} // namespace ll::plugin
