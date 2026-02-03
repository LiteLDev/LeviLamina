#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptProgressKeyFrame; }
namespace ScriptModuleMinecraft { struct ScriptRotationKeyFrame; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSplineAnimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptProgressKeyFrame>> mProgressKeyFrames;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptRotationKeyFrame>> mRotationKeyFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSplineAnimation& operator=(ScriptSplineAnimation const&);
    ScriptSplineAnimation(ScriptSplineAnimation const&);
    ScriptSplineAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptSplineAnimation& operator=(::ScriptModuleMinecraft::ScriptSplineAnimation&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
