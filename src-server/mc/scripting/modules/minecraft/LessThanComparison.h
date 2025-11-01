#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct LessThanComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6daa68;
    // NOLINTEND

public:
    // prevent constructor by default
    LessThanComparison& operator=(LessThanComparison const&);
    LessThanComparison(LessThanComparison const&);
    LessThanComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

};

}
