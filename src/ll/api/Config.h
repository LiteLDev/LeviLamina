#pragma once
#include "ll/api/Logger.h"
#include "ll/api/reflection/Serialization.h"
#include "ll/api/utils/FileHelper.h"
#include "nlohmann/json.hpp"

namespace ll::config {

static constexpr const std::string_view metaDataName{".meta"};

template <typename T>
concept IsConfig =
    ll::reflection::Reflectable<T> && std::integral<std::remove_cvref_t<decltype(std::declval<T>().version)>>;

template <IsConfig T, typename J = nlohmann::ordered_json>
inline bool saveConfig(T const& config, std::string const& path) noexcept {
    using namespace ll::i18n_literals;
    try {
        namespace fs = std::filesystem;
        auto data{ll::reflection::serialize<J, T>(config)};
        data.erase("version");
        data[metaDataName]["name"]    = ll::reflection::type_name_v<T>;
        data[metaDataName]["version"] = config.version;
        fs::create_directories(fs::path(path).remove_filename());
        std::ofstream{path} << data.dump(4);
        return true;
    } catch (...) {}
    std::clog << "config.save.fail"_tr << std::endl;
    return false;
}

template <IsConfig T, typename J = nlohmann::ordered_json>
inline bool loadConfig(T& config, std::string const& path, bool overwriteAfterFail = true) noexcept {
    using namespace ll::i18n_literals;
    bool res = true;
    try {
        auto content = ll::readAllFile(path);
        if (content && !content.value().empty()) {

            auto data{J::parse(content.value(), nullptr, false, true)};

            if (!data.contains(metaDataName)) {
                std::cout << "config.metadata.empty"_tr << std::endl;
                res = false;
            } else {
                auto& metaData = data[metaDataName];
                if (!((metaData.contains("name") && metaData["name"].is_string() && (std::string)metaData["name"] == ll::reflection::type_name_v<T>)&&(
                        metaData.contains("version") && metaData["version"].is_number()
                        && (int64)metaData["version"] == config.version
                    ))) {
                    std::cout << "config.metadata.unmatch"_tr << std::endl; // TODO i18n
                    res = false;
                }
            }
            ll::reflection::deserialize<J, T>(config, data);
        } else {
            std::cout << "config.file.empty"_tr << std::endl; // TODO i18n
            res = false;
        }
    } catch (...) {}
    if (!res && overwriteAfterFail) {
        std::cout << "config.save.rewrite"_tr << std::endl; // TODO i18n
        saveConfig<T, J>(config, path);
    }
    return res;
}

} // namespace ll::config
