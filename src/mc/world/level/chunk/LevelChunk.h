#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/VolumeOf.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/chunk/ChunkCachedDataState.h"
#include "mc/world/level/chunk/ChunkDebugDisplaySavedState.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/ChunkTerrainDataState.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/chunk/LevelChunkNeighbor.h"
#include "mc/world/level/chunk/LevelChunkTag.h"
#include "mc/world/level/chunk/SubChunkInitMode.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/levelgen/v1/HardcodedSpawnAreaType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Biome;
class BiomeRegistry;
class Block;
class BlockActor;
class BlockPalette;
class BlockPos;
class BlockSource;
class BlockTickingQueue;
class BlockVolume;
class BoundingBox;
class ChunkBlockPos;
class ChunkLocalHeight;
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class Dimension;
class DimensionHeightRange;
class EntityContext;
class GameEventListenerRegistry;
class HeightmapWrapper;
class IDataInput;
class IDataOutput;
class Level;
class LevelChunkBlockActorAccessToken;
class LevelChunkMetaData;
class LevelChunkVolumeData;
class Random;
class SaveContext;
class SpinLockImpl;
class StringByteInput;
class StringByteOutput;
class SubChunkPos;
class Vec3;
class WeakEntityRef;
class Weather;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct ActorUniqueID;
struct BiomeChunkData;
struct BiomeChunkState;
struct BlockID;
struct Brightness;
struct BrightnessPair;
struct ColumnCachedData;
struct DeserializationChanges;
struct DirtyTicksCounter;
struct LevelChunkPhase1Deleter;
struct NibblePair;
struct SubChunk;
struct Tick;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class LevelChunk {
public:
    // LevelChunk inner types declare
    // clang-format off
    class Neighbors;
    struct SpawningArea;
    struct Telemetry;
    // clang-format on

    // LevelChunk inner types define
    enum class Finalization : int {
        NeedsInstaticking = 0,
        NeedsPopulation   = 1,
        Done              = 2,
    };

    class Neighbors {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mNeighbors;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Neighbors();

        MCAPI explicit Neighbors(::StringByteInput& stream);

        MCAPI bool hasNeighbor(::LevelChunkNeighbor neighbor) const;

        MCAPI bool isSurrounded() const;

        MCAPI void serialize(::StringByteOutput& stream) const;

        MCAPI void setNeighbor(::LevelChunkNeighbor neighbor, bool value);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::array<::std::pair<::LevelChunkNeighbor, ::ChunkPos>, 8> const& sOffsetMap();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor();

        MCAPI void* $ctor(::StringByteInput& stream);
        // NOLINTEND
    };

    struct Telemetry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mWasStored;
        ::ll::TypedStorage<1, 1, bool> mWasGenerated;
        ::ll::TypedStorage<1, 1, bool> mWasRequestedInsideTickRange;
        ::ll::TypedStorage<1, 1, bool> mWasLoadedInsideTickRange;
        // NOLINTEND
    };

    using BlockList = ::std::vector<::BlockPos>;

    using OwnedBlockActorMap = ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>;

    using BlockActorVector = ::std::vector<::std::shared_ptr<::BlockActor>>;

    struct SpawningArea {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 24, ::BoundingBox>           aabb;
        ::ll::TypedStorage<1, 1, ::HardcodedSpawnAreaType> type;
        // NOLINTEND
    };

    using BBorder = bool;

    enum class DeserializeEntityResult : int {
        Failed    = 0,
        Succeeded = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mBlockEntityAccessLock;
    ::ll::TypedStorage<8, 8, ::Level&>                                          mLevel;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                      mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                       mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                       mMax;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                        mPosition;
    ::ll::TypedStorage<1, 1, bool>                                              mLightingFixupDone;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                               mLightingTaskActive;
    ::ll::TypedStorage<1, 1, bool>                                              mReadOnly;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                                    mGenerator;
    ::ll::TypedStorage<1, 2, ::std::optional<::LevelChunkFormat>>               mLoadedFormat;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSerializedEntitiesBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mFailedSerializedEntitiesBuffer;
    ::ll::TypedStorage<1, 1, bool>                                              mHadSerializedEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>                       mUnresolvedActorLinks;
    ::ll::TypedStorage<1, 1, ::std::atomic<::ChunkState>>                       mLoadState;
    ::ll::TypedStorage<1, 1, ::ChunkTerrainDataState>                           mTerrainDataState;
    ::ll::TypedStorage<1, 1, ::ChunkDebugDisplaySavedState>                     mDebugDisplaySavedState;
    ::ll::TypedStorage<1, 1, ::ChunkCachedDataState>                            mCachedDataState;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                   mCachedDataStateSpinLock;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                   mClientRequestHeightmapAdjustSpinLock;
    ::ll::TypedStorage<8, 8, ::Tick>                                            mLastTick;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTickingQueue>>            mTickQueue;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTickingQueue>>            mRandomTickQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunk>>                        mSubChunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SpinLockImpl>>> mSubChunkSpinLocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> mBiomes;
    ::ll::TypedStorage<2, 512, ::std::array<::BiomeChunkData, 256>>                         m2DBiomes;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                           mBiomesMutex;
    ::ll::TypedStorage<4, 2048, ::std::array<::ColumnCachedData, 256>>                      mCachedData;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>                       mHeightmap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<short>>>                       mPreWorldGenHeightmap;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight>                                            mNonAirMaxHeight;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<ushort, ::BiomeChunkState>>              mBiomeStates;
    ::ll::TypedStorage<2, 2, ushort>                                                        m3dBiomeStackSize;
    ::ll::TypedStorage<1, 1, bool>                                                          mHasCachedTemperatureNoise;
    ::ll::TypedStorage<1, 256, ::std::array<bool, 256>>                                     mBorderBlockMap;
    ::ll::TypedStorage<4, 4, int>                                                           mCurrentInstatick;
    ::ll::TypedStorage<4, 4, ::LevelChunk::Finalization>                                    mFinalized;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsRedstoneLoaded;
    ::ll::TypedStorage<1, 1, bool>                                                          mOwnedByTickingThread;
    ::ll::TypedStorage<1, 1, bool>                                                          mUse3DBiomeMaps;
    ::ll::TypedStorage<1, 1, bool>                                                          mLevelChunkHas3dBiomeTag;
    ::ll::TypedStorage<1, 4, ::LevelChunk::Telemetry>                                       mTelemetry;
    ::ll::TypedStorage<4, 48, ::DirtyTicksCounter[6]>                 mFullChunkDirtyTicksCounters;
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                     mChunkActorsDirtyTicksCounter;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>> mRainHeights;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>         mEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>           mRemovedActorStorageKeys;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>> mBlockEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockActor>>> mPreservedBlockEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>>      mVolumes;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                                mDefaultBrightness;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunk::SpawningArea>>      mSpawningAreas;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>         mLastNetworkLightingTime;
    ::ll::TypedStorage<8, 8, uint64>                                          mLoadedMetaDataHash;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaData>>        mMetaData;
    ::ll::TypedStorage<1, 1, bool>                                            mClientNeedsToRequestSubChunks;
    ::ll::TypedStorage<1, 1, bool>                                            mLevelChunkHasHadOriginalLighting;
    ::ll::TypedStorage<4, 16, float[2][2]>                                    mChunkInterpolants;
    ::ll::TypedStorage<1, 1, bool>                                            mbChunkHasConverterTag;
    ::ll::TypedStorage<1, 1, ::LevelChunk::Neighbors>                         mSavedNeighbors;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                           mGenerationSeed;
    ::ll::TypedStorage<1, 1, bool>                                            mGeneratedPreCavesAndCliffsBlending;
    ::ll::TypedStorage<1, 1, bool>                                            mOnChunkLoadedCalled;
    ::ll::TypedStorage<1, 1, bool>                                            mAllSerializedEntitiesLoaded;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mOutOfBoundsEntitiesBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mOutOfBoundsBlockEntitiesBuffer;
    ::ll::TypedStorage<1, 1, bool>                                            mSaveNonActorDataIfDirty;
    ::ll::TypedStorage<1, 1, bool>                                            mSaveIfNeverSaved;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                              mSnowRandomValue;
    ::ll::TypedStorage<1, 1, bool>                                            mHasSubChunksToPrune;
    ::ll::TypedStorage<1, 1, bool>                                            mHaveSubChunksBeenPruned;
    ::ll::TypedStorage<1, 1, bool>                                            mShouldShiftUpFlatWorldSubChunks;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                 mSubChunksToPruneLock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<::SubChunk>>>    mSubChunksToPruneOutsideRange;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameEventListenerRegistry>> mGameEventListenerRegistry;
    ::ll::TypedStorage<1, 1, bool>                                            mIsClientGenerated;
    ::ll::TypedStorage<1, 1, bool>                                            mWasClientGenerated;
    ::ll::TypedStorage<1, 1, bool>                                            mIsEmptyClientChunk;
    ::ll::TypedStorage<1, 1, bool>                     mActorStorageUpdatedAfterCheckingForReplacementData;
    ::ll::TypedStorage<8, 856, ::LevelChunkVolumeData> mLevelChunkVolumeData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelChunk(
        ::Dimension&       dimension,
        ::ChunkPos const&  cp,
        bool               readOnly,
        ::SubChunkInitMode initBlocks,
        bool               initializeMetaData
    );

    MCAPI void _addEntityToVolumes(::gsl::not_null<::Actor*> actor);

    MCAPI void _changeTerrainDataState(::ChunkTerrainDataState from, ::ChunkTerrainDataState to);

    MCAPI void _checkAndInferMetaDataAfterDeserialization();

    MCAPI ::std::shared_ptr<::BlockActor> _createBlockEntity(
        ::BlockPos const& block,
        ::BlockSource*    currentSource,
        ::Block const&    current,
        ::Block const&    old
    );

    MCAPI void _deserializeBiomes(::IDataInput& stream, ::BiomeRegistry const& biomeRegistry, bool fromNetwork);

    MCAPI void _deserializeBlockEntities(
        ::IDataInput&                                                           stream,
        ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>& blockEntityMap
    );

    MCAPI void _deserializeCCsubChunks(short index, ::StringByteInput& stream);

    MCAPI ::LevelChunk::DeserializeEntityResult
    _deserializeEntity(::BlockSource& source, ::IDataInput& stream, ::std::vector<::ActorLink>& links);

    MCAPI bool _deserializeSubChunk(short index, ::StringByteInput& stream);

    MCFOLD void _disableBlockEntityAccessForThisThread() const;

    MCFOLD void _enableBlockEntityAccessForThisThread() const;

    MCAPI void _fixupCommandBlocksOnTickingQueue(::BlockSource& tickRegion);

    MCAPI void _fixupCorruptedBlockActors(
        ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>& deserialized,
        ::buffer_span_mut<::SubChunk>                                           subchunks
    );

    MCAPI void _generateOriginalLighting(::ChunkViewSource& neighborhood, bool enforceBorderCheck);

    MCAPI void _generateOriginalLightingSubChunk(::BlockSource& source, uint64 subchunkIdx, bool);

    MCFOLD ::ChunkTerrainDataState _getTerrainDataState() const;

    MCAPI void _lightingCallbacks(
        ::ChunkBlockPos const& pos,
        ::Block const&         old,
        ::Block const&         current,
        ::BlockSource*         currentSource
    );

    MCAPI void _makeUniformBiomes(::Biome const& biome);

    MCAPI void _onRandomTickingQueueChanged();

    MCAPI void _onTickingQueueChanged();

    MCAPI void _placeBlockEntity(::std::shared_ptr<::BlockActor> te);

    MCAPI bool _recalcHeight(::ChunkBlockPos const& start, ::BlockSource* source);

    MCAPI void _removeCallbacks(
        ::ChunkBlockPos const& pos,
        ::Block const&         oldBlock,
        ::Block const&         current,
        ::BlockSource*         currentSource
    );

    MCAPI void _replaceBiomeStorage(
        ushort                                                       biomeIndex,
        ::std::unique_ptr<::SubChunkStorage<::Biome>>                newStorage,
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const& lock
    );

    MCAPI void _setAllBiomesFrom2D(::std::array<::BiomeChunkData, 256>& legacyBiomes);

    MCAPI void _setBiome(::Biome const& biome, ::ChunkBlockPos const& pos, bool fillYDimension);

    MCAPI void _setBiome(
        ::Biome const&                                               biome,
        ushort                                                       biomeIndex,
        ushort                                                       storageIndex,
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const& writeLock
    );

    MCFOLD void _setGenerator(::ChunkSource* generator);

    MCAPI bool _setOnChunkLoadedCalled();

    MCAPI void _tickSnowAndIce(::BlockSource& region, ::Random& random, int xOffset, int zOffset, ::Weather& weather);

    MCAPI bool actorDataNeedsSaving(int wait, int maxWait) const;

    MCAPI void addEntity(::WeakEntityRef entityRef);

    MCAPI void addHardcodedSpawningArea(::BoundingBox const& spawnerAABB, ::HardcodedSpawnAreaType type);

    MCAPI void addSubChunkBlockEntitiesToLevelChunk(
        ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>& blockActorMap
    );

    MCAPI bool applySeasonsPostProcess(::BlockSource& region);

    MCAPI void changeState(::ChunkState from, ::ChunkState to);

    MCAPI bool checkSeasonsPostProcessDirty();

    MCAPI bool chunkHasConvertedDataTag() const;

    MCAPI void clearDirtyTickCounters();

    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(::ChunkViewSource& neighborhood, short absoluteIndex);

    MCAPI void deserializeBiomes(::IDataInput& stream, bool fromNetwork);

    MCAPI void deserializeBlockEntities(::IDataInput& stream);

    MCAPI void deserializeFinalization(::IDataInput& stream);

    MCAPI bool deserializeKey(::std::string_view key, ::std::string_view value);

    MCAPI void deserializeLegacyBiomes(::IDataInput& stream);

    MCAPI void deserializeLoadedVersion(::IDataInput& stream);

    MCAPI void deserializeMetaDataHash(::IDataInput& stream);

    MCAPI void deserializeSubChunk(
        uchar                                      idx,
        ::IDataInput&                              stream,
        ::std::optional<schar>                     absoluteIndex,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );

    MCAPI void deserializeSubChunkBlockEntities(
        ::IDataInput&                                                           stream,
        ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>& blockEntityMap
    );

    MCFOLD ::LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const;

    MCAPI void fetchBiomes(::std::vector<::Biome const*>& biomes) const;

    MCAPI void fetchBlocks(::BlockPos const& volumeOrigin, ::BlockVolume& volume) const;

    MCAPI void fillBiomes(::BiomeChunkData const& biomeChunkData);

    MCAPI void finalizeDeserialization();

    MCAPI void finalizePostProcessing();

    MCAPI void finalizeSubChunkDeserialization(
        ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>& blockActorMap,
        ::buffer_span_mut<::SubChunk>                                           subchunks
    );

    MCAPI ::std::optional<::BlockPos> findExposedLightningRod(::BlockPos const& pos, ::BlockSource& region);

    MCAPI ::Vec3 findLightningTarget(::BlockPos const& pos, ::BlockSource& region);

    MCAPI bool generateOriginalLighting(::ChunkViewSource& neighborhood, bool enforceBorderCheck);

    MCAPI ::ChunkLocalHeight getAboveTopSolidBlock(
        ::ChunkBlockPos const& start,
        bool                   iteratePastInitialBlocking,
        bool                   includeWater,
        bool                   includeLeaves
    ) const;

    MCAPI void
    getActors(::ActorDefinitionIdentifier const& actorDefinitionId, ::AABB const& bb, ::std::vector<::Actor*>& actors)
        const;

    MCAPI ::Biome const& getBiome(::ChunkBlockPos const& pos) const;

    MCAPI ::Block const& getBlock(::ChunkBlockPos const& pos) const;

    MCAPI ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>> const& getBlockEntities() const;

    MCAPI ::BlockActor* getBlockEntity(::ChunkBlockPos const& localPos);

    MCAPI bool getBorder(::ChunkBlockPos const& pos) const;

    MCAPI ::BrightnessPair getBrightness(::ChunkBlockPos const& pos) const;

    MCAPI ::BrightnessPair getBrightness(::ChunkBlockPos const& pos, ::Brightness skyDampen) const;

    MCAPI schar getCachedTemperatureNoise(::ChunkBlockPos const& pos);

    MCAPI ::std::vector<::WeakEntityRef>& getChunkEntities();

    MCFOLD ::Dimension& getDimension() const;

    MCAPI void getEntities(
        ::gsl::span<::gsl::not_null<::Actor const*>> ignoredEntities,
        ::AABB const&                                bb,
        ::std::vector<::Actor*>&                     entities,
        bool                                         useHitbox
    ) const;

    MCAPI void
    getEntities(::ActorType type, ::AABB const& bb, ::std::vector<::Actor*>& es, bool ignoreTargetType) const;

    MCAPI ::Actor* getEntity(::ActorUniqueID const& actorId) const;

    MCAPI ::Block const& getExtraBlock(::ChunkBlockPos const& localPos) const;

    MCAPI ::LevelChunk::Finalization getFinalized() const;

    MCAPI ::GameEventListenerRegistry& getGameEventListenerRegistry() const;

    MCFOLD ::ChunkSource* getGenerator() const;

    MCAPI ::DimensionHeightRange const& getHeightRange() const;

    MCAPI short getHeightmap(::ChunkBlockPos const& pos) const;

    MCAPI short getHighestNonAirSubChunkIndex() const;

    MCAPI float getInterpolant(uint64 x, uint64 y) const;

    MCFOLD ::Tick const& getLastTick() const;

    MCFOLD ::Level& getLevel() const;

    MCAPI ::LevelChunkVolumeData& getLevelChunkVolumeData();

    MCAPI ::std::optional<::LevelChunkFormat> getLoadedFormat() const;

    MCAPI ::BlockPos const& getMax() const;

    MCAPI short getMaxAllocatedY() const;

    MCAPI uint64 getMaxSubChunkCnt() const;

    MCAPI short getMaxY() const;

    MCAPI ::std::shared_ptr<::LevelChunkMetaData const> getMetaData() const;

    MCAPI ::std::shared_ptr<::LevelChunkMetaData> getMetaDataCopy() const;

    MCFOLD ::BlockPos const& getMin() const;

    MCAPI short getMinY() const;

    MCAPI short getNonAirMaxHeight() const;

    MCFOLD ::ChunkPos const& getPosition() const;

    MCAPI ::ChunkLocalHeight getPreWorldGenHeightmap(::ChunkBlockPos const& pos) const;

    MCAPI ::HeightmapWrapper getPreWorldGenHeightmap() const;

    MCAPI ::std::vector<::std::shared_ptr<::BlockActor>> const& getPreservedBlockEntities() const;

    MCAPI ::BlockTickingQueue& getRandomTickQueue();

    MCAPI ::Brightness getRawBrightness(::ChunkBlockPos const& pos, ::Brightness skyDampen) const;

    MCFOLD ::std::atomic<::ChunkState> const& getState() const;

    MCAPI ::SubChunk const* getSubChunk(short absoluteIndex) const;

    MCAPI ::SubChunk* getSubChunk(short absoluteIndex);

    MCAPI short getSubChunkAbsoluteIndexFromSubChunkIndex(uint64 index) const;

    MCAPI ::Biome const& getSurfaceBiome(::ChunkBlockPos pos) const;

    MCAPI ::BlockTickingQueue const& getTickQueue() const;

    MCFOLD ::BlockTickingQueue& getTickQueue();

    MCAPI ::BlockPos const getTopRainBlockPos(::ChunkBlockPos const& pos);

    MCAPI ::ChunkLocalHeight getTotalAllocatedHeight() const;

    MCAPI bool hasAnyBiomeStates() const;

    MCAPI bool hasBlockEntitiesToSerialize() const;

    MCAPI bool hasEntitiesPendingToLoad() const;

    MCAPI bool hasEntitiesToSerialize() const;

    MCAPI bool hasEntity(::WeakEntityRef entityRef);

    MCAPI bool isAnyBlockEntityDirty();

    MCAPI bool isBlockInChunk(::BlockPos const& block) const;

    MCAPI bool isClientGeneratedChunk() const;

    MCAPI bool isEmptyClientChunk() const;

    MCAPI bool isFullyLoaded() const;

    MCAPI bool isNonActorDataDirty() const;

    MCFOLD bool isReadOnly() const;

    MCAPI bool isSkyLit(::ChunkBlockPos const& pos) const;

    MCAPI void legacyDeserializeBlockExtraData(::IDataInput& stream);

    MCAPI void legacyDeserializeTerrain(::IDataInput& stream);

    MCAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const;

    MCAPI void markSaveIfNeverSaved();

    MCAPI void markSaveNonActorDataIfDirty();

    MCAPI bool metaDataDirty() const;

    MCAPI bool needsUpgradeFix() const;

    MCAPI bool needsWallFix() const;

    MCAPI bool nonActorDataNeedsSaving(int wait, int maxWait) const;

    MCAPI void onBlockEntityChanged();

    MCAPI void onDiscarded();

    MCAPI ::LevelChunk& operator=(::LevelChunk&& otherChunk);

    MCAPI void placeCallbacks(
        ::ChunkBlockPos const&          pos,
        ::Block const&                  old,
        ::Block const&                  current,
        ::BlockSource*                  currentSource,
        ::std::shared_ptr<::BlockActor> blockEntity
    );

    MCAPI void populateHeightMapDataForSubChunkPacket(
        short                                 subChunkAbsoluteIndex,
        ::SubChunkPacket::SubChunkPacketData& subChunkPacketData
    ) const;

    MCAPI void pruneBiomesAboveHeightmap();

    MCAPI void recalculateSubchunkHashes(bool network);

    MCAPI void recomputeHeightMap(bool resetLighting);

    MCAPI ::std::shared_ptr<::BlockActor> removeBlockEntity(::BlockPos const& blockPos);

    MCAPI bool removeEntityFromChunk(::WeakEntityRef entityRef);

    MCAPI bool removeEntityFromWorld(::WeakEntityRef entityRef);

    MCAPI void removeHardcodedSpawningArea(::HardcodedSpawnAreaType type);

    MCFOLD void serialize2DMaps(::IDataOutput& stream) const;

    MCFOLD void serialize3DMaps(::IDataOutput& stream) const;

    MCAPI void serializeBiomeStates(::IDataOutput& stream) const;

    MCAPI void serializeBiomes(::IDataOutput& stream) const;

    MCAPI void serializeBlockEntities(::IDataOutput& stream, ::SaveContext const& saveContext) const;

    MCAPI void serializeBlockEntitiesForSubChunk(
        ::IDataOutput&       stream,
        ::SubChunkPos const& subChunkPos,
        ::SaveContext const& saveContext
    ) const;

    MCAPI bool serializeBorderBlocks(::IDataOutput& stream) const;

    MCAPI void serializeEntities(
        ::std::string&                              buffer,
        bool                                        markProcessedOnChunkDisard,
        ::std::function<void(::std::string const&)> addLiveActorCallback,
        ::std::function<void(::std::string const&)> addActorKeyCallback,
        ::std::function<void(::std::string const&)> addSerializedActor
    ) const;

    MCAPI void serializeEntityRemovals(::std::function<void(::std::string const&)> callback);

    MCAPI void serializeFinalization(::IDataOutput& stream) const;

    MCAPI void serializeMetaDataHash(::IDataOutput& stream) const;

    MCAPI void serializeRandomTicks(::IDataOutput& stream) const;

    MCAPI void serializeTicks(::IDataOutput& stream) const;

    MCAPI void setAllLegacyBlockIDAndData(::buffer_span<::BlockID> ids, ::buffer_span<::NibblePair> data);

    MCAPI void setBiome2d(::Biome const& biome, ::ChunkBlockPos const& pos);

    MCAPI void setBiomeFromVolume(::ClientBlockPipeline::VolumeOf<::Biome const*> const& volume, uint yOffset);

    MCAPI ::Block const& setBlock(
        ::ChunkBlockPos const&          pos,
        ::Block const&                  block,
        ::BlockSource*                  issuingSource,
        ::std::shared_ptr<::BlockActor> blockEntity
    );

    MCAPI void setBlockSimple(::ChunkBlockPos const& pos, ::Block const& block);

    MCAPI void setBlockVolume(::BlockVolume const& box, uint yOffset);

    MCAPI void setBorder(::ChunkBlockPos const& pos, bool val);

    MCAPI void setCachedTemperatureNoise(::ChunkBlockPos const& pos, schar noiseVal);

    MCAPI void setChunkInterpolants(::LevelChunk::Neighbors const& savedNeighbors);

    MCAPI ::Block const&
    setExtraBlock(::ChunkBlockPos const& localPos, ::Block const& block, ::BlockSource* issuingSource);

    MCAPI void setExtraBlockSimple(::ChunkBlockPos const& pos, ::Block const& block);

    MCAPI void setFinalized(::LevelChunk::Finalization state);

    MCAPI void setHadSerializedEntities();

    MCAPI void setIsClientGeneratedChunk(bool isClientGenerated);

    MCAPI void setMetaData(::std::shared_ptr<::LevelChunkMetaData> metaData);

    MCAPI void setPendingEntities(::std::string entitiesData);

    MCAPI void setPreWorldGenHeightMap(::std::unique_ptr<::std::vector<short>> heightmap);

    MCAPI void setSaved();

    MCAPI void setUnsaved();

    MCAPI void setupRedstoneCircuit(::BlockSource& resource);

    MCAPI bool shouldSaveIfNeverSaved() const;

    MCAPI bool shouldSaveNonActorDataIfDirty() const;

    MCAPI bool subChunkIsSafeReference(::BlockPos const& blockPos) const;

    MCAPI void tick(::BlockSource& tickRegion, ::Tick const& tick);

    MCAPI void tickBlockEntities(::BlockSource& tickRegion);

    MCAPI void tickBlocks(::BlockSource& region);

    MCAPI ::BlockPos toWorldPos(::ChunkBlockPos const& cbp) const;

    MCAPI bool tryChangeState(::ChunkState from, ::ChunkState to);

    MCAPI void trySpawnSkeletonTrap(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void updateLoadedMetaDataHash();

    MCAPI void validateAndFixBiomeStates();

    MCAPI bool wasTickedThisTick(::Tick const& tick) const;

    MCAPI ~LevelChunk();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static bool borderBlocksAreEnabled();

    MCAPI static ::std::unique_ptr<::LevelChunk, ::LevelChunkPhase1Deleter>
    createNew(::Dimension& dimension, ::ChunkPos cp, bool readOnly, ::SubChunkInitMode initBlocks);

    MCAPI static ::std::tuple<::std::array<::ChunkLocalHeight, 256>, ::std::array<::BiomeChunkData, 256>>
    deserialize2DData(::IDataInput& stream, ::std::optional<::LevelChunkFormat> const& lcFormat, bool isClientSide);

    MCAPI static ::std::pair<ushort, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> deserialize3DBiomes(
        ::IDataInput&          stream,
        ::BiomeRegistry const& biomeRegistry,
        ushort                 dimensionHeightInSubchunks,
        ::Biome*               defaultBiome,
        bool                   fromNetwork
    );

    MCAPI static ::std::tuple<
        ::std::array<::ChunkLocalHeight, 256>,
        ushort,
        ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>>
    deserialize3DData(
        ::IDataInput&          stream,
        ::BiomeRegistry const& biomeRegistry,
        ushort                 dimensionHeightInSubchunks,
        ::Biome*               defaultBiomes
    );

    MCAPI static void deserializeSubChunk(
        ::IDataInput&                              stream,
        ::ChunkPos const&                          chunkPosition,
        ::std::optional<schar>                     absoluteIndex,
        ::SubChunk&                                sc,
        ::BlockPalette&                            blockPalette,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );

    MCAPI static void flushGarbageCollector();

    MCAPI static ::std::pair<::LevelChunkTag, short> getTagAndSubIndexFromKey(::std::string_view key);

    MCAPI static void serializeEntities(
        ::std::vector<::WeakEntityRef> const&       entities,
        ::std::string const&                        serializedEntitiesBuffer,
        ::std::string const&                        failedSerializedEntitiesBuffer,
        ::std::string&                              buffer,
        bool                                        markProcessedOnChunkDisard,
        ::std::function<void(::std::string const&)> addLiveActorCallback,
        ::std::function<void(::std::string const&)> addActorKeyCallback,
        ::std::function<void(::std::string const&)> addSerializedActor
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& UPDATE_MAP_BIT_SHIFT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Dimension&       dimension,
        ::ChunkPos const&  cp,
        bool               readOnly,
        ::SubChunkInitMode initBlocks,
        bool               initializeMetaData
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
