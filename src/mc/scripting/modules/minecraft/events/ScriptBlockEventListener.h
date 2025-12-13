#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Block;
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
    virtual ::EventResult onEvent(::PistonActionEvent const& pistonActionEvent) /*override*/;

    virtual ::EventResult onEvent(::LeverActionEvent const& leverActionEvent) /*override*/;

    virtual ::EventResult onEvent(::ButtonPushEvent const& buttonPushEvent) /*override*/;

    virtual ::EventResult onEvent(::PressurePlatePushEvent const& pressurePlatePushEvent) /*override*/;

    virtual ::EventResult onEvent(::PressurePlatePopEvent const& pressurePlatePopEvent) /*override*/;

    virtual ::EventResult onEvent(::TripWireTripEvent const& tripWireTripEvent) /*override*/;

    virtual ::EventResult onEvent(::TargetBlockHitEvent const& targetBlockHitEvent) /*override*/;

    virtual ::EventResult onEvent(::ExplosionStartedEvent const& explosionStartedEvent) /*override*/;

    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;

    virtual ::EventResult onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    ) /*override*/;

    virtual ::EventResult onBlockDestructionStarted(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    hitBlock,
        uchar const       face
    ) /*override*/;

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
