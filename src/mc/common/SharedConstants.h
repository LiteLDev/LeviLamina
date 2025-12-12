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

MCAPI_C bool const& DevInitiallyMuteMusic();

MCAPI uint64 const& DeviceIdMaxLength();

MCAPI_C int const& EduDiscoveryProtocolVersion();

MCAPI bool const& IsAnyBeta();

MCAPI_C bool const& IsBeta();

MCAPI_C bool const& IsCreatorEditorBuild();

MCAPI bool const& IsDevBuild();

MCAPI_C bool const& IsNxPlatform();

MCAPI_C bool const& IsPS5Platform();

MCAPI_C bool const& IsPlaytest();

MCAPI_C bool const& IsPreviewApp();

MCAPI_C bool const& IsSonyPlatform();

MCAPI_C bool const& IsXboxPlatform();

MCAPI int const& MajorVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> MajorVersionStringFormated();

MCAPI_C int const& MaxChatLength();

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

MCAPI_S ::std::add_lvalue_reference_t<char const[]> RevisionVersionStringFormated();

MCAPI_C int const& StoreVersion();

MCAPI_C bool const& TestInfraEnabled();

MCAPI_C bool const& XboxLiveEnabled();
// NOLINTEND

} // namespace SharedConstants
