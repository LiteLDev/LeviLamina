#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
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
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptBlockBreakingEventListener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockGlobalEventListener : public ::EventListenerDispatcher<::BlockEventListener> {
public:
    // ScriptBlockGlobalEventListener inner types declare
    // clang-format off
    struct Listener;
    // clang-format on

    // ScriptBlockGlobalEventListener inner types define
    struct Listener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
        ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
            mScriptEventsHandle;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptBlockGlobalEventListener::Listener>>
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
    virtual ~ScriptBlockGlobalEventListener() /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::PistonActionEvent const& eventData);

    MCAPI ::EventResult $onEvent(::LeverActionEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ButtonPushEvent const& eventData);

    MCAPI ::EventResult $onEvent(::PressurePlatePushEvent const& eventData);

    MCAPI ::EventResult $onEvent(::PressurePlatePopEvent const& eventData);

    MCAPI ::EventResult $onEvent(::TripWireTripEvent const& eventData);

    MCAPI ::EventResult $onEvent(::TargetBlockHitEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ExplosionStartedEvent const& eventData);

    MCAPI ::EventResult $onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );

#ifdef LL_PLAT_S
    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool);
#else // LL_PLAT_C
    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);
#endif

    MCAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    );

    MCAPI ::EventResult $onBlockDestructionStarted(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    hitBlock,
        uchar const       face,
        int const         previousProgress
    );

    MCAPI ::EventResult $onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);

    MCAPI ::EventResult $onBlockDestructionContinued(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    block,
        uchar const       face,
        int const         previousProgress
    );


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
