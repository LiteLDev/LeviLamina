#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptAnimationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb5e6ab;
    ::ll::UntypedStorage<8, 48> mUnk7b3d05;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAnimationOptions& operator=(ScriptAnimationOptions const&);
    ScriptAnimationOptions(ScriptAnimationOptions const&);
    ScriptAnimationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptAnimationOptions();
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
