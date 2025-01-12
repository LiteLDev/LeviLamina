#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
class VecXZ;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLocation {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Vec3> bindVec3();

    MCAPI static ::Scripting::ClassBindingBuilder<::Vec3> bindVec3_V010();

    MCAPI static ::Scripting::InterfaceBindingBuilder<::VecXZ> bindVecXZ();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
