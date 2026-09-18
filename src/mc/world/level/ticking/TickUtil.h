#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Pos;
class Random;
// clang-format on

namespace TickUtil {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI void forRandomOffset(uchar maxx, uchar maxz, ::Random& random, ::std::function<void(::Pos const&)> action);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& TICKING_AREAS_PREFIX();
// NOLINTEND

} // namespace TickUtil
