#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/InvalidArgumentErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::Error functionError(::std::string_view functionName);

MCNAPI ::Scripting::InvalidArgumentError
getArgumentError(::std::string_view argumentName, ::Scripting::InvalidArgumentErrorType type, int index);

MCNAPI ::Scripting::Error getPropertyError(::std::string_view propertyName);

MCNAPI ::Scripting::Error setPropertyError(::std::string_view propertyName);
// NOLINTEND

} // namespace ScriptUtils
