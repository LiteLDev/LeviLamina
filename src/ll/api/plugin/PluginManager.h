#pragma once

#include <ranges>
#include <string>
#include <unordered_map>

#include "ll/api/Config.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/Plugin.h"

namespace ll::plugin {

extern "C" struct IMAGE_DOS_HEADER __ImageBase; // NOLINT(bugprone-reserved-identifier)

template <typename... Bases>
struct overload : Bases... {
    using is_transparent = void;
    using Bases::operator()...;
};

struct char_pointer_hash {
    auto operator()(const char* ptr) const noexcept { return std::hash<std::string_view>{}(ptr); }
};

using transparent_string_hash = overload<std::hash<std::string>, std::hash<std::string_view>, char_pointer_hash>;

using PluginStorage = std::unordered_map<std::string, Plugin, transparent_string_hash, std::equal_to<>>;

class PluginManager {
    struct Impl;
    std::unique_ptr<Impl> mImpl;
    using Handle = void*;
    PluginManager();

    LLNDAPI static auto getCurrentPlugin(void* base) -> Plugin&;

public:
    LLNDAPI static auto getInstance() -> PluginManager&;

    void addDllMapping(Handle, std::string_view);

    LLAPI auto   registerPlugin(Manifest manifest) -> bool;
    LLAPI auto   unregisterPlugin(std::string_view name) -> bool;
    LLNDAPI auto findPlugin(std::string_view name) -> optional_ref<Plugin const>;
    LLNDAPI auto getAllPlugins() -> PluginStorage const&;

    [[maybe_unused]] inline static auto getCurrentPlugin() -> Plugin& {
        static auto plugin = getCurrentPlugin(&__ImageBase);
        return plugin;
    }
};

} // namespace ll::plugin
