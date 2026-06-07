#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/scripting/reflection/Privilege.h"
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/modules/FilterResult.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class IScriptPluginSourceEnumerator;
class PackCapability;
class PackManifest;
class ScriptPlugin;
class ScriptPluginManagerResult;
class ScriptPluginResult;
namespace Scripting { class IRuntime; }
namespace Scripting { class RuntimeConditions; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ContextId; }
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
        ::ll::UntypedStorage<8, 32> mUnkf6e39d;
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
    ::ll::UntypedStorage<8, 24> mUnk6c8a4d;
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
    MCNAPI ScriptPluginManager(::BaseGameVersion const& baseGameVersion, ::Scripting::ScriptEngine& scriptEngine);

    MCNAPI void _addContextResultsToPluginResults(
        ::Scripting::ScriptContextResult const& contextResult,
        ::ScriptPluginResult&                   pluginResult
    );

    MCNAPI void _createPluginContext(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult);

    MCNAPI void
    _runPlugin(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult, ::Scripting::Privilege privilege);

    MCNAPI ::Scripting::RuntimeStats collectRuntimeStats() const;

#ifdef LL_PLAT_C
    MCNAPI ::ScriptPluginManagerResult createContextAll();
#endif

    MCNAPI ::ScriptPluginManagerResult createContextsForGroup(::PluginExecutionGroup group);

    MCNAPI ::ScriptPluginManagerResult discoverPlugins(
        ::ResourceInformation::ResourceType moduleType,
        ::IScriptPluginSourceEnumerator&    pluginEnumerator,
        ::std::vector<::std::function<::ScriptModuleFilters::FilterResult(
            ::PackManifest const&,
            ::Scripting::ModuleDescriptor const&,
            ::Scripting::ModuleDescriptor const&,
            ::ScriptPluginResult&
        )>> const&                          moduleFilters,
        ::std::vector<::mce::UUID>          excludeModuleIDs,
        ::std::function<::PluginExecutionGroup(::std::vector<::Scripting::ModuleDescriptor> const&)>&&
            pluginExecutionGroupSelector
    );

    MCNAPI void forEachPlugin(::std::function<void(::ScriptPlugin&)> func);

    MCNAPI void forEachRuntime(::std::function<void(::Scripting::IRuntime&)> func);

    MCNAPI ::ScriptPlugin* getPluginByContextId(::Scripting::ContextId const& contextId);

    MCNAPI ::ScriptPlugin* getPluginByModuleUuid(::mce::UUID const& moduleUUID);

    MCNAPI ::std::vector<::Scripting::ModuleDescriptor> getPluginModuleDescriptors() const;

    MCNAPI ::std::vector<::ScriptPluginManager::PackNameAndWeakScope> getPluginScopes() const;

    MCNAPI ::std::vector<::std::unique_ptr<::ScriptPlugin>>& getPlugins();

    MCNAPI void releaseAll();

#ifdef LL_PLAT_C
    MCNAPI ::ScriptPluginManagerResult runAll();
#endif

    MCNAPI ::ScriptPluginManagerResult runGroup(::PluginExecutionGroup group);

    MCNAPI void setCurrentRuntimeConditions(::Scripting::RuntimeConditions const& currentRuntimeConditions);

    MCNAPI ~ScriptPluginManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackCapability getPackCapability();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseGameVersion const& baseGameVersion, ::Scripting::ScriptEngine& scriptEngine);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
