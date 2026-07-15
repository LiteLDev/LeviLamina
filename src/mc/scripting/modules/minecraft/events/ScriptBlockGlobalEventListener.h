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
    virtual ~ScriptBlockGlobalEventListener() /*override*/ = default;

    virtual ::EventResult onEvent(::PistonActionEvent const&) /*override*/;

    virtual ::EventResult onEvent(::LeverActionEvent const&) /*override*/;

    virtual ::EventResult onEvent(::ButtonPushEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PressurePlatePushEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PressurePlatePopEvent const&) /*override*/;

    virtual ::EventResult onEvent(::TripWireTripEvent const&) /*override*/;

    virtual ::EventResult onEvent(::TargetBlockHitEvent const&) /*override*/;

    virtual ::EventResult onEvent(::ExplosionStartedEvent const&) /*override*/;

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
        ::Player&,
        ::Block const&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    ) /*override*/;

    virtual ::EventResult
    onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const) /*override*/;

    virtual ::EventResult
    onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress) /*override*/;

    virtual ::EventResult
    onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
