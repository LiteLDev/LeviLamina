#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptUIManager {
public:
    // prevent constructor by default
    ScriptUIManager& operator=(ScriptUIManager const&);
    ScriptUIManager(ScriptUIManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptUIManager();

    MCNAPI ::Scripting::Result_deprecated<void> closeAllForms(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptUIManager&
    operator=(::ScriptModuleMinecraftServerUI::ScriptUIManager&&);

    MCNAPI ~ScriptUIManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
