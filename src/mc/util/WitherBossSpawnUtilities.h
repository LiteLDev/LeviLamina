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
MCAPI ::std::unique_ptr<::BlockPatternBuilder> createWitherBuilder(::BlockSource& region);

MCAPI ::std::unique_ptr<::BlockPatternBuilder> createWitherBuilderForTShape(::BlockSource& region);
// NOLINTEND

} // namespace WitherBossSpawnUtilities
