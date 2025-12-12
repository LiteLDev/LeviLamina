#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOffAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                     public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7565af;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOffAfterEvent& operator=(ScriptBlockCustomComponentStepOffAfterEvent const&);
    ScriptBlockCustomComponentStepOffAfterEvent(ScriptBlockCustomComponentStepOffAfterEvent const&);
    ScriptBlockCustomComponentStepOffAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentStepOffAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
