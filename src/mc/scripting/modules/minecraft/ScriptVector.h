#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptVector : public ::Vec3 {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    divide(::Vec3 const& a, ::std::variant<float, ::Vec3> const& b);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
