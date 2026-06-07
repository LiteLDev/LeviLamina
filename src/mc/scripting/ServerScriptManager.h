#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/RegisterDiagnosticsStatsTypes.h"
#include "mc/scripting/ScriptSettings.h"
#include "mc/scripting/ServerScriptManagerEvents.h"
#include "mc/scripting/modules/FilterResult.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/ServerInstanceEventListener.h"

// auto generated forward declare list
// clang-format off
class AsyncJoinRegistrar;
class IMinecraftEventing;
class IScriptTelemetryLogger;
class ItemRegistryRef;
class LevelEventHandlerRegistrar;
class MinecraftCommands;
class MinecraftGameTest;
class PackManifest;
class Scheduler;
class ScriptAsyncJobCoordinator;
class ScriptClientDiagnosticsListener;
class ScriptContentLogEndPoint;
class ScriptDebugger;
class ScriptDebuggerWatchdog;
class ScriptDiagnostics;
class ScriptDiagnosticsPublishToFile;
class ScriptFormPromiseTracker;
class ScriptPackSettingsCache;
class ScriptPluginManager;
class ScriptPluginResult;
class ScriptServerNetworkHandlerReference;
class ScriptTickListener;
class ScriptWatchdog;
class ServerInstance;
class ServerLevel;
struct LevelStartLeaveGameEvent;
struct ServerInstanceRequestResourceReload;
namespace ScriptModuleMinecraft { class CustomCommandRegistry; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { class ScriptCustomDimensionRegistry; }
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IRuntime; }
namespace Scripting { class RegistryManager; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerScriptManager : public ::EventListenerDispatcher<::ServerInstanceEventListener>,
                            public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // ServerScriptManager inner types define
    enum class RuntimeVersion : int {
        V1 = 1,
        V2 = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::ServerScriptManagerEvents>                        mScriptStateEvents;
    ::ll::TypedStorage<8, 760, ::ScriptSettings>                                   mSettings;
    ::ll::TypedStorage<8, 8, ::ServerLevel&>                                       mServerLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptPackSettingsCache>>        mPackSettingsCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Scheduler>>             mServerScheduler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>>           mCerealContext;
    ::ll::TypedStorage<1, 1, ::RegisterDiagnosticsStatsTypes>                      mRegisterDiagnosticsStatsTypes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IScriptTelemetryLogger>>          mTelemetryLogger;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptClientDiagnosticsListener>> mClientDiagnosticsListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelEventHandlerRegistrar>>      mLevelEventHandlerRegistrar;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::CustomCommandRegistry>> mCustomCommandRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptCustomComponentParameterCache>>
        mCustomComponentParameterCache;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>>
        mBlockCustomComponentsRegistry;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry>>
        mItemCustomComponentRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry>>
        mCustomSpawnRulesRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptCustomDimensionRegistry>>
        mCustomDimensionRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptGlobalEventListeners>>
                                                                                       mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::ScriptEngine>>             mScriptEngine;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptPluginManager>>                 mScriptPluginManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptAsyncJobCoordinator>>           mAsyncJobCoordinator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptFormPromiseTracker>>            mFormPromiseTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDebuggerWatchdog>>              mScriptDebuggerWatchdog;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDebugger>>                      mScriptDebugger;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDiagnosticsPublishToFile>>      mDiagnosticsPublishToFile;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDiagnostics>>                   mScriptDiagnostics;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptTickListener>>                  mScriptTickListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptContentLogEndPoint>>            mScriptContentLogEndPoint;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptWatchdog>>                      mScriptWatchdog;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AsyncJoinRegistrar>>                  mAsyncJoinRegistrar;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::DependencyLocator>>        mDependencyLocator;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Scripting::IRuntime>>> mSharedRuntimes;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<::ScriptModuleFilters::FilterResult(
            ::PackManifest const&,
            ::Scripting::ModuleDescriptor const&,
            ::Scripting::ModuleDescriptor const&,
            ::ScriptPluginResult&
        )>>>
                                                                                       mModuleFilters;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptServerNetworkHandlerReference>> mServerNetworkHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScriptManager& operator=(ServerScriptManager const&);
    ServerScriptManager(ServerScriptManager const&);
    ServerScriptManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerScriptManager() /*override*/;

    virtual ::EventResult onServerUpdateEnd(::ServerInstance& instance) /*override*/;

    virtual ::EventResult onServerThreadStarted(::ServerInstance& instance) /*override*/;

    virtual ::EventResult onEvent(::ServerInstanceRequestResourceReload const& reloadEvent) /*override*/;

    virtual ::EventResult onEvent(::LevelStartLeaveGameEvent const& levelStartLeaveGameEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerScriptManager(
        ::ScriptSettings&&                                         settings,
        ::ServerLevel&                                             serverLevel,
        ::std::shared_ptr<::ScriptPackSettingsCache>               packSettingsCache,
        ::Bedrock::NonOwnerPointer<::Scheduler>                    serverScheduler,
        ::MinecraftCommands&                                       commands,
        ::IMinecraftEventing&                                      eventing,
        ::ItemRegistryRef                                          itemRegistry,
        ::ServerInstance&                                          server,
        ::Scripting::RegistryManager&                              registry,
        ::std::unique_ptr<::AsyncJoinRegistrar>&&                  asyncJoinRegistrar,
        ::std::unique_ptr<::ScriptServerNetworkHandlerReference>&& serverNetworkHandler
    );

    MCAPI void _initModules(::ServerInstance& server, ::ServerLevel& serverLevel);

    MCAPI void _loadPlugins(::ServerLevel& serverLevel, bool fromReload);

    MCAPI void _onPreReload(
        ::ServerInstance&                   serverInstance,
        ::ServerLevel&                      level,
        ::optional_ref<::MinecraftGameTest> optionalGameTest
    );

    MCAPI void _runPlugins(::PluginExecutionGroup exeGroup, ::ServerInstance& serverInstance);

    MCAPI void _sendWorldInitializeEvent(::ServerLevel& level) const;

    MCAPI void addModuleFilter(
        ::std::function<::ScriptModuleFilters::FilterResult(
            ::PackManifest const&,
            ::Scripting::ModuleDescriptor const&,
            ::Scripting::ModuleDescriptor const&,
            ::ScriptPluginResult&
        )> moduleFilter
    );

    MCAPI ::StackRefResult<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>
    getBlockCustomComponentRegistry() const;

#ifdef LL_PLAT_S
    MCFOLD ::Scripting::ScriptEngine& getScriptEngine();

    MCFOLD ::ScriptSettings& getScriptSettings();
#endif

#ifdef LL_PLAT_C
    MCAPI void onMainThreadStartLeaveGame();
#endif

    MCAPI void setBlockCustomComponentCerealContext(::cereal::ReflectionCtx& ctx);

    MCAPI void setItemCustomComponentCerealContext(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _sendScriptModuleShutdownEvent(::ServerLevel& level, ::std::optional<::Scripting::WeakLifetimeScope> scope);

    MCAPI static void _sendScriptModuleStartupEventImpl(
        ::ServerLevel&                                                level,
        ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry&  itemCustomComponentRegistry,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry& blockCustomComponentRegistry,
        ::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry&      customSpawnRulesRegistry,
        ::ScriptModuleMinecraft::CustomCommandRegistry&               customCommandRegistry,
        ::ScriptModuleMinecraft::ScriptCustomDimensionRegistry&       customDimensionRegistry,
        ::std::optional<::Scripting::WeakLifetimeScope>               scope
    );

    MCAPI static void _sendWorldInitializeEventImpl(
        ::ServerLevel&                                                level,
        ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry&  itemCustomComponentRegistry,
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry& blockCustomComponentRegistry,
        ::Scripting::WeakLifetimeScope                                scope,
        bool                                                          lastEventInList
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ScriptSettings&&                                         settings,
        ::ServerLevel&                                             serverLevel,
        ::std::shared_ptr<::ScriptPackSettingsCache>               packSettingsCache,
        ::Bedrock::NonOwnerPointer<::Scheduler>                    serverScheduler,
        ::MinecraftCommands&                                       commands,
        ::IMinecraftEventing&                                      eventing,
        ::ItemRegistryRef                                          itemRegistry,
        ::ServerInstance&                                          server,
        ::Scripting::RegistryManager&                              registry,
        ::std::unique_ptr<::AsyncJoinRegistrar>&&                  asyncJoinRegistrar,
        ::std::unique_ptr<::ScriptServerNetworkHandlerReference>&& serverNetworkHandler
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onServerUpdateEnd(::ServerInstance& instance);

    MCAPI ::EventResult $onServerThreadStarted(::ServerInstance& instance);

    MCAPI ::EventResult $onEvent(::ServerInstanceRequestResourceReload const& reloadEvent);

    MCAPI ::EventResult $onEvent(::LevelStartLeaveGameEvent const& levelStartLeaveGameEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventListenerDispatcherLevelEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherServerInstanceEventListener();
    // NOLINTEND
};
