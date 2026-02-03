#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mEasingTime;
    ::ll::TypedStorage<4, 8, ::std::optional<::EasingType>> mEasingType;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();

    MCAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
