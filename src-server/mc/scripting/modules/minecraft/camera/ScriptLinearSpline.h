#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLinearSpline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd83b10;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLinearSpline& operator=(ScriptLinearSpline const&);
    ScriptLinearSpline(ScriptLinearSpline const&);
    ScriptLinearSpline();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptLinearSpline& operator=(::ScriptModuleMinecraft::ScriptLinearSpline&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
