#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentBeforeEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentToExecute.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerPlacingEvent; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerPlaceBeforeEvent
: public ::ScriptModuleMinecraft::ScriptCustomComponentBeforeEvent<::BlockEvents::BlockPlayerPlacingEvent&>,
  public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCancel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
                                                                    mPermutationToPlace;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
        mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent&
    operator=(ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent& engineEvent) const /*override*/;

    // vIndex: 2
    virtual bool shouldCancel() const /*override*/;

    // vIndex: 0
    virtual ~ScriptBlockCustomComponentPlayerPlaceBeforeEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&
    );

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&
    );

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::BlockEvents::BlockPlayerPlacingEvent const& engineEvent,
        ::Scripting::WeakLifetimeScope const&         scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::std::vector<::ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&,
        void>>
    tryGetComponentsToExecute(::BlockEvents::BlockPlayerPlacingEvent const& eventData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);

    MCAPI void*
    $ctor(::BlockEvents::BlockPlayerPlacingEvent const& engineEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent& engineEvent) const;

    MCFOLD bool $shouldCancel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
