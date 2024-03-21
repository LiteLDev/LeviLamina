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
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct LevelGameRuleChangeEvent;
struct LevelNotificationEvent;
struct LevelStartLeaveGameEvent;
struct ScriptingInitializeEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLevelEventListener {
public:
    // prevent constructor by default
    ScriptLevelEventListener& operator=(ScriptLevelEventListener const&);
    ScriptLevelEventListener(ScriptLevelEventListener const&);
    ScriptLevelEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptLevelEventListener() = default;

    // vIndex: 1, symbol: ?onLevelInitialized@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    virtual ::EventResult onLevelInitialized(class Level& level);

    // vIndex: 2, symbol:
    // ?onLevelAddedPlayer@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    virtual ::EventResult onLevelAddedPlayer(class Level&, class Player& player);

    // vIndex: 3, symbol:
    // ?onLevelRemovedPlayer@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    virtual ::EventResult onLevelRemovedPlayer(class Level&, class Player& player);

    // vIndex: 4, symbol:
    // ?onLevelRemovedActor@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVLevel@@AEAVActor@@@Z
    virtual ::EventResult onLevelRemovedActor(class Level&, class Actor& actor);

    // vIndex: 5, symbol:
    // ?onLevelTick@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    virtual ::EventResult onLevelTick(class Level&);

    // vIndex: 6, symbol: ?onLevelTickStart@LevelEventListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
    virtual ::EventResult onLevelTickStart(class Level&);

    // vIndex: 7, symbol:
    // ?onLevelWeatherChange@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N111@Z
    virtual ::EventResult onLevelWeatherChange(std::string const&, bool, bool, bool, bool);

    // vIndex: 8, symbol:
    // ?onEvent@?$EventListenerDispatcher@VLevelEventListener@@@@MEAA?AW4EventResult@@AEBULevelNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct LevelNotificationEvent const& event);

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol:
    // ?onEvent@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBULevelStartLeaveGameEvent@@@Z
    virtual ::EventResult onEvent(struct LevelStartLeaveGameEvent const&);

    // vIndex: 11, symbol:
    // ?onEvent@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBULevelGameRuleChangeEvent@@@Z
    virtual ::EventResult onEvent(struct LevelGameRuleChangeEvent const&);

    // vIndex: 12, symbol:
    // ?onEvent@ScriptLevelEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUScriptingInitializeEvent@@@Z
    virtual ::EventResult onEvent(struct ScriptingInitializeEvent const&);

    // symbol:
    // ??0ScriptLevelEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@_N@Z
    MCAPI ScriptLevelEventListener(
        class Scripting::WeakLifetimeScope const&,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents>,
        bool
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
