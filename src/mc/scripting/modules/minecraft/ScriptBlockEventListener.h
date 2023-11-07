#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
class ItemStackBase;
class Player;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct BlockNotificationEvent;
struct ButtonPushEvent;
struct ExplosionStartedEvent;
struct LeverActionEvent;
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
    // vIndex: 0, symbol: ??1ScriptBlockEventListener@@@UEAA@XZ
    virtual ~ScriptBlockEventListener();

    // vIndex: 1, symbol:
    // ?onBlockPlacedByPlayer@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
    virtual ::EventResult onBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);

    // vIndex: 2, symbol:
    // ?onBlockDestroyedByPlayer@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@AEBVItemStackBase@@3@Z
    virtual ::EventResult
    onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&, class ItemStackBase const&, class ItemStackBase const&);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol:
    // ?onBlockDestructionStarted@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@E@Z
    virtual ::EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, uchar);

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol:
    // ?onBlockExploded@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVDimension@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual ::EventResult onBlockExploded(class Dimension&, class BlockPos const&, class Block const&, class Actor*);

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUExplosionStartedEvent@@@Z
    virtual ::EventResult onEvent(struct ExplosionStartedEvent const&);

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPistonActionEvent@@@Z
    virtual ::EventResult onEvent(struct PistonActionEvent const&);

    // vIndex: 17, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBULeverActionEvent@@@Z
    virtual ::EventResult onEvent(struct LeverActionEvent const&);

    // vIndex: 18, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUButtonPushEvent@@@Z
    virtual ::EventResult onEvent(struct ButtonPushEvent const&);

    // vIndex: 19, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPressurePlatePushEvent@@@Z
    virtual ::EventResult onEvent(struct PressurePlatePushEvent const&);

    // vIndex: 20, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUPressurePlatePopEvent@@@Z
    virtual ::EventResult onEvent(struct PressurePlatePopEvent const&);

    // vIndex: 21, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUTargetBlockHitEvent@@@Z
    virtual ::EventResult onEvent(struct TargetBlockHitEvent const&);

    // vIndex: 22, symbol:
    // ?onEvent@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUTripWireTripEvent@@@Z
    virtual ::EventResult onEvent(struct TripWireTripEvent const&);

    // symbol:
    // ??0ScriptBlockEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI
    ScriptBlockEventListener(class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
