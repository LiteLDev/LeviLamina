#pragma once
#include "ll/api/Logger.h"
#include "ll/api/reflection/Serialization.h"
#include "ll/api/utils/FileHelper.h"
#include "nlohmann/json.hpp"

namespace ll::config {

static constexpr const std::string_view metaDataName{".meta"};

LLETAPI ll::Logger configLogger;

template <typename T>
concept IsConfig =
    ll::reflection::Reflectable<T> && std::integral<std::remove_cvref_t<decltype(std::declval<T>().version)>>;

template <IsConfig T, typename J = nlohmann::ordered_json>
inline bool saveConfig(T const& config, std::string const& path) noexcept {
    try {
        auto data{ll::reflection::serialize<J, T>(config)};
        data.erase("version");
        data[metaDataName]["name"]    = ll::reflection::type_name_v<T>;
        data[metaDataName]["version"] = config.version;
        std::filesystem::create_directories(std::filesystem::path(path).remove_filename());
        std::ofstream{path} << data.dump(4);
        return true;
    } catch (...) {}
    configLogger.error("config.save.fail"_tr); // TODO i18n
    return false;
}

template <IsConfig T, typename J = nlohmann::ordered_json>
inline bool loadConfig(T& config, std::string const& path, bool overwriteAfterFail = true) noexcept {
    bool res = true;
    try {
        if (auto content = ll::ReadAllFile(path); content && !content.value().empty()) {

            auto data{J::parse(content.value(), nullptr, false, true)};

            if (!data.contains(metaDataName)) {
                configLogger.warn("config.metadata.empty"_tr); // TODO i18n
                res = false;
            } else {
                auto& metaData = data[metaDataName];
                if ((!metaData.contains("name") || (std::string)metaData["name"] != ll::reflection::type_name_v<T>)
                    || (!metaData.contains("version") || (int64)metaData["version"] != config.version)) {
                    configLogger.warn("config.metadata.unmatch"_tr); // TODO i18n
                    res = false;
                }
            }
            ll::reflection::deserialize<J, T>(config, data);
        } else {
            configLogger.warn("config.file.empty"_tr); // TODO i18n
            res = false;
        }
    } catch (...) {}
    if (!res && overwriteAfterFail) saveConfig<T, J>(config, path);
    return res;
}

} // namespace ll::config
