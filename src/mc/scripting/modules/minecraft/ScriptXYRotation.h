#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptXYRotation {
public:
    // prevent constructor by default
    ScriptXYRotation& operator=(ScriptXYRotation const&);
    ScriptXYRotation(ScriptXYRotation const&);
    ScriptXYRotation();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<class Vec2> bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptXYRotation> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
