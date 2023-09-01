#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
namespace ScriptModuleMinecraft { class IScriptAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct LevelNotificationEvent;
struct LevelStartLeaveGameEvent;
struct ScriptingInitializeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLevelEventListener {
public:
    // prevent constructor by default
    ScriptLevelEventListener& operator=(ScriptLevelEventListener const&) = delete;
    ScriptLevelEventListener(ScriptLevelEventListener const&)            = delete;
    ScriptLevelEventListener()                                           = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol:
    // ?onLevelAddedPlayer@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    virtual ::EventResult onLevelAddedPlayer(class Level&, class Player&);

    // vIndex: 3, symbol:
    // ?onLevelRemovedPlayer@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    virtual ::EventResult onLevelRemovedPlayer(class Level&, class Player&);

    // vIndex: 4, symbol:
    // ?onLevelRemovedActor@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVLevel@@AEAVActor@@@Z
    virtual ::EventResult onLevelRemovedActor(class Level&, class Actor&);

    // vIndex: 5, symbol:
    // ?onLevelTick@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    virtual ::EventResult onLevelTick(class Level&);

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol:
    // ?onLevelWeatherChange@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
    virtual ::EventResult onLevelWeatherChange(std::string const&, bool, bool);

    // vIndex: 8, symbol:
    // ?onEvent@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBULevelStartLeaveGameEvent@@@Z
    virtual ::EventResult onEvent(struct LevelStartLeaveGameEvent const&);

    // vIndex: 9, symbol:
    // ?onEvent@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUScriptingInitializeEvent@@@Z
    virtual ::EventResult onEvent(struct ScriptingInitializeEvent const&);

    // vIndex: 10, symbol:
    // ?onEvent@?$EventListenerDispatcher@VLevelEventListener@@@@MEAA?AW4EventResult@@AEBULevelNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct LevelNotificationEvent const&);

    // symbol:
    // ??0ScriptLevelEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptAfterEvents@ScriptModuleMinecraft@@@3@_N@Z
    MCAPI ScriptLevelEventListener(
        class Scripting::WeakLifetimeScope const&,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptAfterEvents>,
        bool
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
