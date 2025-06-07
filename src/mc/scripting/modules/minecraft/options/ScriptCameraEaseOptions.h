#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraEaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk935fed;
    ::ll::UntypedStorage<4, 8> mUnka1a4a7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraEaseOptions& operator=(ScriptCameraEaseOptions const&);
    ScriptCameraEaseOptions(ScriptCameraEaseOptions const&);
    ScriptCameraEaseOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
