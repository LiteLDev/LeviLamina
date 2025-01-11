#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentRandomTickAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentRandomTickAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                   scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCFOLD static ::std::vector<::gsl::not_null<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage const& eventData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                   scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
