#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomWorldClockRegistry; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldClockRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomWorldClockRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldClockRegistry& operator=(ScriptWorldClockRegistry const&);
    ScriptWorldClockRegistry(ScriptWorldClockRegistry const&);
    ScriptWorldClockRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
