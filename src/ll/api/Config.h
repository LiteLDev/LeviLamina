#pragma once

#include "nlohmann/json.hpp"

#include "ll/api/io/FileUtils.h"
#include "ll/api/reflection/Serialization.h"

namespace ll::config {

template <class T>
concept IsConfig =
    ll::reflection::Reflectable<T> && std::integral<std::remove_cvref_t<decltype(std::declval<T>().version)>>;

template <IsConfig T, class J = nlohmann::ordered_json>
inline bool saveConfig(T const& config, std::string_view path) {
    namespace fs = std::filesystem;
    std::error_code ec;
    fs::create_directories(file_utils::u8path(path).remove_filename(), ec);
    std::ofstream{file_utils::u8path(path)} << ll::reflection::serialize<J, T>(config).dump(4);
    return true;
}
template <class T, class J>
bool defaultConfigUpdater(T& config, J& data) {
    data.erase("version");
    auto patch = ll::reflection::serialize<J, T>(config);
    patch.merge_patch(data);
    data = patch;
    return true;
}
template <IsConfig T, class J = nlohmann::ordered_json>
inline bool
loadConfig(T& config, std::string_view path, std::function<bool(T&, J&)> updater = defaultConfigUpdater<T, J>) {
    bool noNeedRewrite = true;

    auto content = file_utils::readFile(path);
    if (content && !content.value().empty()) {

        auto data{J::parse(content.value(), nullptr, false, true)};

        if (!data.contains("version")) {
            noNeedRewrite = false;
        } else if (!(int64)data["version"] == config.version) {
            noNeedRewrite = false;
        }
        if (noNeedRewrite || updater(config, data)) {
            ll::reflection::deserialize<J, T>(config, data);
        }
    } else {
        noNeedRewrite = false;
    }
    return noNeedRewrite;
}

} // namespace ll::config
