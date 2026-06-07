#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntityRaycastHit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<4, 4, float>                                                                       mDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityRaycastHit();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptEntityRaycastHit(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& actor,
        float                                                                             distance
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& actor, float distance);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
