#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomDimensionRegistry; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomDimensionRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDimensionRegistry& operator=(ScriptDimensionRegistry const&);
    ScriptDimensionRegistry(ScriptDimensionRegistry const&);
    ScriptDimensionRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
