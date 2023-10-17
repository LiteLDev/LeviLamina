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
        HMODULE                            handle,
        std::string const&                 name,
        std::string const&                 desc,
        ll::Version const&                 version,
        std::map<std::string, std::string> others
    );

    LLNDAPI static ll::Plugin* getPlugin(HMODULE handle);
    LLNDAPI static ll::Plugin* getPlugin(std::string const& name, bool includeScriptPlugin = true);
    LLAPI static bool        hasPlugin(std::string const& name, bool includeScriptPlugin = true);
    LLNDAPI static std::unordered_map<std::string, ll::Plugin*> getAllPlugins(bool includeScriptPlugin = true);

    LLAPI static bool unRegisterPlugin(std::string const& name);
};

} // namespace ll
