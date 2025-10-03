#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeTimeOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk110d85;
    ::ll::UntypedStorage<4, 4> mUnke60978;
    ::ll::UntypedStorage<4, 4> mUnkadca5f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraFadeTimeOptions& operator=(ScriptCameraFadeTimeOptions const&);
    ScriptCameraFadeTimeOptions(ScriptCameraFadeTimeOptions const&);
    ScriptCameraFadeTimeOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
