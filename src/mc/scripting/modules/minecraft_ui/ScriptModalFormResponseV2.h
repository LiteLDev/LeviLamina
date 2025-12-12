#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/BaseScriptFormResponse.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptModalFormResponseV2 : public ::ScriptModuleMinecraftServerUI::BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke1662e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormResponseV2& operator=(ScriptModalFormResponseV2 const&);
    ScriptModalFormResponseV2(ScriptModalFormResponseV2 const&);
    ScriptModalFormResponseV2();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormResponseV2&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormResponseV2&&);

    MCNAPI ~ScriptModalFormResponseV2();
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
