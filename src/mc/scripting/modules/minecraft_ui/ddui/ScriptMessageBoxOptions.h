#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptMessageBoxOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd34651;
    ::ll::UntypedStorage<8, 48> mUnk7002f9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageBoxOptions& operator=(ScriptMessageBoxOptions const&);
    ScriptMessageBoxOptions(ScriptMessageBoxOptions const&);
    ScriptMessageBoxOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
