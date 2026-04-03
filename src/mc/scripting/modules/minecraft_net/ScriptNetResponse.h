#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb89a85;
    ::ll::UntypedStorage<8, 32> mUnk4a7c58;
    ::ll::UntypedStorage<4, 4>  mUnk225dc0;
    ::ll::UntypedStorage<8, 32> mUnkd38337;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetResponse& operator=(ScriptNetResponse const&);
    ScriptNetResponse(ScriptNetResponse const&);
    ScriptNetResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraftNet::ScriptNetResponse& operator=(::ScriptModuleMinecraftNet::ScriptNetResponse&&);

    MCNAPI ~ScriptNetResponse();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
