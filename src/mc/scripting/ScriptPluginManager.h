#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/modules/FilterResult.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSourceEnumerator;
class PackManifest;
class ScriptPlugin;
class ScriptPluginManagerResult;
class ScriptPluginResult;
class ScriptStat;
class ServerLevel;
namespace Scripting { class DependencyLocator; }
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
        ::ll::UntypedStorage<8, 32> mUnkf6e39d;
        ::ll::UntypedStorage<8, 16> mUnk7a40bc;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackNameAndWeakScope& operator=(PackNameAndWeakScope const&);
        PackNameAndWeakScope(PackNameAndWeakScope const&);
        PackNameAndWeakScope();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke51876;
    ::ll::UntypedStorage<8, 8>  mUnk49bd90;
    ::ll::UntypedStorage<8, 24> mUnk6c8a4d;
    ::ll::UntypedStorage<8, 24> mUnk174121;
    ::ll::UntypedStorage<8, 8>  mUnke00494;
    ::ll::UntypedStorage<8, 8>  mUnk904f06;
    ::ll::UntypedStorage<8, 8>  mUnk221d43;
    ::ll::UntypedStorage<8, 8>  mUnk117c4d;
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

    MCNAPI ::std::optional<::ScriptStat> _collectHandleCountStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat> _collectMemoryStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat> _collectQuickJsStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat> _collectSubscriberCountStats(
        ::Bedrock::NotNullNonOwnerPtr<::ServerLevel>     serverLevel,
        ::gsl::not_null<::Scripting::DependencyLocator*> locator,
        uint64,
        uint64,
        uint64
    );

#ifdef LL_PLAT_C
    MCNAPI void _createPluginContext(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult);
#endif

    MCNAPI void _disableHandleCounter();

    MCNAPI void _enableHandleCounter();

    MCNAPI void _reloadHandleCounter(bool publisherEnabled);

#ifdef LL_PLAT_C
    MCNAPI void
    _runPlugin(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult, ::Scripting::Privilege privilege);
#endif

    MCNAPI ::Scripting::RuntimeStats collectRuntimeStats() const;

#ifdef LL_PLAT_C
    MCNAPI ::ScriptPluginManagerResult createContextsForGroup(::PluginExecutionGroup group);
#endif

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

    MCNAPI void forEachRuntime(::std::function<void(::Scripting::IRuntime&)> func);

#ifdef LL_PLAT_C
    MCNAPI ::ScriptPluginManagerResult runGroup(::PluginExecutionGroup group);
#endif

    MCNAPI ~ScriptPluginManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
