#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BiomeIdType;
// clang-format on

namespace BiomeIdCompatibility {
// functions
// NOLINTBEGIN
MCNAPI ::std::string_view getFixedBiomeName(::BiomeIdType biomeId);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::BiomeIdType const& MAX_CUSTOM_BIOMES();
// NOLINTEND

} // namespace BiomeIdCompatibility
