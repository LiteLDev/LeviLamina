#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPatternBuilder;
class BlockSource;
// clang-format on

namespace WitherBossSpawnUtilities {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::BlockPatternBuilder> createWitherBuilder(::BlockSource& region);

MCNAPI ::std::unique_ptr<::BlockPatternBuilder> createWitherBuilderForTShape(::BlockSource& region);
// NOLINTEND

} // namespace WitherBossSpawnUtilities
