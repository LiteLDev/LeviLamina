#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptFormVisibilityError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf8d668;
    ::ll::UntypedStorage<4, 4>  mUnk6a86c1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFormVisibilityError& operator=(ScriptFormVisibilityError const&);
    ScriptFormVisibilityError(ScriptFormVisibilityError const&);
    ScriptFormVisibilityError();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
