#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLinearSpline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mControlPoints;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLinearSpline& operator=(ScriptLinearSpline const&);
    ScriptLinearSpline(ScriptLinearSpline const&);
    ScriptLinearSpline();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptLinearSpline& operator=(::ScriptModuleMinecraft::ScriptLinearSpline&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
