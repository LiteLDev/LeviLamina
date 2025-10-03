#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/ProtocolVersion.h"
#include "mc/world/level/chunk/ActorDigestFormat.h"
#include "mc/world/level/chunk/BlendVersion.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/chunk/SubChunkFormat.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
class SemVersionConstant;
// clang-format on

namespace SharedConstants {
// static variables
// NOLINTBEGIN
MCAPI ::CodeBuilder::ProtocolVersion const& CodeBuilderProtocolVersion();

MCAPI ::ActorDigestFormat const& CurrentActorDigestFormat();

MCAPI ::BlendVersion const& CurrentBlendVersion();

MCAPI ::SemVersionConstant const& CurrentGameSemVersion();

MCAPI ::LevelChunkFormat const& CurrentLevelChunkFormat();

MCAPI ::StorageVersion const& CurrentStorageVersion();

MCAPI ::SubChunkFormat const& CurrentSubChunkFormat();

MCAPI uint64 const& DeviceIdMaxLength();

MCAPI bool const& IsAnyBeta();

MCAPI bool const& IsDevBuild();

MCAPI bool const& IsPS4Platform();

MCAPI int const& MajorVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> MajorVersionStringFormated();

MCAPI uint const& MinTickingChunksRadius();

MCAPI ::GameVersion const& MinimumCompatibleGameVersionForLevelData();

MCAPI int const& MinorVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> MinorVersionStringFormated();

MCAPI ushort const& NetworkDefaultGamePort();

MCAPI ushort const& NetworkDefaultGamePortv6();

MCAPI int const& NetworkDefaultMaxConnections();

MCAPI ushort const& NetworkEphemeralPort();

MCAPI int const& NetworkMaxPlayerCount();

MCAPI int const& NetworkProtocolVersion();

MCAPI int const& PatchVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> PatchVersionStringFormated();

MCAPI int const& RevisionVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> RevisionVersionStringFormated();
// NOLINTEND

} // namespace SharedConstants
