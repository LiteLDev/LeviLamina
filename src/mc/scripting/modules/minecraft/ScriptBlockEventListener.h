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
    // vIndex: 0
    virtual ~ScriptBlockEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onBlockPlacedByPlayer(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    // vIndex: 2
    virtual ::EventResult
    onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&, class ItemStackBase const&, class ItemStackBase const&);

    // vIndex: 3
    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(class Player& player, class BlockPos const& pos);

    // vIndex: 4
    virtual ::EventResult
    onBlockMovedByPiston(class BlockPos const& pistonPos, class BlockPos const& blockPos, ::PistonState action);

    // vIndex: 5
    virtual ::EventResult onBlockDestructionStopped(class Player& player, class BlockPos const& blockPos, int progress);

    // vIndex: 6
    virtual ::EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, class Block const&, uchar);

    // vIndex: 7
    virtual ::EventResult onBlockInteractedWith(class Player& player, class BlockPos const& blockPos);

    // vIndex: 8
    virtual ::EventResult onBlockExploded(
        class Dimension&      dimension,
        class BlockPos const& blockPos,
        class Block const&,
        class Actor* source
    );

    // vIndex: 9
    virtual ::EventResult
    onBlockModified(class BlockPos const& pos, class Block const& oldBlock, class Block const& newBlock);

    // vIndex: 10
    virtual ::EventResult onUnknownBlockReceived(class Level& level, struct NewBlockID const& blockId, ushort data);

    // vIndex: 11
    virtual ::EventResult onEvent(struct BlockNotificationEvent const& event);

    // vIndex: 12
    virtual void __unk_vfn_12();

    // vIndex: 13
    virtual ::EventResult onEvent(struct ExplosionStartedEvent const&);

    // vIndex: 14
    virtual void __unk_vfn_14();

    // vIndex: 15
    virtual void __unk_vfn_15();

    // vIndex: 16
    virtual ::EventResult onEvent(struct PistonActionEvent const&);

    // vIndex: 17
    virtual ::EventResult onEvent(struct LeverActionEvent const&);

    // vIndex: 18
    virtual ::EventResult onEvent(struct ButtonPushEvent const&);

    // vIndex: 19
    virtual ::EventResult onEvent(struct PressurePlatePushEvent const&);

    // vIndex: 20
    virtual ::EventResult onEvent(struct PressurePlatePopEvent const&);

    // vIndex: 21
    virtual ::EventResult onEvent(struct TargetBlockHitEvent const&);

    // vIndex: 22
    virtual ::EventResult onEvent(struct TripWireTripEvent const&);

    MCAPI ScriptBlockEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
