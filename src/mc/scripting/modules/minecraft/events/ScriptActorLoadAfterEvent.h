#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorLoadAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk701682;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorLoadAfterEvent& operator=(ScriptActorLoadAfterEvent const&);
    ScriptActorLoadAfterEvent(ScriptActorLoadAfterEvent const&);
    ScriptActorLoadAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptActorLoadAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> actorHandle
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorLoadAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> actorHandle);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
