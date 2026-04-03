#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUIPrivateBindings {

class ScriptDataDrivenScreenResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk1699c1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenScreenResponse& operator=(ScriptDataDrivenScreenResponse const&);
    ScriptDataDrivenScreenResponse(ScriptDataDrivenScreenResponse const&);
    ScriptDataDrivenScreenResponse();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUIPrivateBindings
