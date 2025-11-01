#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraFovOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk367b9f;
    ::ll::UntypedStorage<4, 20> mUnk60672e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraFovOptions& operator=(ScriptCameraFovOptions const&);
    ScriptCameraFovOptions(ScriptCameraFovOptions const&);
    ScriptCameraFovOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

};

}
