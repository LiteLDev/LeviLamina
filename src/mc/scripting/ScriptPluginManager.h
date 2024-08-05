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
    MCAPI ScriptPluginManager(class Scripting::ScriptEngine&, std::unique_ptr<class IScriptTelemetryLogger>);

    MCAPI class ScriptPluginManagerResult
    discoverPlugins(::ResourceInformation::ResourceType, class IScriptPluginSourceEnumerator&, class ScriptPackConfigurationManager const&, class Scripting::DependencyLocator*, std::vector<std::function<bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>> const&);

    MCAPI std::vector<struct ScriptPluginStats> getPluginStats() const;

    MCAPI std::vector<std::unique_ptr<class ScriptPlugin>> const& getPlugins() const;

    MCAPI void releaseAll();

    MCAPI void releasePlugins();

    MCAPI class ScriptPluginManagerResult runAll(std::vector<std::string>);

    MCAPI ~ScriptPluginManager();

    MCAPI static class PackCapability getPackCapability();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::vector<struct Scripting::ModuleDescriptor>
    _generateModuleDependencies(std::vector<struct ModuleIdentifier> const&, std::vector<struct PackIdVersion> const&)
        const;

    MCAPI void _reportContextResults(struct Scripting::ScriptContextResult const&, class ScriptPluginResult&);

    MCAPI void _runPlugin(class ScriptPlugin&, class ScriptPluginResult&);

    MCAPI void
    _tryAddRuntime(class ScriptPlugin const&, class ScriptPluginResult&, class Scripting::DependencyLocator*);

    // NOLINTEND
};
