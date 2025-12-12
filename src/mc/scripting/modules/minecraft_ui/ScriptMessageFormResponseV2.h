#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/BaseScriptFormResponse.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormResponseV2 : public ::ScriptModuleMinecraftServerUI::BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk352f3d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageFormResponseV2& operator=(ScriptMessageFormResponseV2 const&);
    ScriptMessageFormResponseV2(ScriptMessageFormResponseV2 const&);
    ScriptMessageFormResponseV2();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
