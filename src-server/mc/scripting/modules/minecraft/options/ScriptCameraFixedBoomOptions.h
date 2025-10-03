#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraFixedBoomOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk91b1a2;
    ::ll::UntypedStorage<4, 16> mUnk261901;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraFixedBoomOptions& operator=(ScriptCameraFixedBoomOptions const&);
    ScriptCameraFixedBoomOptions(ScriptCameraFixedBoomOptions const&);
    ScriptCameraFixedBoomOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
