#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptUtils {
// functions
// NOLINTBEGIN
MCAPI ::Scripting::Error functionError(::std::string_view functionName);

MCAPI ::Scripting::Error getPropertyError(::std::string_view propertyName);

MCAPI ::Scripting::Error setPropertyError(::std::string_view propertyName);
// NOLINTEND

} // namespace ScriptUtils
