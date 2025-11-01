#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::Error functionError(::std::string_view functionName);

MCNAPI ::Scripting::Error getPropertyError(::std::string_view propertyName);

MCNAPI ::Scripting::Error setPropertyError(::std::string_view propertyName);
// NOLINTEND

}
