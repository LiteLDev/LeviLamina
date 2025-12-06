#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SimpleRandom;
struct XoroshiroRandom;
// clang-format on

namespace br::worldgen::WorldGenRandomUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::variant<::SimpleRandom, ::XoroshiroRandom>
copySource(::std::variant<::SimpleRandom, ::XoroshiroRandom> const& source);
// NOLINTEND

} // namespace br::worldgen::WorldGenRandomUtils
