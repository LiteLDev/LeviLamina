#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerInteractAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk92d93a;
    ::ll::UntypedStorage<4, 4>  mUnk4a44e8;
    ::ll::UntypedStorage<4, 16> mUnk6c4cda;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerInteractAfterEvent&
    operator=(ScriptBlockCustomComponentPlayerInteractAfterEvent const&);
    ScriptBlockCustomComponentPlayerInteractAfterEvent(ScriptBlockCustomComponentPlayerInteractAfterEvent const&);
    ScriptBlockCustomComponentPlayerInteractAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentPlayerInteractAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent&&
    );

    MCNAPI ScriptBlockCustomComponentPlayerInteractAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                 scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent&&);

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                 scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
