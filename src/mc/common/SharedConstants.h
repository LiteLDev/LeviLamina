#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
class SemVersionConstant;
// clang-format on

namespace SharedConstants {
// static variables
// NOLINTBEGIN
MCNAPI ::SemVersionConstant const& CurrentGameSemVersion();

#ifdef LL_PLAT_C
MCNAPI int const& MajorVersion();
#endif

MCNAPI ::GameVersion const& MinimumCompatibleGameVersionForLevelData();

#ifdef LL_PLAT_C
MCNAPI int const& MinorVersion();

MCNAPI int const& NetworkProtocolVersion();

MCNAPI int const& PatchVersion();
#endif
// NOLINTEND

} // namespace SharedConstants
