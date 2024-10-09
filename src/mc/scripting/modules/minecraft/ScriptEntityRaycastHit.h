#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntityRaycastHit {
public:
    // prevent constructor by default
    ScriptEntityRaycastHit& operator=(ScriptEntityRaycastHit const&);
    ScriptEntityRaycastHit(ScriptEntityRaycastHit const&);
    ScriptEntityRaycastHit();

public:
    // NOLINTBEGIN
    MCAPI ScriptEntityRaycastHit(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const& actor,
        float                                                                                     distance
    );

    MCAPI ~ScriptEntityRaycastHit();

    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptEntityRaycastHit> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
