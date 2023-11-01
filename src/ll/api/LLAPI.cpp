#include "ll/api/LLAPI.h"

#include <charconv>
#include <filesystem>
#include <string>
#include <utility>

#include "magic_enum.hpp"

#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"
#include "ll/core/PluginManager.h"
#include "ll/core/Version.h"

namespace ll {

using namespace ll::plugin;
using ll::string_utils::svtous;

bool registerPlugin(
    std::string const&                        name,
    std::string const&                        description,
    ll::Version const&                        version,
    std::map<std::string, std::string> const& extraInfo
) {
    return PluginManager::registerPlugin(name, description, version, extraInfo);
}

optional_ref<Plugin> findPlugin(std::string const& name) { return PluginManager::findPlugin(name); }

std::unordered_map<std::string, Plugin>& getAllPlugins() { return PluginManager::getAllPlugins(); }

Version getLoaderVersion() {
    auto v = Version{
        LL_VERSION_MAJOR,
        LL_VERSION_MINOR,
        LL_VERSION_PATCH,
    };
    v.build = LL_VERSION_TO_STRING(LL_VERSION_COMMIT_SHA);
#ifdef LL_VERSION_PRERELEASE
    v.preRelease = PreRelease{LL_VERSION_PRERELEASE};
#endif
    return v;
}

} // namespace ll
