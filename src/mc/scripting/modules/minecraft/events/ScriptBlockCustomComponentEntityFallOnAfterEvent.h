#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentEntityFallOnAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc93692;
    ::ll::UntypedStorage<4, 4>  mUnk2b9c5e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentEntityFallOnAfterEvent&
    operator=(ScriptBlockCustomComponentEntityFallOnAfterEvent const&);
    ScriptBlockCustomComponentEntityFallOnAfterEvent(ScriptBlockCustomComponentEntityFallOnAfterEvent const&);
    ScriptBlockCustomComponentEntityFallOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentEntityFallOnAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
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
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
