#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/Scheduler.h"
#include "mc/external/scripting/DependencyLocator.h"
#include "mc/external/scripting/ScriptSettings.h"
#include "mc/scripting/ScriptFormPromiseTracker.h"
#include "mc/scripting/ScriptPluginManager.h"
#include "mc/scripting/ScriptPluginResult.h"
#include "mc/scripting/ScriptPrintLogger.h"
#include "mc/scripting/ScriptTickListener.h"
#include "mc/scripting/debugger/ScriptDebugger.h"
#include "mc/scripting/debugger/ScriptDebuggerWatchdog.h"


// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ServerScriptManager {
public:
    uchar                                     filler[640];
    std::unique_ptr<ScriptFormPromiseTracker> mFormPromiseTracker;
    uchar                                     filler1[96];

public:
    // prevent constructor by default
    ServerScriptManager& operator=(ServerScriptManager const&);
    ServerScriptManager(ServerScriptManager const&);
    ServerScriptManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ServerScriptManager@@UEAA@XZ
    virtual ~ServerScriptManager();

    // vIndex: 1, symbol:
    // ?onServerInitializeStart@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerInitializeStart(class ServerInstance& instance);

    // vIndex: 2, symbol:
    // ?onServerInitializeEnd@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerInitializeEnd(class ServerInstance& instance);

    // vIndex: 3, symbol:
    // ?onServerMinecraftInitialized@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@AEBV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@@Z
    virtual ::EventResult onServerMinecraftInitialized(
        class ServerInstance&                               instance,
        Bedrock::NotNullNonOwnerPtr<class Minecraft> const& minecraft
    );

    // vIndex: 4, symbol:
    // ?onServerLevelInitialized@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@AEAVLevel@@@Z
    virtual ::EventResult onServerLevelInitialized(class ServerInstance&, class Level&);

    // vIndex: 5, symbol: ?onServerUpdateStart@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerUpdateStart(class ServerInstance&);

    // vIndex: 6, symbol: ?onServerUpdateEnd@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerUpdateEnd(class ServerInstance& instance);

    // vIndex: 7, symbol: ?onServerSuspend@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerSuspend(class ServerInstance& instance);

    // vIndex: 8, symbol: ?onServerResume@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerResume(class ServerInstance& instance);

    // vIndex: 9, symbol: ?onServerThreadStarted@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerThreadStarted(class ServerInstance& instance);

    // vIndex: 10, symbol: ?onServerThreadStopped@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerThreadStopped(class ServerInstance& serverInstance);

    // vIndex: 11, symbol: ?onStartLeaveGame@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onStartLeaveGame(class ServerInstance& instance);

    // vIndex: 12, symbol:
    // ?onEvent@ServerScriptManager@@UEAA?AW4EventResult@@AEBUServerInstanceRequestResourceReload@@@Z
    virtual ::EventResult onEvent(struct ServerInstanceRequestResourceReload const&);

    // vIndex: 13, symbol:
    // ?onEvent@?$EventListenerDispatcher@VServerInstanceEventListener@@@@MEAA?AW4EventResult@@AEBUServerInstanceNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ServerInstanceNotificationEvent const& event);

    // symbol:
    // ??0ServerScriptManager@@QEAA@UScriptSettings@@V?$NonOwnerPointer@VScheduler@@@Bedrock@@AEAVIMinecraftEventing@@VItemRegistryRef@@@Z
    MCAPI ServerScriptManager(
        struct ScriptSettings,
        class Bedrock::NonOwnerPointer<class Scheduler>,
        class IMinecraftEventing&,
        class ItemRegistryRef
    );

    // symbol:
    // ?addModuleFilter@ServerScriptManager@@QEAAXAEBV?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@@Z
    MCAPI void
    addModuleFilter(std::function<
                    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)> const&);

    // symbol: ?getBlockCustomComponentRegistry@ServerScriptManager@@QEBAAEAVScriptBlockCustomComponentsRegistry@@XZ
    MCAPI class ScriptBlockCustomComponentsRegistry& getBlockCustomComponentRegistry() const;

    // symbol: ?getScriptEngine@ServerScriptManager@@QEAAAEAVScriptEngine@Scripting@@XZ
    MCAPI class Scripting::ScriptEngine& getScriptEngine();

    // symbol: ?getScriptSettings@ServerScriptManager@@QEAAAEAUScriptSettings@@XZ
    MCAPI struct ScriptSettings& getScriptSettings();

    // symbol: ?onMainThreadStartLeaveGame@ServerScriptManager@@QEAAXXZ
    MCAPI void onMainThreadStartLeaveGame();

    // symbol: ?shouldInitializeEditorModules@ServerScriptManager@@QEAAX_N@Z
    MCAPI void shouldInitializeEditorModules(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_loadAndRunAllPlugins@ServerScriptManager@@AEAA_NAEAVServerInstance@@AEAVServerLevel@@_N@Z
    MCAPI bool _loadAndRunAllPlugins(class ServerInstance&, class ServerLevel&, bool);

    // symbol: ?_registerEventHandlers@ServerScriptManager@@AEBAXAEAVLevel@@@Z
    MCAPI void _registerEventHandlers(class Level& level) const;

    // symbol: ?_sendInitializeEvent@ServerScriptManager@@AEBAXAEAVServerLevel@@@Z
    MCAPI void _sendInitializeEvent(class ServerLevel& level) const;

    // symbol: ?_unregisterEventHandlers@ServerScriptManager@@AEBAXAEAVLevel@@@Z
    MCAPI void _unregisterEventHandlers(class Level& level) const;

    // NOLINTEND
};
