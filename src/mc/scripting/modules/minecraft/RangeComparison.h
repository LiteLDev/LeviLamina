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
    ::ll::UntypedStorage<4, 4> mUnk6e6363;
    ::ll::UntypedStorage<4, 4> mUnk32bb6e;
    // NOLINTEND

public:
    // prevent constructor by default
    RangeComparison& operator=(RangeComparison const&);
    RangeComparison(RangeComparison const&);
    RangeComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
