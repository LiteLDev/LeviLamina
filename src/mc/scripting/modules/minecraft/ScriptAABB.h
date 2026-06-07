#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAABB {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mCenter;
    ::ll::TypedStorage<4, 12, ::Vec3> mExtent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAABB();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptAABB(::AABB const& aabb);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AABB const& aabb);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
