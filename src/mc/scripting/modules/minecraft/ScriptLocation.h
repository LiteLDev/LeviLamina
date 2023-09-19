#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLocation {
public:
    // prevent constructor by default
    ScriptLocation& operator=(ScriptLocation const&);
    ScriptLocation(ScriptLocation const&);
    ScriptLocation();

public:
    // NOLINTBEGIN
    // symbol: ?bind@ScriptLocation@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VVec3@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class Vec3> bind();

    // symbol: ?bind_V010@ScriptLocation@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VVec3@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class Vec3> bind_V010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
