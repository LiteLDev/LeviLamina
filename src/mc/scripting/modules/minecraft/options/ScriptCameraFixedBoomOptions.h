#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraFixedBoomOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mViewOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mEntityOffset;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
