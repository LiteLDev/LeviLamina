#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptLineShape.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptArrowShape : public ::ScriptModuleDebugUtilities::ScriptLineShape {
public:
    // prevent constructor by default
    ScriptArrowShape();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptArrowShape(
        ::Scripting::WeakLifetimeScope const&                                           scope,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        ::Vec3 const&                                                                   endLocation
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
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        ::Vec3 const&                                                                   endLocation
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
