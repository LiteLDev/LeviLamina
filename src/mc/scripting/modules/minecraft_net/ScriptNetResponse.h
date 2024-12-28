#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftNet {

struct ScriptNetResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd6b492;
    ::ll::UntypedStorage<8, 32> mUnkcb6b89;
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
    MCAPI ::ScriptModuleMinecraftNet::ScriptNetResponse& operator=(::ScriptModuleMinecraftNet::ScriptNetResponse&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftNet::ScriptNetResponse> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
