#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct LessThanOrEqualsComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4b6467;
    // NOLINTEND

public:
    // prevent constructor by default
    LessThanOrEqualsComparison& operator=(LessThanOrEqualsComparison const&);
    LessThanOrEqualsComparison(LessThanOrEqualsComparison const&);
    LessThanOrEqualsComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
