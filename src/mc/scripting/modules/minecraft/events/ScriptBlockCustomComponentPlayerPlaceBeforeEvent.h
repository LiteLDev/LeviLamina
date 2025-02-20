#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentBeforeEvent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerPlacingEvent; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerPlaceBeforeEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentBeforeEvent<::BlockEvents::BlockPlayerPlacingEvent&> {
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
    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(::ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentPlayerPlaceBeforeEvent&&);

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(::ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);

    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::BlockEvents::BlockPlayerPlacingEvent const& engineEvent,
        ::Scripting::WeakLifetimeScope const&         scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
