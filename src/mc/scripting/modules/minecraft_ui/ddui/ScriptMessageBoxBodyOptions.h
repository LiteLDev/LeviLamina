#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptMessageBoxBodyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk9a716d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageBoxBodyOptions& operator=(ScriptMessageBoxBodyOptions const&);
    ScriptMessageBoxBodyOptions(ScriptMessageBoxBodyOptions const&);
    ScriptMessageBoxBodyOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
