#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/modules/FilterResult.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSourceEnumerator;
class PackManifest;
class ScriptPlugin;
class ScriptPluginManagerResult;
class ScriptPluginResult;
class ScriptStat;
class ScriptStatCollector;
class ServerLevel;
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ScriptEngine; }
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
        ::ll::TypedStorage<8, 32, ::std::string>                  name;
        ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> scope;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Scripting::ScriptEngine&>                        mScriptEngine;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ScriptPlugin>>> mScriptPlugins;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>                   mCurrentRuntimeConditions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptStatCollector>>          mMemoryStatCollector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptStatCollector>>          mHandleCountStatCollector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptStatCollector>>          mSubscriberCountStatCollector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptStatCollector>>          mQuickJsStatCollector;
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

    MCAPI ::std::optional<::ScriptStat> _collectHandleCountStats(uint64, uint64, uint64);

    MCAPI ::std::optional<::ScriptStat> _collectMemoryStats(uint64, uint64, uint64);

    MCAPI ::std::optional<::ScriptStat> _collectQuickJsStats(uint64, uint64, uint64);

    MCAPI ::std::optional<::ScriptStat> _collectSubscriberCountStats(
        ::Bedrock::NotNullNonOwnerPtr<::ServerLevel>     serverLevel,
        ::gsl::not_null<::Scripting::DependencyLocator*> locator,
        uint64,
        uint64,
        uint64
    );

#ifdef LL_PLAT_C
    MCAPI void _createPluginContext(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult);
#endif

    MCAPI void _disableHandleCounter();

    MCAPI void _enableHandleCounter();

    MCAPI void _reloadHandleCounter(bool publisherEnabled);

#ifdef LL_PLAT_C
    MCAPI void _runPlugin(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult, ::Scripting::Privilege privilege);
#endif

    MCAPI ::Scripting::RuntimeStats collectRuntimeStats() const;

#ifdef LL_PLAT_C
    MCAPI ::ScriptPluginManagerResult createContextsForGroup(::PluginExecutionGroup group);
#endif

    MCAPI ::ScriptPluginManagerResult discoverPlugins(
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

    MCAPI void forEachRuntime(::std::function<void(::Scripting::IRuntime&)> func);

#ifdef LL_PLAT_C
    MCAPI ::ScriptPluginManagerResult runGroup(::PluginExecutionGroup group);
#endif

    MCAPI ~ScriptPluginManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
