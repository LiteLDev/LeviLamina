#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptXYRotation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk640831;
    ::ll::UntypedStorage<4, 4> mUnk69e4f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptXYRotation& operator=(ScriptXYRotation const&);
    ScriptXYRotation(ScriptXYRotation const&);
    ScriptXYRotation();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
