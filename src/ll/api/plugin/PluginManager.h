#pragma once

#include <functional>
#include <memory>
#include <mutex>
#include <string_view>
#include <vector>

#include "ll/api/base/UnorderedStringMap.h"
#include "ll/api/plugin/Plugin.h"

namespace ll::plugin { // TODO : pimpl
class PluginManagerRegistry;
class PluginManager {
    friend PluginManagerRegistry;

protected:
    std::recursive_mutex                        mutex;
    std::string                                 type;
    UnorderedStringMap<std::shared_ptr<Plugin>> plugins;

    PluginManager(std::string type) : type(std::move(type)) {}

    bool addPlugin(std::string_view name, std::shared_ptr<Plugin> const& plugin) {
        std::lock_guard lock(mutex);
        if (!plugin) {
            return false;
        }
        return plugins.emplace(std::string{name}, plugin).second;
    }

    bool erasePlugin(std::string_view name) {
        std::lock_guard lock(mutex);
        if (auto i = plugins.find(name); i != plugins.end()) {
            plugins.erase(i);
            return true;
        }
        return false;
    }

    virtual ~PluginManager() = default;

    virtual bool load(Manifest manifest) = 0;

    virtual bool unload(std::string_view name) = 0;

public:
    virtual bool enable(std::string_view name);

    virtual bool disable(std::string_view name);

    [[nodiscard]] std::string const& getType() const { return type; }

    [[nodiscard]] bool hasPlugin(std::string_view name) { return plugins.contains(name); }

    [[nodiscard]] std::weak_ptr<Plugin> getPlugin(std::string_view name) {
        std::lock_guard lock(mutex);
        if (auto i = plugins.find(name); i != plugins.end()) {
            return i->second;
        }
        return {};
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
    size_t unloadAll() {
        std::lock_guard lock(mutex);
        size_t          count{};
        for (auto& [name, plugin] : plugins) {
            count += unload(name);
        }
        return count;
    }
    size_t enableAll() {
        std::lock_guard lock(mutex);
        size_t          count{};
        for (auto& [name, plugin] : plugins) {
            count += enable(name);
        }
        return count;
    }
    size_t disableAll() {
        std::lock_guard lock(mutex);
        size_t          count{};
        for (auto& [name, plugin] : plugins) {
            count += disable(name);
        }
        return count;
    }
};
} // namespace ll::plugin
