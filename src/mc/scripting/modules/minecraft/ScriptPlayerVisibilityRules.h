#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptEntityVisibilityRules.h"
#include "mc/world/PlayerWaypointVisibilityRules.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerVisibilityRules : public ::ScriptModuleMinecraft::ScriptEntityVisibilityRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerWaypointVisibilityRules> mPlayerRules;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
