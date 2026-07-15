#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptMessageBoxResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk2bd4fd;
    ::ll::UntypedStorage<4, 4> mUnkf6cb48;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageBoxResult& operator=(ScriptMessageBoxResult const&);
    ScriptMessageBoxResult(ScriptMessageBoxResult const&);
    ScriptMessageBoxResult();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
