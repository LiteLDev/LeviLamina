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
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentOnPlaceAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                     public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentOnPlaceAfterEvent inner types define
    using IntermediateStorage = ::ScriptModuleMinecraft::ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const>
            mPreviousBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentOnPlaceAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentOnPlaceAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCFOLD static ::std::vector<::ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&,
        void>>
    tryGetComponentsToExecute(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage const& eventData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentOnPlaceAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
