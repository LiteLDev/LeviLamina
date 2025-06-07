#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/BaseScriptFormResponse.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptModalFormResponse : public ::ScriptModuleMinecraftServerUI::BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkacade9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormResponse& operator=(ScriptModalFormResponse const&);
    ScriptModalFormResponse(ScriptModalFormResponse const&);
    ScriptModalFormResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormResponse&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormResponse&&);

    MCNAPI ~ScriptModalFormResponse();
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

} // namespace ScriptModuleMinecraftServerUI
