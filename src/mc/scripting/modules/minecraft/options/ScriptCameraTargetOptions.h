#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraTargetOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkdf7419;
    ::ll::UntypedStorage<8, 32> mUnk8f46c0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraTargetOptions& operator=(ScriptCameraTargetOptions const&);
    ScriptCameraTargetOptions(ScriptCameraTargetOptions const&);
    ScriptCameraTargetOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCameraTargetOptions();
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

} // namespace ScriptModuleMinecraft
