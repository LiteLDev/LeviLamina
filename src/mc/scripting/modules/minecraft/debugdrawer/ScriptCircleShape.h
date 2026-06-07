#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShape.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptCircleShape : public ::ScriptModuleDebugUtilities::ScriptDebugShape {
public:
    // prevent constructor by default
    ScriptCircleShape();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCircleShape(
        ::Scripting::WeakLifetimeScope const&                                           scope,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                                           scope,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
