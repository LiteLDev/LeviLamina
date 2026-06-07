#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentToExecute.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerBreakAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentPlayerBreakAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
        mPlayer;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerBreakAfterEvent& operator=(ScriptBlockCustomComponentPlayerBreakAfterEvent const&);
    ScriptBlockCustomComponentPlayerBreakAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentPlayerBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEvent const&
    );

    MCAPI ScriptBlockCustomComponentPlayerBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                              scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV1();

    MCFOLD static ::std::vector<::ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&,
        void>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const& eventData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEvent const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerBreakAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                              scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
