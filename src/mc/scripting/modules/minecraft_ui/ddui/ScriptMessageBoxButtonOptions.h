#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptMessageBoxButtonOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkcb1415;
    ::ll::UntypedStorage<8, 88>  mUnkb06cd8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageBoxButtonOptions& operator=(ScriptMessageBoxButtonOptions const&);
    ScriptMessageBoxButtonOptions(ScriptMessageBoxButtonOptions const&);
    ScriptMessageBoxButtonOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
