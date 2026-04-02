#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCatmullRomSpline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mControlPoints;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCatmullRomSpline& operator=(ScriptCatmullRomSpline const&);
    ScriptCatmullRomSpline(ScriptCatmullRomSpline const&);
    ScriptCatmullRomSpline();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptCatmullRomSpline&
    operator=(::ScriptModuleMinecraft::ScriptCatmullRomSpline&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
