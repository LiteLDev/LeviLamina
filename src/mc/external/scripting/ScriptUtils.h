#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptUtils {
// NOLINTBEGIN
// symbol: ?functionError@ScriptUtils@@YA?AUError@Scripting@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI struct Scripting::Error functionError(std::string_view);

// symbol: ?getPropertyError@ScriptUtils@@YA?AUError@Scripting@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI struct Scripting::Error getPropertyError(std::string_view);

// symbol: ?setPropertyError@ScriptUtils@@YA?AUError@Scripting@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI struct Scripting::Error setPropertyError(std::string_view);
// NOLINTEND

}; // namespace ScriptUtils
