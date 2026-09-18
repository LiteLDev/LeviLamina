#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentTickAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentTickAfterEvent inner types define
    using IntermediateStorage = ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage;

public:
    // prevent constructor by default
    ScriptBlockCustomComponentTickAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentTickAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                   scope
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                   scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
