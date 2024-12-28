#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

namespace BiomeIdCompatibility {
// functions
// NOLINTBEGIN
MCAPI ushort getFixedId(::std::string const& biomeName);

MCAPI bool isReserved(ushort id, ::BaseGameVersion const& baseGameVersion);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ushort const& MAX_CUSTOM_BIOMES();
// NOLINTEND

} // namespace BiomeIdCompatibility
