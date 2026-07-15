#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct RangeComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLowerBound;
    ::ll::TypedStorage<4, 4, float> mUpperBound;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
