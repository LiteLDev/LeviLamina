#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct GreaterThanComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8dab12;
    // NOLINTEND

public:
    // prevent constructor by default
    GreaterThanComparison& operator=(GreaterThanComparison const&);
    GreaterThanComparison(GreaterThanComparison const&);
    GreaterThanComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
