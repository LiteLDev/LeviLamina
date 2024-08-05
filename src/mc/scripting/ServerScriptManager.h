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
    // vIndex: 0
    virtual ~ServerScriptManager();

    // vIndex: 1
    virtual ::EventResult onServerInitializeStart(class ServerInstance& instance);

    // vIndex: 2
    virtual ::EventResult onServerInitializeEnd(class ServerInstance& instance);

    // vIndex: 3
    virtual ::EventResult onServerMinecraftInitialized(
        class ServerInstance&                               instance,
        Bedrock::NotNullNonOwnerPtr<class Minecraft> const& minecraft
    );

    // vIndex: 4
    virtual ::EventResult onServerLevelInitialized(class ServerInstance&, class Level&);

    // vIndex: 5
    virtual ::EventResult onServerUpdateStart(class ServerInstance&);

    // vIndex: 6
    virtual ::EventResult onServerUpdateEnd(class ServerInstance& instance);

    // vIndex: 7
    virtual ::EventResult onServerSuspend(class ServerInstance& instance);

    // vIndex: 8
    virtual ::EventResult onServerResume(class ServerInstance& instance);

    // vIndex: 9
    virtual ::EventResult onServerThreadStarted(class ServerInstance& instance);

    // vIndex: 10
    virtual ::EventResult onServerThreadStopped(class ServerInstance& serverInstance);

    // vIndex: 11
    virtual ::EventResult onStartLeaveGame(class ServerInstance& instance);

    // vIndex: 12
    virtual ::EventResult onEvent(struct ServerInstanceRequestResourceReload const&);

    // vIndex: 13
    virtual ::EventResult onEvent(struct ServerInstanceNotificationEvent const& event);

    MCAPI ServerScriptManager(
        struct ScriptSettings,
        class Bedrock::NonOwnerPointer<class Scheduler>,
        class IMinecraftEventing&,
        class ItemRegistryRef
    );

    MCAPI void
    addModuleFilter(std::function<
                    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)> const&);

    MCAPI class ScriptBlockCustomComponentsRegistry& getBlockCustomComponentRegistry() const;

    MCAPI class Scripting::ScriptEngine& getScriptEngine();

    MCAPI struct ScriptSettings& getScriptSettings();

    MCAPI void onMainThreadStartLeaveGame();

    MCAPI void shouldInitializeEditorModules(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _loadAndRunAllPlugins(class ServerInstance&, class ServerLevel&, bool);

    MCAPI void _registerEventHandlers(class Level& level) const;

    MCAPI void _sendInitializeEvent(class ServerLevel& level) const;

    MCAPI void _unregisterEventHandlers(class Level& level) const;

    // NOLINTEND
};
