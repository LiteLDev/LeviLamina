#pragma once

#include <functional>
#include <memory>
#include <mutex>
#include <string_view>
#include <vector>

#include "ll/api/base/UnorderedStringMap.h"
#include "ll/api/plugin/Plugin.h"

namespace ll::plugin {
class PluginManager {
protected:
    std::recursive_mutex                        mutex;
    std::string const                           type;
    UnorderedStringMap<std::shared_ptr<Plugin>> plugins;

    PluginManager(std::string type) : type(std::move(type)) {}

public:
    virtual ~PluginManager() = default;

    virtual std::shared_ptr<Plugin> load(Manifest) = 0;

    virtual bool unload(std::string_view) = 0;

    virtual bool enable(std::string_view) = 0;

    virtual bool disable(std::string_view) = 0;

    virtual size_t unloadAll() {
        std::lock_guard lock(mutex);
        size_t          count{};
        for (auto& name : getPluginNames()) {
            count += unload(name);
        }
        return count;
    }
    virtual size_t enableAll() {
        std::lock_guard lock(mutex);
        size_t          count{};
        for (auto& name : getPluginNames()) {
            count += enable(name);
        }
        return count;
    }
    virtual size_t disableAll() {
        std::lock_guard lock(mutex);
        size_t          count{};
        for (auto& name : getPluginNames()) {
            count += disable(name);
        }
        return count;
    }

    [[nodiscard]] std::string const& getType() const { return type; }

    [[nodiscard]] bool hasPlugin(std::string_view name) { return plugins.contains(name); }

    [[nodiscard]] std::shared_ptr<Plugin> getPlugin(std::string_view name) {
        std::lock_guard lock(mutex);
        if (auto i = plugins.find(name); i != plugins.end()) {
            return i->second;
        }
        return nullptr;
    }

    [[nodiscard]] size_t getPluginCount() {
        std::lock_guard lock(mutex);
        return plugins.size();
    }

    [[nodiscard]] std::vector<std::string> getPluginNames() {
        std::lock_guard          lock(mutex);
        std::vector<std::string> result;
        result.reserve(plugins.size());
        for (auto& [name, plugin] : plugins) {
            result.emplace_back(name);
        }
        return result;
    }
    void forEachPlugin(std::function<bool(std::string_view name, Plugin&)> const& fn) {
        std::lock_guard lock(mutex);
        for (auto& [name, plugin] : plugins) {
            if (!fn(name, *plugin)) {
                return;
            }
        }
    }
};
} // namespace ll::plugin
