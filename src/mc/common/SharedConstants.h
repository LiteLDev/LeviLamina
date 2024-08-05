#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/ProtocolVersion.h"
#include "mc/entity/utilities/ActorDigestFormat.h"
#include "mc/enums/BlendVersion.h"
#include "mc/enums/StorageVersion.h"
#include "mc/world/level/LevelChunkFormat.h"
#include "mc/world/level/chunk/SubChunkFormat.h"

namespace SharedConstants {
// NOLINTBEGIN
MCAPI extern ::CodeBuilder::ProtocolVersion const CodeBuilderProtocolVersion;

MCAPI extern ::ActorDigestFormat const CurrentActorDigestFormat;

MCAPI extern ::BlendVersion const CurrentBlendVersion;

MCAPI extern class SemVersion const CurrentGameSemVersion;

MCAPI extern ::LevelChunkFormat const CurrentLevelChunkFormat;

MCAPI extern ::StorageVersion const CurrentStorageVersion;

MCAPI extern ::SubChunkFormat const CurrentSubChunkFormat;

MCAPI extern bool const DevInitiallyMuteMusic;

MCAPI extern uint64 const DeviceIdMaxLength;

MCAPI extern int const EduDiscoveryProtocolVersion;

MCAPI extern bool const IsAnyBeta;

MCAPI extern bool const IsBeta;

MCAPI extern bool const IsCreatorEditorBuild;

MCAPI extern bool const IsDevBuild;

MCAPI extern bool const IsPS4Platform;

MCAPI extern bool const IsPlaytest;

MCAPI extern bool const IsPreviewApp;

MCAPI extern bool const IsWin32Platform;

MCAPI extern bool const IsXboxPlatform;

MCAPI extern int const LevelDBCompressorID;

MCAPI extern int const MajorVersion;

MCAPI extern int const MaxChatLength;

MCAPI extern uint const MinTickingChunksRadius;

MCAPI extern class GameVersion const MinimumCompatibleGameVersionForLevelData;

MCAPI extern int const MinorVersion;

MCAPI extern ushort const NetworkDefaultGamePort;

MCAPI extern ushort const NetworkDefaultGamePortv6;

MCAPI extern int const NetworkDefaultMaxConnections;

MCAPI extern ushort const NetworkEphemeralPort;

MCAPI extern int const NetworkMaxPlayerCount;

MCAPI extern int const NetworkProtocolVersion;

MCAPI extern int const PatchVersion;

MCAPI extern int const RevisionVersion;

MCAPI extern int const StoreVersion;
// NOLINTEND

}; // namespace SharedConstants
