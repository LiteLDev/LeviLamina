#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PistonState.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
class ItemStackBase;
class Level;
class Player;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct BlockNotificationEvent;
struct ButtonPushEvent;
struct ExplosionStartedEvent;
struct LeverActionEvent;
struct NewBlockID;
struct PistonActionEvent;
struct PressurePlatePopEvent;
struct PressurePlatePushEvent;
struct TargetBlockHitEvent;
struct TripWireTripEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockEventListener {
public:
    // prevent constructor by default
    ScriptBlockEventListener& operator=(ScriptBlockEventListener const&);
    ScriptBlockEventListener(ScriptBlockEventListener const&);
    ScriptBlockEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockEventListener() = default;

    // vIndex: 1, symbol:
    // ?onBlockPlacedByPlayer@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
    virtual ::EventResult onBlockPlacedByPlayer(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    // vIndex: 2, symbol:
    // ?onBlockDestroyedByPlayer@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@AEBVItemStackBase@@3@Z
    virtual ::EventResult
    onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&, class ItemStackBase const&, class ItemStackBase const&);

    // vIndex: 6, symbol:
    // ?onBlockDestructionStarted@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@E@Z
    virtual ::EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, uchar);

    // vIndex: 8, symbol:
    // ?onBlockExploded@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVDimension@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual ::EventResult onBlockExploded(
        class Dimension&      dimension,
        class BlockPos const& blockPos,
        class Block const&,
        class Actor* source
    );

    // vIndex: 11, symbol:
    // ?onEvent@?$EventListenerDispatcher@VBlockEventListener@@@@MEAA?AW4EventResult@@AEBUBlockNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct BlockNotificationEvent const& event);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUExplosionStartedEvent@@@Z
    virtual ::EventResult onEvent(struct ExplosionStartedEvent const&);

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUTripWireTripEvent@@@Z
    virtual ::EventResult onEvent(struct TripWireTripEvent const&);

    // vIndex: 17, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUTargetBlockHitEvent@@@Z
    virtual ::EventResult onEvent(struct TargetBlockHitEvent const&);

    // vIndex: 18, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPressurePlatePopEvent@@@Z
    virtual ::EventResult onEvent(struct PressurePlatePopEvent const&);

    // vIndex: 19, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPressurePlatePushEvent@@@Z
    virtual ::EventResult onEvent(struct PressurePlatePushEvent const&);

    // vIndex: 20, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUButtonPushEvent@@@Z
    virtual ::EventResult onEvent(struct ButtonPushEvent const&);

    // vIndex: 21, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBULeverActionEvent@@@Z
    virtual ::EventResult onEvent(struct LeverActionEvent const&);

    // vIndex: 22, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPistonActionEvent@@@Z
    virtual ::EventResult onEvent(struct PistonActionEvent const&);

    // symbol:
    // ??0ScriptBlockEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI ScriptBlockEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
