#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDieAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1f3ea3;
    ::ll::UntypedStorage<8, 88> mUnk80828a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorDieAfterEvent& operator=(ScriptActorDieAfterEvent const&);
    ScriptActorDieAfterEvent(ScriptActorDieAfterEvent const&);
    ScriptActorDieAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorDieAfterEvent(::ScriptModuleMinecraft::ScriptActorDieAfterEvent&&);

    MCAPI ~ScriptActorDieAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptActorDieAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorDieAfterEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
