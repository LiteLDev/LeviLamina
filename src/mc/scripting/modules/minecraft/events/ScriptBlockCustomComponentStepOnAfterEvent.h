#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOnAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                    public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk14484f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOnAfterEvent& operator=(ScriptBlockCustomComponentStepOnAfterEvent const&);
    ScriptBlockCustomComponentStepOnAfterEvent(ScriptBlockCustomComponentStepOnAfterEvent const&);
    ScriptBlockCustomComponentStepOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentStepOnAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                         scope
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
    MCFOLD void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOnAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                         scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
