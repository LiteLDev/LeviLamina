#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/LevelChunkFormat.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
class SemVersionConstant;
// clang-format on

namespace SharedConstants {
// static variables
// NOLINTBEGIN
MCAPI ::SemVersionConstant const& CurrentGameSemVersion();

MCAPI ::LevelChunkFormat const& CurrentLevelChunkFormat();

#ifdef LL_PLAT_C
MCAPI int const& MajorVersion();
#endif

MCAPI ::std::add_lvalue_reference_t<char const[]> MajorVersionStringFormated();

MCAPI ::GameVersion const& MinimumCompatibleGameVersionForLevelData();

#ifdef LL_PLAT_C
MCAPI int const& MinorVersion();
#endif

MCAPI ::std::add_lvalue_reference_t<char const[]> MinorVersionStringFormated();

#ifdef LL_PLAT_C
MCAPI int const& NetworkProtocolVersion();

MCAPI int const& PatchVersion();
#endif

MCAPI ::std::add_lvalue_reference_t<char const[]> PatchVersionStringFormated();

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<char const[]> RevisionVersionStringFormated();
#endif
// NOLINTEND

} // namespace SharedConstants
