#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/level/block/actor/PistonState.h"

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
    virtual ::EventResult onBlockDestroyedByPlayer(
        class Player&              player,
        class Block const&         destroyedBlock,
        class BlockPos const&      pos,
        class ItemStackBase const& currentItem,
        class ItemStackBase const& itemBeforeBlockBreak
    );

    // vIndex: 3
    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(class Player& player, class BlockPos const& pos);

    // vIndex: 4
    virtual ::EventResult
    onBlockMovedByPiston(class BlockPos const& pistonPos, class BlockPos const& blockPos, ::PistonState action);

    // vIndex: 5
    virtual ::EventResult onBlockDestructionStopped(class Player& player, class BlockPos const& blockPos, int progress);

    // vIndex: 6
    virtual ::EventResult
    onBlockDestructionStarted(class Player& player, class BlockPos const& pos, class Block const& hitBlock, uchar face);

    // vIndex: 7
    virtual ::EventResult onBlockInteractedWith(class Player& player, class BlockPos const& blockPos);

    // vIndex: 8
    virtual ::EventResult onBlockExploded(
        class Dimension&      dimension,
        class BlockPos const& blockPos,
        class Block const&    explodedBlock,
        class Actor*          source
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
    virtual ::EventResult onEvent(struct ExplosionStartedEvent const& explosionStartedEvent);

    // vIndex: 14
    virtual void __unk_vfn_14();

    // vIndex: 15
    virtual void __unk_vfn_15();

    // vIndex: 16
    virtual ::EventResult onEvent(struct PistonActionEvent const& pistonActionEvent);

    // vIndex: 17
    virtual ::EventResult onEvent(struct LeverActionEvent const& leverActionEvent);

    // vIndex: 18
    virtual ::EventResult onEvent(struct ButtonPushEvent const& buttonPushEvent);

    // vIndex: 19
    virtual ::EventResult onEvent(struct PressurePlatePushEvent const& pressurePlatePushEvent);

    // vIndex: 20
    virtual ::EventResult onEvent(struct PressurePlatePopEvent const& pressurePlatePopEvent);

    // vIndex: 21
    virtual ::EventResult onEvent(struct TargetBlockHitEvent const& targetBlockHitEvent);

    // vIndex: 22
    virtual ::EventResult onEvent(struct TripWireTripEvent const& tripWireTripEvent);

    MCAPI ScriptBlockEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    MCAPI ::EventResult onBlockDestroyedByPlayer$(
        class Player&              player,
        class Block const&         destroyedBlock,
        class BlockPos const&      pos,
        class ItemStackBase const& currentItem,
        class ItemStackBase const& itemBeforeBlockBreak
    );

    MCAPI ::EventResult onBlockDestructionStarted$(
        class Player&         player,
        class BlockPos const& pos,
        class Block const&    hitBlock,
        uchar                 face
    );

    MCAPI ::EventResult onBlockDestructionStopped$(class Player& player, class BlockPos const& blockPos, int progress);

    MCAPI ::EventResult onBlockExploded$(
        class Dimension&      dimension,
        class BlockPos const& blockPos,
        class Block const&    explodedBlock,
        class Actor*          source
    );

    MCAPI ::EventResult onBlockInPosWillBeDestroyedByPlayer$(class Player& player, class BlockPos const& pos);

    MCAPI ::EventResult onBlockInteractedWith$(class Player& player, class BlockPos const& blockPos);

    MCAPI ::EventResult
    onBlockModified$(class BlockPos const& pos, class Block const& oldBlock, class Block const& newBlock);

    MCAPI ::EventResult
    onBlockMovedByPiston$(class BlockPos const& pistonPos, class BlockPos const& blockPos, ::PistonState action);

    MCAPI ::EventResult onBlockPlacedByPlayer$(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    MCAPI ::EventResult onEvent$(struct BlockNotificationEvent const& event);

    MCAPI ::EventResult onEvent$(struct ExplosionStartedEvent const& explosionStartedEvent);

    MCAPI ::EventResult onEvent$(struct PistonActionEvent const& pistonActionEvent);

    MCAPI ::EventResult onEvent$(struct LeverActionEvent const& leverActionEvent);

    MCAPI ::EventResult onEvent$(struct ButtonPushEvent const& buttonPushEvent);

    MCAPI ::EventResult onEvent$(struct PressurePlatePushEvent const& pressurePlatePushEvent);

    MCAPI ::EventResult onEvent$(struct PressurePlatePopEvent const& pressurePlatePopEvent);

    MCAPI ::EventResult onEvent$(struct TargetBlockHitEvent const& targetBlockHitEvent);

    MCAPI ::EventResult onEvent$(struct TripWireTripEvent const& tripWireTripEvent);

    MCAPI ::EventResult onUnknownBlockReceived$(class Level& level, struct NewBlockID const& blockId, ushort data);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
