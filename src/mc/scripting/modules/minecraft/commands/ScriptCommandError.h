#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCommandError : public ::Scripting::BaseError {
public:
    // ScriptCommandError inner types define
    enum class ErrorType : int {
        Parsing   = 0,
        Executing = 1,
    };

public:
    // prevent constructor by default
    ScriptCommandError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCommandError(::std::string message, ::ScriptModuleMinecraft::ScriptCommandError::ErrorType type);

    MCNAPI ScriptCommandError(::std::string messages, ::MCRESULT const& result);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string message, ::ScriptModuleMinecraft::ScriptCommandError::ErrorType type);

    MCNAPI void* $ctor(::std::string messages, ::MCRESULT const& result);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
