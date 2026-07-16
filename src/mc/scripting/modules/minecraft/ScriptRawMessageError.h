#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptRawMessageError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptRawMessageError(::std::string const& message);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& message);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
