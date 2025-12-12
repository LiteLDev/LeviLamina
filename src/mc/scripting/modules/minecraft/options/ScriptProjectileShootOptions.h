#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileShootOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk3e3b22;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileShootOptions& operator=(ScriptProjectileShootOptions const&);
    ScriptProjectileShootOptions(ScriptProjectileShootOptions const&);
    ScriptProjectileShootOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
