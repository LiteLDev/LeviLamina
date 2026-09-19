#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/EntityWaypointVisibilityRules.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEntityVisibilityRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EntityWaypointVisibilityRules> mEntityRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setShowDead(::std::optional<bool> showDead);

    MCAPI void setShowInvisible(::std::optional<bool> showInvisible);

    MCAPI void setShowSneaking(::std::optional<bool> showSneaking);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
