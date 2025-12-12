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
    ::ll::UntypedStorage<8, 32> mUnk8ed79a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorCreateEvent& operator=(ScriptActorCreateEvent const&);
    ScriptActorCreateEvent(ScriptActorCreateEvent const&);
    ScriptActorCreateEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptActorCreateEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> actorHandle
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> actorHandle);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
