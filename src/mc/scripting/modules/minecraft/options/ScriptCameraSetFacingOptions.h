#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCameraSetFacingOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc207d1;
    ::ll::UntypedStorage<4, 16> mUnk7caf74;
    ::ll::UntypedStorage<4, 20> mUnk3f29d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraSetFacingOptions& operator=(ScriptCameraSetFacingOptions const&);
    ScriptCameraSetFacingOptions(ScriptCameraSetFacingOptions const&);
    ScriptCameraSetFacingOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraSetFacingOptions const& other) const;

    MCNAPI ~ScriptCameraSetFacingOptions();
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
