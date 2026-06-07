#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Level;
// clang-format on

namespace EquipItemDefinitionVersioning {
// functions
// NOLINTBEGIN
MCAPI bool isSupported(::Level const& level, ::BaseGameVersion version);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::BaseGameVersion const& EXCLUDE_ILLAGERBANNER_VERSION();
// NOLINTEND

} // namespace EquipItemDefinitionVersioning
