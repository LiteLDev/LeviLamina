#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptInvalidFormError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk24f8b7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidFormError& operator=(ScriptInvalidFormError const&);
    ScriptInvalidFormError(ScriptInvalidFormError const&);
    ScriptInvalidFormError();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
