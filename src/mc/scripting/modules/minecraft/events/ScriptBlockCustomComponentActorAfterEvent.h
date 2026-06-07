#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentToExecute.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentActorAfterEventIntermediateStorage; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentActorAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent,
                                                   public ::ScriptModuleMinecraft::ScriptCustomComponentAfterEvent {
public:
    // ScriptBlockCustomComponentActorAfterEvent inner types define
    using IntermediateStorage = ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEventIntermediateStorage;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mEntity;
    ::ll::TypedStorage<8, 32, ::std::string const>                                                        mName;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentActorAfterEvent& operator=(ScriptBlockCustomComponentActorAfterEvent const&);
    ScriptBlockCustomComponentActorAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentActorAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEvent const&
    );

    MCAPI ScriptBlockCustomComponentActorAfterEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
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
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEventIntermediateStorage const& eventData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEvent const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEventIntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
