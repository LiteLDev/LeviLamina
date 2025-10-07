#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorCreateEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorCreateEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptActorCreateEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> actorHandle
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> actorHandle);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
