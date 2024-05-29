#pragma once

#include "nlohmann/json.hpp"

#include "ll/api/io/FileUtils.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/Serialization.h"

namespace ll::config {

template <class T>
concept IsConfig =
    ll::reflection::Reflectable<T> && std::integral<std::remove_cvref_t<decltype((std::declval<T>().version))>>;

template <class T>
struct DumpType;

template <std::derived_from<nlohmann::detail::json_default_base> T>
struct DumpType<T> {
    std::string operator()(T const& t) { return t.dump(4); }
};

template <IsConfig T, class J = nlohmann::ordered_json>
inline bool saveConfig(T const& config, std::filesystem::path const& path) {
    return file_utils::writeFile(path, DumpType<J>{}(ll::reflection::serialize<J>(config).value()));
}

template <class T>
struct ParseType;

template <std::derived_from<nlohmann::detail::json_default_base> T>
struct ParseType<T> {
    T operator()(std::string const& content) { return T::parse(content, nullptr, true, true); }
};

template <class T, class J>
bool defaultConfigUpdater(T& config, J& data) {
    data.erase("version");
    auto patch = ll::reflection::serialize<J>(config);
    patch.value().merge_patch(data);
    data = *std::move(patch);
    return true;
}
template <IsConfig T, class J = nlohmann::ordered_json, class F = bool(T&, J&)>
inline bool loadConfig(T& config, std::filesystem::path const& path, F&& updater = defaultConfigUpdater<T, J>) {
    bool noNeedRewrite = true;
    namespace fs       = std::filesystem;
    if (!fs::exists(path)) {
        saveConfig<T, J>(config, path);
    }
    auto content = file_utils::readFile(path);
    if (content && !content->empty()) {
        auto data{ParseType<J>{}(*content)};
        if (!data.contains("version")) {
            noNeedRewrite = false;
        } else if ((int64)(data["version"]) != config.version) {
            noNeedRewrite = false;
        }
        if (noNeedRewrite || std::invoke(std::forward<F>(updater), config, data)) {
            ll::reflection::deserialize(config, data).value();
        }
    } else {
        noNeedRewrite = false;
    }
    return noNeedRewrite;
}

} // namespace ll::config
