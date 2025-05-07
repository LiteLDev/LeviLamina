#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockEventListener : public ::EventListenerDispatcher<::BlockEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk535dcd;
    ::ll::UntypedStorage<8, 16> mUnkf27d63;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockEventListener& operator=(ScriptBlockEventListener const&);
    ScriptBlockEventListener(ScriptBlockEventListener const&);
    ScriptBlockEventListener();

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
    MCNAPI ::EventResult $onEvent(::PistonActionEvent const& pistonActionEvent);

    MCNAPI ::EventResult $onEvent(::LeverActionEvent const& leverActionEvent);

    MCNAPI ::EventResult $onEvent(::ButtonPushEvent const& buttonPushEvent);

    MCNAPI ::EventResult $onEvent(::PressurePlatePushEvent const& pressurePlatePushEvent);

    MCNAPI ::EventResult $onEvent(::PressurePlatePopEvent const& pressurePlatePopEvent);

    MCNAPI ::EventResult $onEvent(::TripWireTripEvent const& tripWireTripEvent);

    MCNAPI ::EventResult $onEvent(::TargetBlockHitEvent const& targetBlockHitEvent);

    MCNAPI ::EventResult $onEvent(::ExplosionStartedEvent const& explosionStartedEvent);

    MCNAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCNAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    );

    MCNAPI ::EventResult
    $onBlockDestructionStarted(::Player& player, ::BlockPos const& pos, ::Block const& hitBlock, uchar const face);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
