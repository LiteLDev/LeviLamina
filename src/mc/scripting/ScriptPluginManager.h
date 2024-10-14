#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ScriptContextResult; }
// clang-format on

class ScriptPluginManager {
public:
    // prevent constructor by default
    ScriptPluginManager& operator=(ScriptPluginManager const&);
    ScriptPluginManager(ScriptPluginManager const&);
    ScriptPluginManager();

public:
    // NOLINTBEGIN
    MCAPI ScriptPluginManager(
        class Scripting::ScriptEngine&                scriptEngine,
        std::unique_ptr<class IScriptTelemetryLogger> logger
    );

    MCAPI class ScriptPluginManagerResult discoverPlugins(
        ::ResourceInformation::ResourceType         moduleType,
        class IScriptPluginSourceEnumerator&        pluginEnumerator,
        class ScriptPackConfigurationManager const& packConfigManager,
        class Scripting::DependencyLocator*         dependencyLocator,
        std::vector<std::function<
            bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>> const&
            moduleFilters
    );

    MCAPI std::vector<struct ScriptPluginStats> getPluginStats() const;

    MCAPI std::vector<std::unique_ptr<class ScriptPlugin>> const& getPlugins() const;

    MCAPI void releaseAll();

    MCAPI void releasePlugins();

    MCAPI class ScriptPluginManagerResult runAll(std::vector<std::string> excludeModuleIDs);

    MCAPI ~ScriptPluginManager();

    MCAPI static class PackCapability getPackCapability();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::vector<struct Scripting::ModuleDescriptor> _generateModuleDependencies(
        std::vector<struct ModuleIdentifier> const& moduleDeps,
        std::vector<struct PackIdVersion> const&    packDeps
    ) const;

    MCAPI void _reportContextResults(
        struct Scripting::ScriptContextResult const& contextResult,
        class ScriptPluginResult&                    pluginResult
    );

    MCAPI void _runPlugin(class ScriptPlugin& plugin, class ScriptPluginResult& pluginResult);

    MCAPI void _tryAddRuntime(
        class ScriptPlugin const&           plugin,
        class ScriptPluginResult&           pluginResult,
        class Scripting::DependencyLocator* dependencyLocator
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
