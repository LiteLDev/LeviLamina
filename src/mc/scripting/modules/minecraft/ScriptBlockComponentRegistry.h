#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockComponentRegistry& operator=(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry(ScriptBlockComponentRegistry const&);
    ScriptBlockComponentRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
