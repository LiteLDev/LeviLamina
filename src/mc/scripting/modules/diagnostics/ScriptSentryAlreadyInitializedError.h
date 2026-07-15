#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleDiagnostics {

struct ScriptSentryAlreadyInitializedError : public ::Scripting::BaseError {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
