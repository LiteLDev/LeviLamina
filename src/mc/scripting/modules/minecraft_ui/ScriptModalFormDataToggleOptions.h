#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptModalFormDataToggleOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk24b964;
    ::ll::UntypedStorage<8, 224> mUnk56fa7e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormDataToggleOptions& operator=(ScriptModalFormDataToggleOptions const&);
    ScriptModalFormDataToggleOptions(ScriptModalFormDataToggleOptions const&);
    ScriptModalFormDataToggleOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptModalFormDataToggleOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataToggleOptions&&);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormDataToggleOptions&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormDataToggleOptions&&);

    MCNAPI ~ScriptModalFormDataToggleOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataToggleOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
