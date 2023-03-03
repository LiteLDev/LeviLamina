/**
 * @file  SharedConstants.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "CodeBuilder.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace SharedConstants.
 *
 */
namespace SharedConstants {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?CodeBuilderProtocolVersion\@SharedConstants\@\@3W4ProtocolVersion\@CodeBuilder\@\@B
     */
    MCAPI extern enum class CodeBuilder::ProtocolVersion const CodeBuilderProtocolVersion;
    /**
     * @symbol  ?CurrentActorDigestFormat\@SharedConstants\@\@3W4ActorDigestFormat\@\@B
     */
    MCAPI extern enum class ActorDigestFormat const CurrentActorDigestFormat;
    /**
     * @symbol  ?CurrentBlendVersion\@SharedConstants\@\@3W4BlendVersion\@\@B
     */
    MCAPI extern enum class BlendVersion const CurrentBlendVersion;
    /**
     * @symbol  ?CurrentGameSemVersion\@SharedConstants\@\@3VSemVersion\@\@B
     */
    MCAPI extern class SemVersion const CurrentGameSemVersion;
    /**
     * @symbol  ?CurrentLevelChunkFormat\@SharedConstants\@\@3W4LevelChunkFormat\@\@B
     */
    MCAPI extern enum class LevelChunkFormat const CurrentLevelChunkFormat;
    /**
     * @symbol  ?CurrentStorageVersion\@SharedConstants\@\@3W4StorageVersion\@\@B
     */
    MCAPI extern enum class StorageVersion const CurrentStorageVersion;
    /**
     * @symbol  ?CurrentSubChunkFormat\@SharedConstants\@\@3W4SubChunkFormat\@\@B
     */
    MCAPI extern enum class SubChunkFormat const CurrentSubChunkFormat;
    /**
     * @symbol  ?DevInitiallyMuteMusic\@SharedConstants\@\@3_NB
     */
    MCAPI extern bool const DevInitiallyMuteMusic;
    /**
     * @symbol  ?EduDiscoveryProtocolVersion\@SharedConstants\@\@3HB
     */
    MCAPI extern int const EduDiscoveryProtocolVersion;
    /**
     * @symbol  ?IsAnyBeta\@SharedConstants\@\@3_NB
     */
    MCAPI extern bool const IsAnyBeta;
    /**
     * @symbol  ?IsBeta\@SharedConstants\@\@3_NB
     */
    MCAPI extern bool const IsBeta;
    /**
     * @symbol  ?IsDevBuild\@SharedConstants\@\@3_NB
     */
    MCAPI extern bool const IsDevBuild;
    /**
     * @symbol  ?IsPlaytest\@SharedConstants\@\@3_NB
     */
    MCAPI extern bool const IsPlaytest;
    /**
     * @symbol  ?IsPreviewApp\@SharedConstants\@\@3_NB
     */
    MCAPI extern bool const IsPreviewApp;
    /**
     * @symbol  ?LevelDBCompressorID\@SharedConstants\@\@3HB
     */
    MCAPI extern int const LevelDBCompressorID;
    /**
     * @symbol  ?MajorVersion\@SharedConstants\@\@3HB
     */
    MCAPI extern int const MajorVersion;
    /**
     * @symbol  ?MaxChatLength\@SharedConstants\@\@3HB
     */
    MCAPI extern int const MaxChatLength;
    /**
     * @symbol  ?MinTickingChunksRadius\@SharedConstants\@\@3IB
     */
    MCAPI extern unsigned int const MinTickingChunksRadius;
    /**
     * @symbol  ?MinimumCompatibleGameVersionForLevelData\@SharedConstants\@\@3VGameVersion\@\@B
     */
    MCAPI extern class GameVersion const MinimumCompatibleGameVersionForLevelData;
    /**
     * @symbol  ?MinorVersion\@SharedConstants\@\@3HB
     */
    MCAPI extern int const MinorVersion;
    /**
     * @symbol  ?NetworkDefaultGamePort\@SharedConstants\@\@3GB
     */
    MCAPI extern unsigned short const NetworkDefaultGamePort;
    /**
     * @symbol  ?NetworkDefaultGamePortv6\@SharedConstants\@\@3GB
     */
    MCAPI extern unsigned short const NetworkDefaultGamePortv6;
    /**
     * @symbol  ?NetworkDefaultMaxConnections\@SharedConstants\@\@3HB
     */
    MCAPI extern int const NetworkDefaultMaxConnections;
    /**
     * @symbol  ?NetworkEphemeralPort\@SharedConstants\@\@3GB
     */
    MCAPI extern unsigned short const NetworkEphemeralPort;
    /**
     * @symbol  ?NetworkProtocolVersion\@SharedConstants\@\@3HB
     */
    MCAPI extern int const NetworkProtocolVersion;
    /**
     * @symbol  ?PatchVersion\@SharedConstants\@\@3HB
     */
    MCAPI extern int const PatchVersion;
    /**
     * @symbol  ?RevisionVersion\@SharedConstants\@\@3HB
     */
    MCAPI extern int const RevisionVersion;
    /**
     * @symbol  ?StoreVersion\@SharedConstants\@\@3HB
     */
    MCAPI extern int const StoreVersion;

};