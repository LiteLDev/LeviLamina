#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerUI {

class BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk743ef7;
    ::ll::UntypedStorage<4, 8> mUnkbe8f2e;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptFormResponse& operator=(BaseScriptFormResponse const&);
    BaseScriptFormResponse(BaseScriptFormResponse const&);
    BaseScriptFormResponse();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::BaseScriptFormResponse> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
