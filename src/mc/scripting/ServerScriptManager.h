#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // prevent constructor by default
    ServerScriptManager& operator=(ServerScriptManager const&);
    ServerScriptManager(ServerScriptManager const&);
    ServerScriptManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ServerScriptManager@@UEAA@XZ
    virtual ~ServerScriptManager();

    // vIndex: 4, symbol:
    // ?onServerLevelInitialized@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@AEAVLevel@@@Z
    virtual ::EventResult onServerLevelInitialized(class ServerInstance&, class Level&);

    // vIndex: 5, symbol: ?onServerUpdateStart@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerUpdateStart(class ServerInstance&);

    // vIndex: 9, symbol: ?onServerThreadStarted@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerThreadStarted(class ServerInstance& instance);

    // vIndex: 10, symbol: ?onServerThreadStopped@ServerScriptManager@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    virtual ::EventResult onServerThreadStopped(class ServerInstance& serverInstance);

    // vIndex: 12, symbol:
    // ?onEvent@?$EventListenerDispatcher@VServerInstanceEventListener@@@@MEAA?AW4EventResult@@AEBUServerInstanceNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ServerInstanceNotificationEvent const& event);

    // vIndex: 13, symbol:
    // ?onEvent@ServerScriptManager@@UEAA?AW4EventResult@@AEBUServerInstanceRequestResourceReload@@@Z
    virtual ::EventResult onEvent(struct ServerInstanceRequestResourceReload const&);

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
