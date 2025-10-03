#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/BaseScriptFormResponse.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptActionFormResponse : public ::ScriptModuleMinecraftServerUI::BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk582e77;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActionFormResponse& operator=(ScriptActionFormResponse const&);
    ScriptActionFormResponse(ScriptActionFormResponse const&);
    ScriptActionFormResponse();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
