#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentBlockStateChangeAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentBlockStateChangeAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mPermutation;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mPreviousPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentBlockStateChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentBlockStateChangeAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage const& storage,
        ::Scripting::WeakLifetimeScope const&                                                                   scope
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
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockStateChangeAfterEventIntermediateStorage const& storage,
        ::Scripting::WeakLifetimeScope const&                                                                   scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
