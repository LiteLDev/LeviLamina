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

struct ScriptActorItemPickupBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mItem;
    ::ll::TypedStorage<1, 1, bool>                                                                        mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemPickupBeforeEvent& operator=(ScriptActorItemPickupBeforeEvent const&);
    ScriptActorItemPickupBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorItemPickupBeforeEvent(::ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent const&);

    MCAPI ~ScriptActorItemPickupBeforeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
