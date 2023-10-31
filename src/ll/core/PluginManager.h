#pragma once
#include "ll/api/base/Global.h"
#include <string>
#include <unordered_map>

namespace ll {

struct Plugin;
struct Version;

class PluginManager {

public:
    LLAPI static bool registerPlugin(
        HMODULE                                          handle,
        std::string const&                               name,
        std::string const&                               description,
        ll::Version const&                               version,
        std::map<std::string, std::string> const&        extraInfo,
        std::unordered_map<std::string, std::any> const& sharedData = {}
    );

    LLNDAPI static optional_ref<Plugin>                     findPlugin(HMODULE handle);
    LLNDAPI static optional_ref<Plugin>                     findPlugin(std::string const& name);
    LLNDAPI static std::unordered_map<std::string, Plugin>& getAllPlugins();

    LLAPI static bool unregisterPlugin(std::string const& name);
};

} // namespace ll
