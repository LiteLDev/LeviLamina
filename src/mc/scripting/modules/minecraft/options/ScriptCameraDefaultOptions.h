#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraDefaultOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk53b75f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraDefaultOptions& operator=(ScriptCameraDefaultOptions const&);
    ScriptCameraDefaultOptions(ScriptCameraDefaultOptions const&);
    ScriptCameraDefaultOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
