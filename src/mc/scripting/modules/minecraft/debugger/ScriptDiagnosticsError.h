#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

struct ScriptDiagnosticsError : public ::Scripting::BaseError {
public:
    // ScriptDiagnosticsError inner types define
    enum class Reason : int {
        AlreadyRegistered = 0,
        InvalidName       = 1,
        InvalidData       = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleDebugUtilities::ScriptDiagnosticsError::Reason> mReason;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDiagnosticsError(
        ::std::string const&                                         message,
        ::ScriptModuleDebugUtilities::ScriptDiagnosticsError::Reason reason
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& message, ::ScriptModuleDebugUtilities::ScriptDiagnosticsError::Reason reason);
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
