#pragma once

#include "nlohmann/json.hpp"

#include "ll/api/Logger.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/reflection/Serialization.h"

namespace ll::config {

constexpr std::string_view metaDataName = ".meta";

template <typename T>
concept IsConfig =
    ll::reflection::Reflectable<T> && std::integral<std::remove_cvref_t<decltype(std::declval<T>().version)>>;

template <IsConfig T, typename J = nlohmann::ordered_json>
inline bool saveConfig(T const& config, std::string_view path, bool logFailed = true) noexcept {
    using namespace ll::i18n_literals;
    using namespace ll::utils;
    try {
        namespace fs = std::filesystem;
        auto data{ll::reflection::serialize<J, T>(config)};
        data.erase("version");
        data[metaDataName]["name"]    = ll::reflection::type_name_v<T>;
        data[metaDataName]["version"] = config.version;
        fs::create_directories(file_utils::u8path(path).remove_filename());
        std::ofstream{file_utils::u8path(path)} << data.dump(4);
        return true;
    } catch (...) {}
    if (logFailed)
        std::cout << fmt::format(fmt::runtime("config.save.fail"_tr), ll::reflection::type_name_v<T>)
                  << std::endl; // TODO i18n
    return false;
}

template <IsConfig T, typename J = nlohmann::ordered_json>
inline bool loadConfig(T& config, std::string_view path, bool overwriteAfterFail = true) noexcept {
    using namespace ll::i18n_literals;
    using namespace ll::utils;
    bool res = true;
    try {
        auto content = file_utils::readFile(path);
        if (content && !content.value().empty()) {

            auto data{J::parse(content.value(), nullptr, false, true)};

            if (!data.contains(metaDataName)) {
                res = false;
            } else {
                auto& metaData = data[metaDataName];
                if (!((metaData.contains("name") && metaData["name"].is_string() && (std::string)metaData["name"] == ll::reflection::type_name_v<T>)&&(
                        metaData.contains("version") && metaData["version"].is_number()
                        && (int64)metaData["version"] == config.version
                    ))) {
                    res = false;
                }
            }
            ll::reflection::deserialize<J, T>(config, data);
        } else {
            res = false;
        }
    } catch (...) {}
    if (!res && overwriteAfterFail) {
        std::cout << fmt::format(fmt::runtime("config.save.rewrite"_tr), ll::reflection::type_name_v<T>)
                  << std::endl; // TODO i18n
        saveConfig<T, J>(config, path);
    }
    return res;
}

} // namespace ll::config
