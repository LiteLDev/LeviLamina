#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormResponse {
public:
    // prevent constructor by default
    ScriptMessageFormResponse& operator=(ScriptMessageFormResponse const&);
    ScriptMessageFormResponse(ScriptMessageFormResponse const&);
    ScriptMessageFormResponse();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
