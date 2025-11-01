#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptModalFormDataTextFieldOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkbb823c;
    ::ll::UntypedStorage<8, 224> mUnk7f2cd1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormDataTextFieldOptions& operator=(ScriptModalFormDataTextFieldOptions const&);
    ScriptModalFormDataTextFieldOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptModalFormDataTextFieldOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions&&);

    MCNAPI ScriptModalFormDataTextFieldOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions const&);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions& operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions&&);

    MCNAPI ~ScriptModalFormDataTextFieldOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
