#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LevelConstants {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::add_lvalue_reference_t<char const[]> IS_SLEEPING_POSSIBLE();
#endif

MCNAPI ::std::add_lvalue_reference_t<char const[]> OVERWORLD_PLAYER_COUNT_TAG();

MCNAPI ::std::add_lvalue_reference_t<char const[]> SLEEPING_PLAYER_COUNT_TAG();

MCNAPI int const& SUBCHUNK_HEIGHT();
// NOLINTEND

} // namespace LevelConstants
