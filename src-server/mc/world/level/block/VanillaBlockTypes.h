#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
// clang-format on

namespace VanillaBlockTypes {
// functions
// NOLINTBEGIN
MCAPI void registerBlockMappings();

MCAPI void registerBlocks(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
// NOLINTEND

}
