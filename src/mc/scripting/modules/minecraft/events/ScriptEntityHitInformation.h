#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEntityHitInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkf3ab55;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntityHitInformation& operator=(ScriptEntityHitInformation const&);
    ScriptEntityHitInformation(ScriptEntityHitInformation const&);
    ScriptEntityHitInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptEntityHitInformation();
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
