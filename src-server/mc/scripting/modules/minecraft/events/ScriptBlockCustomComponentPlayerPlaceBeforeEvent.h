#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentBeforeEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentToExecute.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerPlacingEvent; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
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
    ::ll::UntypedStorage<1, 1>  mUnkc7a6a3;
    ::ll::UntypedStorage<8, 32> mUnk308d49;
    ::ll::UntypedStorage<4, 4>  mUnk76faba;
    ::ll::UntypedStorage<8, 40> mUnkfb6c67;
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
    MCNAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&
    );

    MCNAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&
    );

    MCNAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::BlockEvents::BlockPlayerPlacingEvent const& engineEvent,
        ::Scripting::WeakLifetimeScope const&         scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::std::vector<::ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&,
        void>>
    tryGetComponentsToExecute(::BlockEvents::BlockPlayerPlacingEvent const& eventData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);

    MCNAPI void*
    $ctor(::BlockEvents::BlockPlayerPlacingEvent const& engineEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent& engineEvent) const;

    MCNAPI bool $shouldCancel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
