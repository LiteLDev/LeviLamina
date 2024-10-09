#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptVector {
public:
    // prevent constructor by default
    ScriptVector& operator=(ScriptVector const&);
    ScriptVector(ScriptVector const&);
    ScriptVector();

public:
    // NOLINTBEGIN
    MCAPI class ScriptModuleMinecraft::ScriptVector normalized() const;

    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptVector const& rhs) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptVector> bind();

    MCAPI static class Scripting::Result<class ScriptModuleMinecraft::ScriptVector>
    divide(class Vec3 const& a, std::variant<float, class Vec3> const& b);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
