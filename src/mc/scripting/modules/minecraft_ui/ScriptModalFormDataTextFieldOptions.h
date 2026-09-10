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
    ::ll::UntypedStorage<8, 224> mUnkfacf55;
    ::ll::UntypedStorage<8, 224> mUnk4bb75a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormDataTextFieldOptions& operator=(ScriptModalFormDataTextFieldOptions const&);
    ScriptModalFormDataTextFieldOptions(ScriptModalFormDataTextFieldOptions const&);
    ScriptModalFormDataTextFieldOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
