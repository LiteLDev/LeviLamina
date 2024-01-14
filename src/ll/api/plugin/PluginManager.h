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

public:
    LLNDAPI std::string const& getType() const;

    LLNDAPI bool hasPlugin(std::string_view name);

    LLNDAPI std::shared_ptr<Plugin> getPlugin(std::string_view name);

    LLNDAPI size_t getPluginCount();

    LLAPI void forEachPlugin(std::function<bool(std::string_view name, Plugin&)> const& fn);

protected:
    struct Impl;
    std::unique_ptr<Impl> impl;

    LLNDAPI std::lock_guard<std::recursive_mutex> lock();

    LLNDAPI explicit PluginManager(std::string_view type);

    LLAPI bool addPlugin(std::string_view name, std::shared_ptr<Plugin> const& plugin);

    LLAPI bool erasePlugin(std::string_view name);

    virtual ~PluginManager();

    virtual bool load(Manifest manifest) = 0;

    virtual bool unload(std::string_view name) = 0;

    virtual bool enable(std::string_view name);

    virtual bool disable(std::string_view name);
};
} // namespace ll::plugin
