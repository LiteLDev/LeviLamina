#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentBlockBreakAfterEvent
: public ::ScriptModuleMinecraft::ScriptBlockEvent,
  public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentBlockBreakAfterEvent inner types define
    using IntermediateStorage =
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mEntity;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
            mDestructionCauseBlock;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentBlockBreakAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&
    );

    MCNAPI ScriptBlockCustomComponentBlockBreakAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEvent const&);

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
