#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk877077;
    ::ll::UntypedStorage<4, 32> mUnke0fb75;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraFadeOptions& operator=(ScriptCameraFadeOptions const&);
    ScriptCameraFadeOptions(ScriptCameraFadeOptions const&);
    ScriptCameraFadeOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCameraFadeOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
