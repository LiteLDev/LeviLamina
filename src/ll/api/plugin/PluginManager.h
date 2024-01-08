#pragma once

#include <functional>
#include <memory>
#include <mutex>
#include <string_view>
#include <vector>

#include "ll/api/base/UnorderedStringMap.h"
#include "ll/api/plugin/Plugin.h"

namespace ll::plugin {
class PluginManagerRegistry;
class PluginManager {
    friend PluginManagerRegistry;

protected:
    struct Impl;
    std::unique_ptr<Impl> impl;

    LLNDAPI std::lock_guard<std::recursive_mutex> lock();

    LLNDAPI PluginManager(std::string type);

    LLAPI bool addPlugin(std::string_view name, std::shared_ptr<Plugin> const& plugin);

    LLAPI bool erasePlugin(std::string_view name);

    virtual ~PluginManager();

    virtual bool load(Manifest manifest) = 0;

    virtual bool unload(std::string_view name) = 0;

    virtual bool enable(std::string_view name);

    virtual bool disable(std::string_view name);

public:
    LLNDAPI std::string_view getType() const;

    LLNDAPI bool hasPlugin(std::string_view name);

    LLNDAPI std::weak_ptr<Plugin> getPlugin(std::string_view name);

    LLNDAPI size_t getPluginCount();

    LLAPI void forEachPlugin(std::function<bool(std::string_view name, Plugin&)> const& fn);
};
} // namespace ll::plugin
