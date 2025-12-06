#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockEventListener;
class BlockPos;
class ItemStackBase;
class Player;
struct ButtonPushEvent;
struct ExplosionStartedEvent;
struct LeverActionEvent;
struct PistonActionEvent;
struct PressurePlatePopEvent;
struct PressurePlatePushEvent;
struct TargetBlockHitEvent;
struct TripWireTripEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockEventListener : public ::EventListenerDispatcher<::BlockEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
                                                              mScriptEventsHandle;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 22
    virtual ::EventResult onEvent(::PistonActionEvent const& pistonActionEvent) /*override*/;

    // vIndex: 21
    virtual ::EventResult onEvent(::LeverActionEvent const& leverActionEvent) /*override*/;

    // vIndex: 20
    virtual ::EventResult onEvent(::ButtonPushEvent const& buttonPushEvent) /*override*/;

    // vIndex: 19
    virtual ::EventResult onEvent(::PressurePlatePushEvent const& pressurePlatePushEvent) /*override*/;

    // vIndex: 18
    virtual ::EventResult onEvent(::PressurePlatePopEvent const& pressurePlatePopEvent) /*override*/;

    // vIndex: 16
    virtual ::EventResult onEvent(::TripWireTripEvent const& tripWireTripEvent) /*override*/;

    // vIndex: 17
    virtual ::EventResult onEvent(::TargetBlockHitEvent const& targetBlockHitEvent) /*override*/;

    // vIndex: 13
    virtual ::EventResult onEvent(::ExplosionStartedEvent const& explosionStartedEvent) /*override*/;

    // vIndex: 1
    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;

    // vIndex: 2
    virtual ::EventResult onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    ) /*override*/;

    // vIndex: 6
    virtual ::EventResult onBlockDestructionStarted(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    hitBlock,
        uchar const       face
    ) /*override*/;

    // vIndex: 0
    virtual ~ScriptBlockEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::PistonActionEvent const& pistonActionEvent);

    MCAPI ::EventResult $onEvent(::LeverActionEvent const& leverActionEvent);

    MCAPI ::EventResult $onEvent(::ButtonPushEvent const& buttonPushEvent);

    MCAPI ::EventResult $onEvent(::PressurePlatePushEvent const& pressurePlatePushEvent);

    MCAPI ::EventResult $onEvent(::PressurePlatePopEvent const& pressurePlatePopEvent);

    MCAPI ::EventResult $onEvent(::TripWireTripEvent const& tripWireTripEvent);

    MCAPI ::EventResult $onEvent(::TargetBlockHitEvent const& targetBlockHitEvent);

    MCAPI ::EventResult $onEvent(::ExplosionStartedEvent const& explosionStartedEvent);

    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    );

    MCAPI ::EventResult
    $onBlockDestructionStarted(::Player& player, ::BlockPos const& pos, ::Block const& hitBlock, uchar const face);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
