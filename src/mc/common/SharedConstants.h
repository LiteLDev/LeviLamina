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
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI int getVersionCode();
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::CodeBuilder::ProtocolVersion const& CodeBuilderProtocolVersion();

MCAPI ::ActorDigestFormat const& CurrentActorDigestFormat();

MCAPI ::BlendVersion const& CurrentBlendVersion();

MCAPI ::SemVersionConstant const& CurrentGameSemVersion();

MCAPI ::LevelChunkFormat const& CurrentLevelChunkFormat();

MCAPI ::StorageVersion const& CurrentStorageVersion();

MCAPI ::SubChunkFormat const& CurrentSubChunkFormat();

#ifdef LL_PLAT_C
MCAPI bool const& DebugSettingsEnabled();

MCAPI bool const& DevInitiallyMuteMusic();
#endif

MCAPI uint64 const& DeviceIdMaxLength();

#ifdef LL_PLAT_C
MCAPI int const& EduDiscoveryProtocolVersion();

MCAPI bool const& IsAdvancedGraphicsEnabled();

MCAPI bool const& IsAndroidPlatform();
#endif

MCAPI bool const& IsAnyBeta();

#ifdef LL_PLAT_C
MCAPI bool const& IsBeta();

MCAPI bool const& IsCreatorEditorBuild();

MCAPI bool const& IsDevBuild();

MCAPI bool const& IsIosPlatform();

MCAPI bool const& IsNxPlatform();

MCAPI bool const& IsPS4Platform();

MCAPI bool const& IsPS5Platform();

MCAPI bool const& IsPlaytest();

MCAPI bool const& IsPreviewApp();

MCAPI bool const& IsSonyPlatform();

MCAPI bool const& IsSupportingFramePacing();

MCAPI bool const& IsUsingOptimizedFrameBuilder();

MCAPI bool const& IsXboxPlatform();
#endif

MCAPI int const& MajorVersion();

MCAPI ::std::add_lvalue_reference_t<char const[]> MajorVersionStringFormated();

#ifdef LL_PLAT_C
MCAPI int const& MaxChatLength();
#endif

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

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<char const[]> RevisionVersionStringFormated();
#endif

#ifdef LL_PLAT_C
MCAPI int const& StoreVersion();

MCAPI bool const& TestInfraEnabled();

MCAPI bool const& XboxLiveEnabled();
#endif
// NOLINTEND

} // namespace SharedConstants
