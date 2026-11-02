#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
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
namespace ScriptModuleMinecraft { class ScriptBlockBreakingEventListener; }
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockGlobalEventListener : public ::EventListenerDispatcher<::BlockEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
    ::ll::TypedStorage<
        8,
        8,
        ::gsl::not_null<::std::unique_ptr<::ScriptModuleMinecraft::ScriptBlockBreakingEventListener>>>
        mBlockBreakingListener;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockGlobalEventListener() /*override*/ = default;

    virtual ::EventResult onEvent(::PistonActionEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::LeverActionEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ButtonPushEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::PressurePlatePushEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::PressurePlatePopEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::TripWireTripEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::TargetBlockHitEvent const& eventData) /*override*/;

    virtual ::EventResult onEvent(::ExplosionStartedEvent const& eventData) /*override*/;

    virtual ::EventResult onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    ) /*override*/;

#ifdef LL_PLAT_S
    virtual ::EventResult
    onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool) /*override*/;
#else // LL_PLAT_C
    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;
#endif

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
        uchar const       face,
        int const         previousProgress
    ) /*override*/;

    virtual ::EventResult
    onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress) /*override*/;

    virtual ::EventResult onBlockDestructionContinued(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    block,
        uchar const       face,
        int const         previousProgress
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::PistonActionEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::LeverActionEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ButtonPushEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::PressurePlatePushEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::PressurePlatePopEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::TripWireTripEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::TargetBlockHitEvent const& eventData);

    MCNAPI ::EventResult $onEvent(::ExplosionStartedEvent const& eventData);

    MCAPI ::EventResult $onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );

#ifdef LL_PLAT_S
    MCNAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool);
#else // LL_PLAT_C
    MCNAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);
#endif

    MCNAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    );

    MCNAPI ::EventResult $onBlockDestructionStarted(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    hitBlock,
        uchar const       face,
        int const         previousProgress
    );

    MCNAPI ::EventResult $onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);

    MCNAPI ::EventResult $onBlockDestructionContinued(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    block,
        uchar const       face,
        int const         previousProgress
    );


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
