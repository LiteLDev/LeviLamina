#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/dimension/IDimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/saveddata/SavedData.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorReplication;
class BaseLightTextureImageBuilder;
class BiomeRegistry;
class Block;
class BlockEventDispatcher;
class BlockPos;
class BlockSource;
class ChunkBuildOrderPolicyBase;
class ChunkKey;
class ChunkLoadActionList;
class ChunkPos;
class ChunkSource;
class CircuitSystem;
class CompoundTag;
class DelayActionList;
class DimensionBrightnessRamp;
class DimensionHeightRange;
class EntityContext;
class FeatureTerrainAdjustments;
class GameEventDispatcher;
class HashedString;
class ILevel;
class ILevelStorageManagerConnector;
class LevelChunk;
class LevelChunkBuilderData;
class LevelChunkGarbageCollector;
class LevelChunkMetaData;
class Packet;
class Player;
class PostprocessingManager;
class RuntimeLightingManager;
class Scheduler;
class Seasons;
class SubChunkInterlocker;
class SubChunkPos;
class TaskGroup;
class TickingAreaList;
class Vec3;
class VillageManager;
class WeakEntityRef;
class Weather;
class WireframeQueue;
class WorldGenerator;
struct ActorBlockSyncMessage;
struct ActorChunkTransferEntry;
struct ActorUniqueID;
struct ActorUnloadedChunkTransferEntry;
struct Brightness;
struct BrightnessPair;
struct IntProvider;
struct NetworkIdentifierWithSubId;
struct UpdateSubChunkBlocksChangedInfo;
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class Dimension : public ::IDimension,
                  public ::LevelListener,
                  public ::SavedData,
                  public ::Bedrock::EnableNonOwnerReferences,
                  public ::EnableGetWeakRef<::Dimension>,
                  public ::std::enable_shared_from_this<::Dimension> {
public:
    // Dimension inner types define
    using ActorTagList = ::std::vector<::std::unique_ptr<::CompoundTag>>;

    using ChunkPosToActorListMap = ::std::unordered_map<::ChunkPos, ::std::vector<::std::unique_ptr<::CompoundTag>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorChunkTransferEntry>> mActorChunkTransferQueue;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkKey, ::std::vector<::ActorUnloadedChunkTransferEntry>>>
                                                                                      mActorUnloadedChunkTransferQueue;
    ::ll::TypedStorage<8, 8, ::ILevel&>                                               mLevel;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange>                                  mHeightRange;
    ::ll::TypedStorage<2, 2, short>                                                   mSeaLevel;
    ::ll::TypedStorage<1, 1, uchar>                                                   mMonsterSpawnBlockLightLimit;
    ::ll::TypedStorage<4, 32, ::IntProvider>                                          mMonsterSpawnLightTest;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::BlockSource>>                              mBlockSource;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasWeather;
    ::ll::TypedStorage<4, 28, float[7]>                                               mMobsPerChunkSurface;
    ::ll::TypedStorage<4, 28, float[7]>                                               mMobsPerChunkUnderground;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                                        mDefaultBrightness;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseLightTextureImageBuilder>>       mLightTextureImageBuilder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DimensionBrightnessRamp>>            mDimensionBrightnessRamp;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaData>>                mTargetMetaData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RuntimeLightingManager>>             mRuntimeLightingManager;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                         mId;
    ::ll::TypedStorage<1, 1, bool>                                                    mUltraWarm;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasCeiling;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasSkylight;
    ::ll::TypedStorage<1, 1, ::Brightness>                                            mSkyDarken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockEventDispatcher>>               mDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                          mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                          mChunkGenTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PostprocessingManager>>              mPostProcessingManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkInterlocker>>                mSubChunkInterlocker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>                        mChunkSource;
    ::ll::TypedStorage<8, 8, ::WorldGenerator*>                                       mWorldGenerator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Weather>>                            mWeather;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Seasons>>                            mSeasons;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameEventDispatcher>>                mGameEventDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CircuitSystem>>                      mCircuitSystem;
    ::ll::TypedStorage<4, 4, int const>                                               CIRCUIT_TICK_RATE;
    ::ll::TypedStorage<4, 4, int>                                                     mCircuitSystemTickRate;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::WeakEntityRef>> mActorIDEntityIDMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                         mDisplayEntities;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WireframeQueue>>                    mWireframeQueue;
    ::ll::TypedStorage<8, 72, ::FeatureTerrainAdjustments>                            mFeatureTerrainAdjustments;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::vector<::std::unique_ptr<::CompoundTag>>>>
                                                                             mLimboEntities;
    ::ll::TypedStorage<8, 16, ::std::set<::ActorUniqueID>>                   mEntitiesToMoveChunks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TickingAreaList>>          mTickingAreaList;
    ::ll::TypedStorage<8, 632, ::LevelChunkGarbageCollector>                 mLevelChunkGarbageCollector;
    ::ll::TypedStorage<8, 16, ::std::set<::ActorUniqueID>>                   mWitherIDs;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelChunkBuilderData>>     mLevelChunkBuilderData;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mLastPruneTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mLastStructurePruneTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkBuildOrderPolicyBase>> mChunkBuildOrderPolicy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VillageManager>>            mVillageManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkIdentifierWithSubId>>   mTemporaryPlayerIds;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkLoadActionList>>       mChunkLoadActionList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DelayActionList>>           mDelayActionList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubChunkPos, ::UpdateSubChunkBlocksChangedInfo>>
                                                              mBlocksChangedBySubChunkMap;
    ::ll::TypedStorage<8, 112, ::ActorReplication>            mActorReplication;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>> mPlayersToReplicate;
    ::ll::TypedStorage<1, 1, bool>                            mRunChunkGenWatchDog;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Dimension() /*override*/;

    // vIndex: 13
    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    // vIndex: 14
    virtual void tick();

    // vIndex: 15
    virtual void tickRedstone();

    // vIndex: 16
    virtual ::std::unique_ptr<::WorldGenerator> createGenerator(::br::worldgen::StructureSetRegistry const&) = 0;

    // vIndex: 17
    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&) = 0;

    // vIndex: 18
    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&) = 0;

    // vIndex: 6
    virtual void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector
    ) /*override*/;

    // vIndex: 19
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const = 0;

    // vIndex: 1
    virtual bool isNaturalDimension() const /*override*/;

    // vIndex: 20
    virtual bool isValidSpawn(int x, int z) const;

    // vIndex: 21
    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;

    // vIndex: 22
    virtual short getCloudHeight() const;

    // vIndex: 23
    virtual ::HashedString getDefaultBiome() const;

    // vIndex: 24
    virtual bool mayRespawnViaBed() const;

    // vIndex: 25
    virtual ::BlockPos getSpawnPos() const;

    // vIndex: 26
    virtual int getSpawnYPosition() const;

    // vIndex: 27
    virtual bool showSky() const;

    // vIndex: 28
    virtual float getTimeOfDay(int time, float a) const;

    // vIndex: 2
    virtual ::DimensionType getDimensionId() const /*override*/;

    // vIndex: 10
    virtual void forEachPlayer(::brstd::function_ref<bool(::Player&)> callback) const /*override*/;

    // vIndex: 8
    virtual ::BiomeRegistry& getBiomeRegistry() /*override*/;

    // vIndex: 7
    virtual ::BiomeRegistry const& getBiomeRegistry() const /*override*/;

    // vIndex: 12
    virtual ::BlockSource& getBlockSourceFromMainChunkSource() const /*override*/;

    // vIndex: 11
    virtual ::Actor* fetchEntity(::ActorUniqueID actorID, bool getRemoved) const /*override*/;

    // vIndex: 19
    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    // vIndex: 1
    virtual void deserialize(::CompoundTag const& tag) /*override*/;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag) const /*override*/;

    // vIndex: 29
    virtual void sendBroadcast(::Packet const& packet, ::Player* except);

    // vIndex: 30
    virtual bool is2DPositionRelevantForPlayer(::BlockPos const& position, ::Player& player) const;

    // vIndex: 3
    virtual void
    sendPacketForPosition(::BlockPos const& position, ::Packet const& packet, ::Player const* except) /*override*/;

    // vIndex: 4
    virtual void sendPacketForEntity(::Actor const& actor, ::Packet const& packet, ::Player const* except) /*override*/;

    // vIndex: 31
    virtual bool isActorRelevantForPlayer(::Player& player, ::Actor const& actor) const;

    // vIndex: 8
    virtual void onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1) /*override*/;

    // vIndex: 4
    virtual void onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    ) /*override*/;

    // vIndex: 23
    virtual void onLevelDestruction(::std::string const&) /*override*/;

    // vIndex: 32
    virtual ::BaseLightTextureImageBuilder* getLightTextureImageBuilder() const;

    // vIndex: 33
    virtual ::DimensionBrightnessRamp const& getBrightnessRamp() const;

    // vIndex: 34
    virtual void startLeaveGame();

    // vIndex: 5
    virtual void flushLevelChunkGarbageCollector() /*override*/;

    // vIndex: 35
    virtual ::std::unique_ptr<::ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    // vIndex: 36
    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion) = 0;

    // vIndex: 37
    virtual ::std::unique_ptr<::ChunkSource>
        _wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource>, ::StorageVersion) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Dimension(
        ::ILevel&              level,
        ::DimensionType        dimId,
        ::DimensionHeightRange heightRange,
        ::Scheduler&           callbackContext,
        ::std::string          name
    );

    MCAPI void _addActorUnloadedChunkTransferToQueue(
        ::ChunkPos const&                fromChunkPos,
        ::ChunkPos const&                toChunkPos,
        ::DimensionType                  dimId,
        ::std::string&                   actorStorageKey,
        ::std::unique_ptr<::CompoundTag> entityTag
    );

    MCAPI void _completeEntityTransfer(::OwnerPtr<::EntityContext> entity);

    MCAPI void _processEntityChunkTransfers();

    MCAPI void _sendBlocksChangedPackets();

    MCAPI void _tickEntityChunkMoves();

    MCAPI void addWither(::ActorUniqueID const& id);

    MCAPI float distanceToNearestPlayerSqr2D(::Vec3 origin);

    MCAPI ::Player* fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const;

    MCAPI ::Player* fetchNearestAttackablePlayer(::Actor& source, float maxDist) const;

    MCAPI ::Player* fetchNearestInteractablePlayer(::Vec3 const& searchPos, float maxDist) const;

    MCAPI ::Player* fetchNearestPlayer(
        ::Vec3 const&                                searchPos,
        float                                        maxDist,
        bool                                         isFetchAny,
        ::brstd::function_ref<bool(::Player const&)> playerFilter
    ) const;

    MCAPI ::Player* findPlayer(::brstd::function_ref<bool(::Player const&)> pred) const;

    MCAPI void flagEntityforChunkMove(::Actor& e);

    MCAPI ushort getHeightInSubchunks() const;

    MCAPI float getMoonBrightness() const;

    MCAPI ::Brightness getOldSkyDarken(float a);

    MCAPI bool isBrightOutside() const;

    MCAPI bool operator==(::Dimension const& rhs) const;

    MCAPI void removeActorByID(::ActorUniqueID const& id);

    MCAPI void
    transferEntity(::ChunkPos const& fromChunkPos, ::Vec3 const& spawnPos, ::std::unique_ptr<::CompoundTag> entityTag);

    MCAPI void transferEntityToUnloadedChunk(::Actor& actor, ::LevelChunk* fromChunk);

    MCAPI void transferEntityToUnloadedChunk(
        ::ChunkPos const&                fromChunkPos,
        ::ChunkPos const&                toChunkPos,
        ::DimensionType                  dimId,
        ::std::string&                   actorStorageKey,
        ::std::unique_ptr<::CompoundTag> entityTag
    );

    MCAPI void tryGarbageCollectStructures();

    MCAPI void tryLoadLimboEntities(::ChunkPos const& loadPos);

    MCAPI void unregisterDisplayEntity(::WeakRef<::EntityContext> entityRef);

    MCAPI void unregisterEntity(::ActorUniqueID const& actorID);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<float const[]> MOON_BRIGHTNESS_PER_PHASE();

    MCAPI static ::std::chrono::seconds const& STRUCTURE_PRUNE_INTERVAL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevel&              level,
        ::DimensionType        dimId,
        ::DimensionHeightRange heightRange,
        ::Scheduler&           callbackContext,
        ::std::string          name
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI void $tick();

    MCAPI void $tickRedstone();

    MCAPI void $initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector
    );

    MCFOLD bool $isNaturalDimension() const;

    MCFOLD bool $isValidSpawn(int x, int z) const;

    MCAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;

    MCFOLD short $getCloudHeight() const;

    MCAPI ::HashedString $getDefaultBiome() const;

    MCFOLD bool $mayRespawnViaBed() const;

    MCFOLD ::BlockPos $getSpawnPos() const;

    MCFOLD int $getSpawnYPosition() const;

    MCFOLD bool $showSky() const;

    MCAPI float $getTimeOfDay(int time, float a) const;

    MCAPI ::DimensionType $getDimensionId() const;

    MCAPI void $forEachPlayer(::brstd::function_ref<bool(::Player&)> callback) const;

    MCFOLD ::BiomeRegistry& $getBiomeRegistry();

    MCFOLD ::BiomeRegistry const& $getBiomeRegistry() const;

    MCAPI ::BlockSource& $getBlockSourceFromMainChunkSource() const;

    MCAPI ::Actor* $fetchEntity(::ActorUniqueID actorID, bool getRemoved) const;

    MCAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI void $deserialize(::CompoundTag const& tag);

    MCAPI void $serialize(::CompoundTag& tag) const;

    MCAPI void $sendBroadcast(::Packet const& packet, ::Player* except);

    MCAPI bool $is2DPositionRelevantForPlayer(::BlockPos const& position, ::Player& player) const;

    MCAPI void $sendPacketForPosition(::BlockPos const& position, ::Packet const& packet, ::Player const* except);

    MCAPI void $sendPacketForEntity(::Actor const& actor, ::Packet const& packet, ::Player const* except);

    MCAPI bool $isActorRelevantForPlayer(::Player& player, ::Actor const& actor) const;

    MCAPI void $onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1);

    MCAPI void $onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    );

    MCAPI void $onLevelDestruction(::std::string const&);

    MCAPI ::BaseLightTextureImageBuilder* $getLightTextureImageBuilder() const;

    MCAPI ::DimensionBrightnessRamp const& $getBrightnessRamp() const;

    MCAPI void $startLeaveGame();

    MCAPI void $flushLevelChunkGarbageCollector();

    MCAPI ::std::unique_ptr<::ChunkBuildOrderPolicyBase> $_createChunkBuildOrderPolicy();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForSavedData();

    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIDimension();

    MCAPI static void** $vftableForLevelListener();
    // NOLINTEND
};
