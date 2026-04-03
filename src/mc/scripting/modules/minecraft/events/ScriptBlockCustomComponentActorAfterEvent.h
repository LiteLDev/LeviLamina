#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentActorAfterEventIntermediateStorage; }
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

    MCAPI ~ScriptBlockCustomComponentActorAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentActorAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
