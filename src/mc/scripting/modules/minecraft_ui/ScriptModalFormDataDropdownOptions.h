#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptModalFormDataDropdownOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk1b9406;
    ::ll::UntypedStorage<8, 224> mUnkdac0c3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormDataDropdownOptions& operator=(ScriptModalFormDataDropdownOptions const&);
    ScriptModalFormDataDropdownOptions(ScriptModalFormDataDropdownOptions const&);
    ScriptModalFormDataDropdownOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptModalFormDataDropdownOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataDropdownOptions&&);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormDataDropdownOptions&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormDataDropdownOptions&&);

    MCNAPI ~ScriptModalFormDataDropdownOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataDropdownOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
