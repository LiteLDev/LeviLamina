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

    // vIndex: 3, symbol:
    // ?onBlockInPosWillBeDestroyedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(class Player& player, class BlockPos const& pos);

    // vIndex: 4, symbol:
    // ?onBlockMovedByPiston@BlockEventListener@@UEAA?AW4EventResult@@AEBVBlockPos@@0W4PistonState@@@Z
    virtual ::EventResult
    onBlockMovedByPiston(class BlockPos const& pistonPos, class BlockPos const& blockPos, ::PistonState action);

    // vIndex: 5, symbol:
    // ?onBlockDestructionStopped@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@H@Z
    virtual ::EventResult onBlockDestructionStopped(class Player& player, class BlockPos const& blockPos, int progress);

    // vIndex: 6, symbol:
    // ?onBlockDestructionStarted@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual ::EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, class Block const&, uchar);

    // vIndex: 7, symbol: ?onBlockInteractedWith@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
    virtual ::EventResult onBlockInteractedWith(class Player& player, class BlockPos const& blockPos);

    // vIndex: 8, symbol:
    // ?onBlockExploded@ScriptBlockEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEAVDimension@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual ::EventResult onBlockExploded(
        class Dimension&      dimension,
        class BlockPos const& blockPos,
        class Block const&,
        class Actor* source
    );

    // vIndex: 9, symbol: ?onBlockModified@BlockEventListener@@UEAA?AW4EventResult@@AEBVBlockPos@@AEBVBlock@@1@Z
    virtual ::EventResult
    onBlockModified(class BlockPos const& pos, class Block const& oldBlock, class Block const& newBlock);

    // vIndex: 10, symbol:
    // ?onUnknownBlockReceived@BlockEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEBUNewBlockID@@G@Z
    virtual ::EventResult onUnknownBlockReceived(class Level& level, struct NewBlockID const& blockId, ushort data);

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
    MCAPI ScriptBlockEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
