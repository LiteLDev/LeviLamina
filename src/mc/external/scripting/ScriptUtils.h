#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptUtils {
// NOLINTBEGIN
MCAPI struct Scripting::Error functionError(std::string_view);

MCAPI struct Scripting::Error getPropertyError(std::string_view);

MCAPI struct Scripting::Error setPropertyError(std::string_view);
// NOLINTEND

}; // namespace ScriptUtils
