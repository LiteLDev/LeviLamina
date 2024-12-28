#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
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
    MCAPI ScriptBlockCustomComponentStepOffAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::std::vector<::gsl::not_null<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const& eventData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
