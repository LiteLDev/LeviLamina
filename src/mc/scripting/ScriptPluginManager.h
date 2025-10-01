#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/scripting/reflection/Privilege.h"
#include "mc/scripting/PluginExecutionGroup.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSourceEnumerator;
class PackManifest;
class ScriptPackConfigurationManager;
class ScriptPlugin;
class ScriptPluginManagerResult;
class ScriptPluginResult;
struct ModuleIdentifier;
struct PackIdVersion;
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
        MCNAPI ~PackNameAndWeakScope();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke51876;
    ::ll::UntypedStorage<8, 8>  mUnk49bd90;
    ::ll::UntypedStorage<8, 24> mUnk41c329;
    ::ll::UntypedStorage<8, 24> mUnk174121;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginManager& operator=(ScriptPluginManager const&);
    ScriptPluginManager(ScriptPluginManager const&);
    ScriptPluginManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addContextResultsToPluginResults(
        ::Scripting::ScriptContextResult const& contextResult,
        ::ScriptPluginResult&                   pluginResult
    );

    MCNAPI void _createPluginContext(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult);

    MCNAPI ::std::vector<::Scripting::ModuleDescriptor> _generateModuleDependencies(
        ::std::vector<::ModuleIdentifier> const& moduleDeps,
        ::std::vector<::PackIdVersion> const&    packDeps
    ) const;

    MCNAPI void
    _runPlugin(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult, ::Scripting::Privilege privilege);

    MCNAPI ::Scripting::RuntimeStats collectRuntimeStats() const;

    MCNAPI ::ScriptPluginManagerResult createContextsForGroup(::PluginExecutionGroup group);

    MCNAPI ::ScriptPluginManagerResult discoverPlugins(
        ::ResourceInformation::ResourceType     moduleType,
        ::IScriptPluginSourceEnumerator&        pluginEnumerator,
        ::ScriptPackConfigurationManager const& packConfigManager,
        ::std::vector<::std::function<bool(
            ::PackManifest const&,
            ::Scripting::ModuleDescriptor const&,
            ::Scripting::ModuleDescriptor const&,
            ::ScriptPluginResult&
        )>> const&                              moduleFilters,
        ::std::vector<::mce::UUID>              excludeModuleIDs,
        ::std::function<::PluginExecutionGroup(::std::vector<::Scripting::ModuleDescriptor> const&)>&&
            pluginExecutionGroupSelector
    );

    MCNAPI void forEachPlugin(::std::function<void(::ScriptPlugin&)> func);

    MCNAPI void forEachRuntime(::std::function<void(::Scripting::IRuntime&)> func);

    MCNAPI ::std::vector<::ScriptPluginManager::PackNameAndWeakScope> getPluginScopes() const;

    MCNAPI ::ScriptPluginManagerResult runGroup(::PluginExecutionGroup group);

    MCNAPI ~ScriptPluginManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
