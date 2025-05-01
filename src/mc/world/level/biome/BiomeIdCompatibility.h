#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

namespace BiomeIdCompatibility {
// functions
// NOLINTBEGIN
MCNAPI ushort getFixedId(::std::string const& biomeName);

MCNAPI bool isReserved(ushort id, ::BaseGameVersion const& baseGameVersion);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ushort const& MAX_CUSTOM_BIOMES();
// NOLINTEND

} // namespace BiomeIdCompatibility
