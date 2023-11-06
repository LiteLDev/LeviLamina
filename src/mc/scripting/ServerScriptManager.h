#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ScriptEngine; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ServerScriptManager {
public:
    // prevent constructor by default
    ServerScriptManager& operator=(ServerScriptManager const&);
    ServerScriptManager(ServerScriptManager const&);
    ServerScriptManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ServerScriptManager@@UEAA@XZ
    virtual ~ServerScriptManager();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?onServerUpdateStart@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerUpdateStart(class ServerInstance&);

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: ?onServerThreadStarted@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerThreadStarted(class ServerInstance&);

    // vIndex: 10, symbol: ?onServerThreadStopped@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerThreadStopped(class ServerInstance&);

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol:
    // ?onEvent@ServerScriptManager@@UEAA?AW4EventResult@@AEBUServerInstanceRequestResourceReload@@@Z
    virtual ::EventResult onEvent(struct ServerInstanceRequestResourceReload const&);

    // vIndex: 13, symbol:
    // ?onEvent@?$EventListenerDispatcher@VServerInstanceEventListener@@@@MEAA?AW4EventResult@@AEBUServerInstanceNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ServerInstanceNotificationEvent const&);

    // symbol: ?onServerLevelInitialized@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@AEAVLevel@@@Z
    MCVAPI ::EventResult onServerLevelInitialized(class ServerInstance&, class Level&);

    // symbol:
    // ??0ServerScriptManager@@QEAA@UScriptSettings@@V?$NonOwnerPointer@VScheduler@@@Bedrock@@AEAVIMinecraftEventing@@_N@Z
    MCAPI ServerScriptManager(
        struct ScriptSettings,
        class Bedrock::NonOwnerPointer<class Scheduler>,
        class IMinecraftEventing&,
        bool
    );

    // symbol:
    // ?addModuleFilter@ServerScriptManager@@QEAAXAEBV?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@@Z
    MCAPI void
    addModuleFilter(std::function<
                    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)> const&);

    // symbol: ?getScriptEngine@ServerScriptManager@@QEAAAEAVScriptEngine@Scripting@@XZ
    MCAPI class Scripting::ScriptEngine& getScriptEngine();

    // symbol: ?getScriptSettings@ServerScriptManager@@QEAAAEAUScriptSettings@@XZ
    MCAPI struct ScriptSettings& getScriptSettings();

    // symbol: ?onMainThreadStartLeaveGame@ServerScriptManager@@QEAAXXZ
    MCAPI void onMainThreadStartLeaveGame();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_loadAndRunAllPlugins@ServerScriptManager@@AEAA_NAEAVServerInstance@@AEAVServerLevel@@@Z
    MCAPI bool _loadAndRunAllPlugins(class ServerInstance&, class ServerLevel&);

    // symbol: ?_registerEventHandlers@ServerScriptManager@@AEBAXAEAVLevel@@@Z
    MCAPI void _registerEventHandlers(class Level&) const;

    // symbol: ?_unregisterEventHandlers@ServerScriptManager@@AEBAXAEAVLevel@@@Z
    MCAPI void _unregisterEventHandlers(class Level&) const;

    // symbol: ?_sendWorldInitializeEvent@ServerScriptManager@@CAXAEAVServerLevel@@VWeakLifetimeScope@Scripting@@@Z
    MCAPI static void _sendWorldInitializeEvent(class ServerLevel&, class Scripting::WeakLifetimeScope);

    // NOLINTEND
};
