#pragma once

#include <string>
#include <unordered_map>

#include "ll/api/plugin/Plugin.h"

namespace ll::plugin::manager {

LLAPI bool registerPlugin(
    std::string const&                               name,
    std::string const&                               description,
    Version const&                                   version,
    std::map<std::string, std::string> const&        extraInfo,
    std::unordered_map<std::string, std::any> const& sharedData = {}
);

LLNDAPI optional_ref<Plugin> findPlugin(std::string const& name);
LLNDAPI std::unordered_map<std::string, Plugin>& getAllPlugins();

LLAPI bool unregisterPlugin(std::string const& name);

} // namespace ll::plugin
