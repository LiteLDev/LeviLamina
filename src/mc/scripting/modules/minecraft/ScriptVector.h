#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

namespace ScriptModuleMinecraft {

class ScriptVector : public ::Vec3 {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float length() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptVector normalized() const;

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptVector const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptVector> bind();

    MCNAPI static ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    divide(::Vec3 const& a, ::std::variant<float, ::Vec3> const& b);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
