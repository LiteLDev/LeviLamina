#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

namespace ScriptModuleMinecraft {

class ScriptVector : public ::Vec3 {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptVector> bind();

    MCAPI static ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    divide(::Vec3 const& a, ::std::variant<float, ::Vec3> const& b);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
