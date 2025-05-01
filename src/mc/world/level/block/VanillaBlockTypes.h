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
MCNAPI void registerBlockMappings();

MCNAPI void registerBlocks(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
// NOLINTEND

} // namespace VanillaBlockTypes
