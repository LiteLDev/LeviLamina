#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/scripting/PluginExecutionGroup.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSourceEnumerator;
class PackCapability;
class PackManifest;
class ScriptPackConfigurationManager;
class ScriptPlugin;
class ScriptPluginManagerResult;
class ScriptPluginResult;
struct ModuleIdentifier;
struct PackIdVersion;
struct ScriptPluginStats;
namespace Scripting { class IRuntime; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct ScriptContextResult; }
namespace mce { class UUID; }
// clang-format on

class ScriptPluginManager {
public:
    // ScriptPluginManager inner types declare
    // clang-format off
    struct PackNameAndWeakScope;
    // clang-format on

    // ScriptPluginManager inner types define
    struct PackNameAndWeakScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk663d7b;
        ::ll::UntypedStorage<8, 16> mUnk7a40bc;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackNameAndWeakScope& operator=(PackNameAndWeakScope const&);
        PackNameAndWeakScope(PackNameAndWeakScope const&);
        PackNameAndWeakScope();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PackNameAndWeakScope();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnke51876;
    ::ll::UntypedStorage<8, 8>   mUnk49bd90;
    ::ll::UntypedStorage<8, 8>   mUnk98aafc;
    ::ll::UntypedStorage<8, 24>  mUnk41c329;
    ::ll::UntypedStorage<8, 24>  mUnk7a19bb;
    ::ll::UntypedStorage<8, 24>  mUnk174121;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginManager& operator=(ScriptPluginManager const&);
    ScriptPluginManager(ScriptPluginManager const&);
    ScriptPluginManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addContextResultsToPluginResults(
        ::Scripting::ScriptContextResult const& contextResult,
        ::ScriptPluginResult&                   pluginResult
    );

    MCAPI void _createPluginContext(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult);

    MCAPI ::std::vector<::Scripting::ModuleDescriptor> _generateModuleDependencies(
        ::std::vector<::ModuleIdentifier> const& moduleDeps,
        ::std::vector<::PackIdVersion> const&    packDeps
    ) const;

    MCAPI void _runPlugin(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult, ::Scripting::Privilege privilege);

    MCAPI ::Scripting::RuntimeStats computeRuntimeStats() const;

    MCAPI ::ScriptPluginManagerResult createContextsForGroup(::PluginExecutionGroup group);

    MCAPI ::ScriptPluginManagerResult discoverPlugins(
        ::ResourceInformation::ResourceType     moduleType,
        ::IScriptPluginSourceEnumerator&        pluginEnumerator,
        ::ScriptPackConfigurationManager const& packConfigManager,
        ::std::vector<::std::function<
            bool(::PackManifest const&, ::Scripting::ModuleDescriptor const&, ::Scripting::ModuleDescriptor const&, ::ScriptPluginResult&)>> const&
                                     moduleFilters,
        ::std::vector<::std::string> excludeModuleIDs,
        ::std::function<::PluginExecutionGroup(::std::vector<::Scripting::ModuleDescriptor> const&)>&&
            pluginExecutionGroupSelector
    );

    MCAPI void forEachRuntime(::std::function<void(::Scripting::IRuntime&)> func);

    MCAPI ::ScriptPlugin* getPluginByModuleUuid(::mce::UUID const& moduleUUID);

    MCAPI ::std::vector<::ScriptPluginManager::PackNameAndWeakScope> getPluginScopes() const;

    MCAPI ::std::vector<::ScriptPluginStats> getPluginStats() const;

    MCAPI ::std::vector<::ScriptPluginStats> getPluginStatsByIdType(uint id) const;

    MCFOLD ::std::vector<::std::unique_ptr<::ScriptPlugin>>& getPlugins();

    MCAPI void releaseAll();

    MCAPI ::ScriptPluginManagerResult runGroup(::PluginExecutionGroup group);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PackCapability getPackCapability();
    // NOLINTEND
};
