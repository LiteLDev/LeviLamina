#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptUtils {
// NOLINTBEGIN
MCAPI struct Scripting::Error functionError(std::string_view functionName);

MCAPI struct Scripting::Error getPropertyError(std::string_view propertyName);

MCAPI struct Scripting::Error setPropertyError(std::string_view propertyName);
// NOLINTEND

}; // namespace ScriptUtils
