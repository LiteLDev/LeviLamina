#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRotationKeyFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk8da969;
    ::ll::UntypedStorage<4, 4>  mUnkace6c4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRotationKeyFrame& operator=(ScriptRotationKeyFrame const&);
    ScriptRotationKeyFrame(ScriptRotationKeyFrame const&);
    ScriptRotationKeyFrame();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
