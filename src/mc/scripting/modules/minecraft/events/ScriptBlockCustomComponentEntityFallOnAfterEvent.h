#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentEntityFallOnAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentEntityFallOnAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
                                          mEntity;
    ::ll::TypedStorage<4, 4, float const> mFallDistance;
    // NOLINTEND

public:
    // prevent constructor by default
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
