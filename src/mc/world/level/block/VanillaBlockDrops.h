#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockDefinitionGroup;
class Experiments;
// clang-format on

namespace VanillaBlockDrops {
// functions
// NOLINTBEGIN
MCAPI void configureBlockDrops(
    ::BaseGameVersion const& baseGameVersion,
    ::Experiments const&     experiments,
    ::BlockDefinitionGroup*  blockDefinitionGroup
);
// NOLINTEND

} // namespace VanillaBlockDrops
