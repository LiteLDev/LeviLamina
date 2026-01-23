#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
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

    virtual ~ScriptBlockGlobalEventListener() /*override*/ = default;
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
