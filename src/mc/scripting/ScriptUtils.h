#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/InvalidArgumentErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::InvalidArgumentError
getArgumentError(::std::string_view argumentName, ::Scripting::InvalidArgumentErrorType type, int index);
// NOLINTEND

} // namespace ScriptUtils
