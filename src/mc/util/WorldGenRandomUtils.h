#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SimpleRandom;
class XoroshiroRandom;
// clang-format on

namespace br::worldgen::WorldGenRandomUtils {
// NOLINTBEGIN
MCAPI std::variant<class SimpleRandom, class XoroshiroRandom>
      copySource(std::variant<class SimpleRandom, class XoroshiroRandom> const&);
// NOLINTEND

}; // namespace br::worldgen::WorldGenRandomUtils
