#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
struct BiomeIdType;
// clang-format on

namespace BiomeIdCompatibility {
// functions
// NOLINTBEGIN
MCNAPI ::std::string_view getFixedBiomeName(::BiomeIdType biomeId);

MCNAPI bool isReserved(::BiomeIdType id, ::BaseGameVersion const& baseGameVersion);
// NOLINTEND

} // namespace BiomeIdCompatibility
