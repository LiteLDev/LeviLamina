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

MCAPI_C int const& MajorVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> MajorVersionStringFormated();

MCAPI ::GameVersion const& MinimumCompatibleGameVersionForLevelData();

MCAPI_C int const& MinorVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> MinorVersionStringFormated();

MCAPI_C int const& NetworkProtocolVersion();

MCAPI_C int const& PatchVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> PatchVersionStringFormated();

MCAPI_S ::std::add_lvalue_reference_t<char const[]> RevisionVersionStringFormated();
// NOLINTEND

} // namespace SharedConstants
