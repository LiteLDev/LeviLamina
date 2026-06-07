#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/platform/threading/SharedLock.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkLocalHeight.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/ChunkCachedDataState.h"
#include "mc/world/level/chunk/ChunkDebugDisplaySavedState.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/ChunkTerrainDataState.h"
#include "mc/world/level/chunk/ColumnCachedData.h"
#include "mc/world/level/chunk/DirtyTicksCounter.h"
#include "mc/world/level/chunk/LevelChunkBiomes.h"
#include "mc/world/level/chunk/LevelChunkBlockActorStorage.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/chunk/LevelChunkNeighbor.h"
#include "mc/world/level/chunk/LevelChunkTag.h"
#include "mc/world/level/chunk/LevelChunkVolumeData.h"
#include "mc/world/level/chunk/SubChunkInitMode.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/level_chunk_ticking/Entity.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/v1/HardcodedSpawnAreaType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Biome;
class BiomeRegistry;
class Block;
class BlockActor;
class BlockChangeContext;
class BlockPalette;
class BlockSource;
class BlockTickingQueue;
class BlockVolume;
class ChunkBlockPos;
class ChunkSource;
class ChunkViewSource;
class Dimension;
class DimensionHeightRange;
class EntityContext;
class GameEventListenerRegistry;
class HeightmapWrapper;
class IDataInput;
class IDataOutput;
class ILevel;
class LevelChunkBlockActorAccessToken;
class LevelChunkMetaData;
class Random;
class SaveContext;
class StringByteInput;
class StringByteOutput;
class SubChunkPos;
class Vec3;
class WeakEntityRef;
class Weather;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct ActorUniqueID;
struct BiomeChunkState;
struct BlockID;
struct Brightness;
struct DeserializationChanges;
struct LevelChunkPhase1Deleter;
struct NibblePair;
struct SubChunk;
namespace LevelChunkTicking { struct Registry; }
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
    enum class DeserializeEntityResult : int {
        FailedToLoadActor  = 0,
        FailedToAddToLevel = 1,
        Succeeded          = 2,
    };

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

        MCFOLD bool hasNeighbor(::LevelChunkNeighbor neighbor) const;

        MCAPI bool isSurrounded() const;

        MCAPI void serialize(::StringByteOutput& stream) const;

        MCFOLD void setNeighbor(::LevelChunkNeighbor neighbor, bool value);
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

    struct SpawningArea {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 24, ::BoundingBox>           aabb;
        ::ll::TypedStorage<1, 1, ::HardcodedSpawnAreaType> type;
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

    using BBorder = bool;

    using BiomeSmallVector = ::Bedrock::small_vector<::gsl::not_null<::Biome const*>, 4>;

    using BlockActorVector = ::std::vector<::std::shared_ptr<::BlockActor>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mBlockEntityAccessLock;
    ::ll::TypedStorage<8, 8, ::ILevel&>                                         mLevel;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                      mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                       mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                       mMax;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                        mPosition;
    ::ll::TypedStorage<1, 1, bool>                                              mLightingFixupDone;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                               mLightingTaskActive;
    ::ll::TypedStorage<1, 1, bool>                                              mReadOnly;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                                    mGenerator;
    ::ll::TypedStorage<4, 4, ::LevelChunkTicking::Entity>                       mTmpTickingEntity;
    ::ll::TypedStorage<1, 2, ::std::optional<::LevelChunkFormat>>               mLoadedFormat;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSerializedEntitiesBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mFailedSerializedEntitiesBuffer;
    ::ll::TypedStorage<1, 1, bool>                                              mHadSerializedEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>                       mUnresolvedActorLinks;
    ::ll::TypedStorage<1, 1, ::std::atomic<::ChunkState>>                       mLoadState;
    ::ll::TypedStorage<1, 1, ::ChunkTerrainDataState>                           mTerrainDataState;
    ::ll::TypedStorage<1, 1, ::ChunkDebugDisplaySavedState>                     mDebugDisplaySavedState;
    ::ll::TypedStorage<1, 1, ::ChunkCachedDataState>                            mCachedDataState;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                   mCachedDataStateSpinLock;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                   mClientRequestHeightmapAdjustSpinLock;
    ::ll::TypedStorage<8, 8, ::Tick>                                            mLastTick;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTickingQueue>>            mTickQueue;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTickingQueue>>            mRandomTickQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunk>>                        mSubChunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SpinLockImpl>>> mSubChunkSpinLocks;
    ::ll::TypedStorage<8, 552, ::LevelChunkBiomes>                              mBiomes;
    ::ll::TypedStorage<4, 2048, ::std::array<::ColumnCachedData, 256>>          mCachedData;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>           mHeightmap;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>           mRenderHeightmap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<short>>>           mPreWorldGenHeightmap;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight>                                mNonAirMaxHeight;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BiomeIdType, ::BiomeChunkState>> mBiomeStates;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasCachedTemperatureNoise;
    ::ll::TypedStorage<1, 256, ::std::array<bool, 256>>                               mBorderBlockMap;
    ::ll::TypedStorage<4, 4, int>                                                     mCurrentInstatick;
    ::ll::TypedStorage<4, 4, ::LevelChunk::Finalization>                              mFinalized;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsRedstoneLoaded;
    ::ll::TypedStorage<1, 1, bool>                                                    mOwnedByTickingThread;
    ::ll::TypedStorage<1, 1, bool>                                                    mUse3DBiomeMaps;
    ::ll::TypedStorage<1, 1, bool>                                                    mLevelChunkHas3dBiomeTag;
    ::ll::TypedStorage<1, 4, ::LevelChunk::Telemetry>                                 mTelemetry;
    ::ll::TypedStorage<4, 48, ::DirtyTicksCounter[6]>                                 mFullChunkDirtyTicksCounters;
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                                     mChunkActorsDirtyTicksCounter;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>                 mRainHeights;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                         mEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mRemovedActorStorageKeys;
    ::ll::TypedStorage<8, 136, ::LevelChunkBlockActorStorage>                         mBlockEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockActor>>>         mPreservedBlockEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>>              mVolumes;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                                        mDefaultBrightness;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunk::SpawningArea>>              mSpawningAreas;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mLastNetworkLightingTime;
    ::ll::TypedStorage<8, 8, uint64>                                                  mLoadedMetaDataHash;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaData>>                mMetaData;
    ::ll::TypedStorage<1, 1, bool>                                                    mClientNeedsToRequestSubChunks;
    ::ll::TypedStorage<1, 1, bool>                                                    mLevelChunkHasHadOriginalLighting;
    ::ll::TypedStorage<4, 16, float[2][2]>                                            mChunkInterpolants;
    ::ll::TypedStorage<1, 1, bool>                                                    mbChunkHasConverterTag;
    ::ll::TypedStorage<1, 1, ::LevelChunk::Neighbors>                                 mSavedNeighbors;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                                   mGenerationSeed;
    ::ll::TypedStorage<1, 1, bool>                                            mGeneratedPreCavesAndCliffsBlending;
    ::ll::TypedStorage<1, 1, bool>                                            mOnChunkLoadedCalled;
    ::ll::TypedStorage<1, 1, bool>                                            mAllSerializedEntitiesLoaded;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mOutOfBoundsBlockEntitiesBuffer;
    ::ll::TypedStorage<1, 1, bool>                                            mSaveNonActorDataIfDirty;
    ::ll::TypedStorage<1, 1, bool>                                            mSaveIfNeverSaved;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                              mSnowRandomValue;
    ::ll::TypedStorage<1, 1, bool>                                            mHasSubChunksToPrune;
    ::ll::TypedStorage<1, 1, bool>                                            mHaveSubChunksBeenPruned;
    ::ll::TypedStorage<1, 1, bool>                                            mShouldShiftUpFlatWorldSubChunks;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                 mSubChunksToPruneLock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<::SubChunk>>>    mSubChunksToPruneOutsideRange;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameEventListenerRegistry>> mGameEventListenerRegistry;
    ::ll::TypedStorage<1, 1, bool>                                            mIsClientGenerated;
    ::ll::TypedStorage<1, 1, bool>                                            mWasClientGenerated;
    ::ll::TypedStorage<1, 1, bool>                                            mIsEmptyClientChunk;
    ::ll::TypedStorage<1, 1, bool>                     mActorStorageUpdatedAfterCheckingForReplacementData;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>      mIsTransient;
    ::ll::TypedStorage<8, 856, ::LevelChunkVolumeData> mLevelChunkVolumeData;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunk& operator=(LevelChunk const&);
    LevelChunk(LevelChunk const&);
    LevelChunk();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelChunk(
        ::Dimension&                                dimension,
        ::ChunkPos const&                           cp,
        bool                                        readOnly,
        ::SubChunkInitMode                          initBlocks,
        bool                                        initializeMetaData,
        ::LevelChunkBlockActorStorage::TrackingMode blockActorTrackingMode
    );

    MCAPI void _addEntityToVolumes(::gsl::not_null<::Actor*> actor);

#ifdef LL_PLAT_C
    MCFOLD void _assertChunkLoadedNotCalledAlready() const;
#endif

    MCAPI void _changeTerrainDataState(::ChunkTerrainDataState, ::ChunkTerrainDataState to);

    MCAPI void _checkAndInferMetaDataAfterDeserialization();

    MCAPI ::std::shared_ptr<::BlockActor> _createBlockEntity(
        ::BlockPos const& block,
        ::BlockSource*    currentSource,
        ::Block const&    current,
        ::Block const&    old
    );

    MCAPI void _deserializeBiomes(::IDataInput& stream, ::BiomeRegistry const& biomeRegistry, bool fromNetwork);

    MCAPI void _deserializeBlockEntities(::IDataInput& stream, ::LevelChunkBlockActorStorage& blockEntityMap);

    MCAPI void _deserializeCCsubChunks(short index, ::StringByteInput& stream);

    MCAPI ::LevelChunk::DeserializeEntityResult
    _deserializeEntity(::BlockSource& source, ::IDataInput& stream, ::std::vector<::ActorLink>& links);

    MCAPI bool _deserializeSubChunk(short index, ::StringByteInput& stream);

    MCAPI void _dispatchBlockBreakEvents(
        ::BlockPos const&           pos,
        ::Block const&              oldBlock,
        ::Block const&              current,
        ::BlockSource*              currentSource,
        ::BlockChangeContext const& changeSourceContext
    );

    MCAPI void _fixupCommandBlocksOnTickingQueue(::BlockSource& tickRegion);

    MCAPI void _fixupCorruptedBlockActors(
        ::LevelChunkBlockActorStorage& deserialized,
        ::buffer_span_mut<::SubChunk>  subchunks
    ) const;

    MCAPI void _generateOriginalLighting(::ChunkViewSource& neighborhood, bool);

    MCAPI void _generateOriginalLightingSubChunk(::BlockSource& source, uint64 subchunkIdx, bool);

    MCFOLD ::ChunkTerrainDataState _getTerrainDataState() const;

#ifdef LL_PLAT_C
    MCAPI void _handleHeightmapDataFromSubChunkPacketWithDeserializationChanges(
        short                                       subChunkIndex,
        ::SubChunkPacket::SubChunkPacketData const& subChunkPacketData
    );
#endif

    MCAPI void _lightingCallbacks(
        ::ChunkBlockPos const& pos,
        ::Block const&         old,
        ::Block const&         current,
        ::BlockSource*         currentSource
    );

    MCAPI void _onRandomTickingQueueChanged();

    MCAPI void _onTickingQueueChanged();

    MCAPI void _placeBlockEntity(::std::shared_ptr<::BlockActor> te);

    MCAPI void _placeCallbackIfChunkLoaded(
        ::BlockSource&                  currentSource,
        ::BlockPos const&               blockPos,
        ::Block const&                  old,
        ::gsl::not_null<::Block const*> current,
        ::BlockChangeContext const&     changeSourceContext
    );

    MCAPI void
    _propagateSkyLight(uchar x, uchar z, ::ChunkLocalHeight const& oldFloor, ::ChunkLocalHeight const& newFloor);

    MCAPI void _reassignSubChunks(::buffer_span_mut<::SubChunk> newChunks);

    MCAPI bool _recalcHeight(::ChunkBlockPos const& start, ::BlockSource* source);

    MCAPI void _removeCallbacks(
        ::ChunkBlockPos const&      pos,
        ::Block const&              oldBlock,
        ::Block const&              current,
        ::BlockSource*              currentSource,
        ::BlockChangeContext const& changeSourceContext
    );

    MCAPI void _set2DBiomesFrom3D(::IDataInput& stream);

    MCAPI void _setAllBiomesFrom2D(::std::array<::BiomeIdType, 256>& legacyBiomes);

    MCAPI void _setBiome(::Biome const& biome, ::ChunkBlockPos const& pos, bool fillYDimension);

    MCFOLD void _setGenerator(::ChunkSource* generator);

    MCAPI void _tickSnowAndIce(::BlockSource& region, ::Random& random, int xOffset, int zOffset, ::Weather& weather);

    MCAPI void addEntity(::WeakEntityRef entityRef);

    MCAPI void addHardcodedSpawningArea(::BoundingBox const& spawnerAABB, ::HardcodedSpawnAreaType type);

    MCAPI void addSubChunkBlockEntitiesToLevelChunk(::LevelChunkBlockActorStorage& blockActorMap);

    MCAPI bool applySeasonsPostProcess(::BlockSource& region);

    MCAPI void changeState(::ChunkState from, ::ChunkState to);

    MCAPI bool checkSeasonsPostProcessDirty() const;

    MCAPI bool chunkHasConvertedDataTag() const;

#ifdef LL_PLAT_C
    MCAPI void clearBlockEntitiesInSubChunk(
        schar                                absoluteIndex,
        ::LevelChunkBlockActorStorage const* blockActorMap,
        ::BlockSource*                       region
    );
#endif

    MCAPI void clearDirtyTickCounters();

    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(::ChunkViewSource& neighborhood, short absoluteIndex);

    MCAPI void deserialize2DMaps(::IDataInput& stream);

    MCAPI void deserializeBiomeStates(::IDataInput& stream);

    MCAPI void deserializeBiomes(::IDataInput& stream, bool fromNetwork);

    MCAPI void deserializeBlockEntities(::IDataInput& stream);

#ifdef LL_PLAT_C
    MCAPI void deserializeBorderBlocks(::IDataInput& stream);
#endif

    MCAPI void deserializeFinalization(::IDataInput& stream);

    MCAPI bool deserializeKey(::std::string_view key, ::std::string_view value);

    MCAPI void deserializeLoadedVersion(::IDataInput& stream);

    MCAPI void deserializeMetaDataHash(::IDataInput& stream);

#ifdef LL_PLAT_C
    MCAPI void deserializeSubChunk(
        ::IDataInput&                              stream,
        short                                      absoluteIndex,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );
#endif

    MCAPI void deserializeSubChunk(
        uchar                                      idx,
        ::IDataInput&                              stream,
        ::std::optional<schar>                     absoluteIndex,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );

    MCAPI void deserializeSubChunkBlockEntities(::IDataInput& stream, ::LevelChunkBlockActorStorage& blockEntityMap);

    MCAPI void discardPrunedSubChunks();

#ifdef LL_PLAT_C
    MCAPI bool doesClientNeedToRequestSubchunks() const;
#endif

    MCFOLD ::LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const;

    MCAPI void fetchBiomes(::Bedrock::small_vector_base<::gsl::not_null<::Biome const*>>& output) const;

    MCAPI void fetchBlocks(::BlockPos const& volumeOrigin, ::BlockVolume& volume) const;

    MCAPI void finalizeDeserialization();

    MCAPI void finalizePostProcessing();

    MCAPI void finalizeSubChunkDeserialization(
        ::LevelChunkBlockActorStorage& blockActorMap,
        ::buffer_span_mut<::SubChunk>  subchunks
    );

    MCAPI ::Vec3 findLightningTarget(::BlockPos const& pos, ::BlockSource& region) const;

    MCAPI bool generateOriginalLighting(::ChunkViewSource& neighborhood, bool enforceBorderCheck);

    MCAPI ::ChunkLocalHeight getAboveTopSolidBlock(
        ::ChunkBlockPos const& start,
        bool                   iteratePastInitialBlocking,
        bool                   includeWater,
        bool                   includeLeaves
    ) const;

    MCAPI void getActors(
        ::ActorDefinitionIdentifier const& actorDefinitionId,
        ::AABB const&                      bb,
        ::std::vector<::Actor*>&           actors
    ) const;

    MCAPI ::Biome const& getBiome(::ChunkBlockPos const& pos) const;

#ifdef LL_PLAT_C
    MCAPI ::std::unique_ptr<::Bedrock::Threading::SharedLock<::std::shared_mutex> const> getBiomesReadLock();
#endif

    MCAPI ::Block const& getBlock(::ChunkBlockPos const& pos) const;

    MCAPI ::LevelChunkBlockActorStorage const& getBlockEntities() const;

    MCAPI ::BlockActor* getBlockEntity(::ChunkBlockPos const& localPos);

    MCAPI bool getBorder(::ChunkBlockPos const& pos) const;

    MCAPI ::BrightnessPair getBrightness(::ChunkBlockPos const& pos) const;

    MCAPI schar getCachedTemperatureNoise(::ChunkBlockPos const& pos);

    MCAPI ::std::vector<::WeakEntityRef>& getChunkEntities();

    MCFOLD ::Dimension& getDimension() const;

#ifdef LL_PLAT_C
    MCAPI ::std::array<::ChunkLocalHeight, 256> getEntireLightingHeightMap() const;
#endif

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

#ifdef LL_PLAT_C
    MCAPI int getGrassColor(::ChunkBlockPos const& pos) const;
#endif

    MCAPI ::DimensionHeightRange const& getHeightRange() const;

    MCAPI short getHeightmap(::ChunkBlockPos const& pos) const;

#ifdef LL_PLAT_C
    MCAPI ::ChunkLocalHeight getHeightmapLocal(::ChunkBlockPos const& pos) const;
#endif

    MCAPI short getHighestNonAirSubChunkIndex() const;

    MCAPI float getInterpolant(uint64 x, uint64 y) const;

#ifdef LL_PLAT_C
    MCAPI ::std::chrono::steady_clock::time_point getLastNetworkLightingTime() const;
#endif

    MCFOLD ::Tick const& getLastTick() const;

    MCFOLD ::ILevel& getLevel() const;

    MCAPI ::LevelChunkVolumeData& getLevelChunkVolumeData();

    MCAPI ::std::optional<::LevelChunkFormat> getLoadedFormat() const;

    MCAPI ::BlockPos const& getMax() const;

    MCAPI short getMaxAllocatedY() const;

    MCAPI uint64 getMaxSubChunkCnt() const;

    MCAPI short getMaxY() const;

#ifdef LL_PLAT_C
    MCAPI short getMaxYIndex() const;
#endif

    MCAPI ::std::shared_ptr<::LevelChunkMetaData const> getMetaData() const;

    MCAPI ::std::shared_ptr<::LevelChunkMetaData> getMetaDataCopy() const;

    MCFOLD ::BlockPos const& getMin() const;

    MCAPI short getMinY() const;

#ifdef LL_PLAT_C
    MCAPI short getMinYIndex() const;
#endif

    MCAPI short getNonAirMaxHeight() const;

    MCFOLD ::ChunkPos const& getPosition() const;

    MCAPI ::ChunkLocalHeight getPreWorldGenHeightmap(::ChunkBlockPos const& pos) const;

    MCAPI ::HeightmapWrapper getPreWorldGenHeightmap() const;

    MCAPI ::std::vector<::std::shared_ptr<::BlockActor>> const& getPreservedBlockEntities() const;

    MCFOLD ::BlockTickingQueue& getRandomTickQueue();

    MCAPI ::Brightness getRawBrightness(::ChunkBlockPos const& pos, ::Brightness skyDampen) const;

    MCFOLD ::std::atomic<::ChunkState> const& getState() const;

    MCAPI ::SubChunk const* getSubChunk(short absoluteIndex) const;

    MCAPI ::SubChunk* getSubChunk(short absoluteIndex);

    MCAPI short getSubChunkAbsoluteIndexFromSubChunkIndex(uint64 index) const;

    MCAPI uint64 getSubChunkIndexFromAbsoluteIndex(short absoluteIndex) const;

#ifdef LL_PLAT_C
    MCAPI ::buffer_span_mut<::SubChunk> getSubChunks(short minIndex, short maxIndex);

    MCAPI ::Biome const& getSurfaceBiome(::BlockPos const& pos) const;
#endif

    MCAPI ::Biome const& getSurfaceBiome(::ChunkBlockPos pos) const;

    MCFOLD ::BlockTickingQueue const& getTickQueue() const;

    MCFOLD ::BlockTickingQueue& getTickQueue();

    MCAPI ::BlockPos const getTopRainBlockPos(::ChunkBlockPos const& pos);

    MCAPI ::ChunkLocalHeight getTotalAllocatedHeight() const;

#ifdef LL_PLAT_C
    MCAPI int getWaterColor(::ChunkBlockPos const& pos) const;

    MCAPI void handleHeightmapDataFromSubChunkPacket(
        short                                       subChunkAbsoluteIndex,
        ::SubChunkPacket::SubChunkPacketData const& subChunkPacketData,
        ::std::optional<::DeserializationChanges*>  deserializationChanges
    );
#endif

    MCAPI bool hasAnyBiomeStates() const;

    MCAPI bool hasBlockEntitiesToSerialize() const;

    MCFOLD bool hasEntitiesPendingToLoad() const;

    MCAPI bool hasEntitiesToSerialize() const;

    MCAPI bool hasEntity(::WeakEntityRef entityRef) const;

    MCAPI bool isAnyBlockEntityDirty() const;

    MCAPI bool isBlockInChunk(::BlockPos const& block) const;

    MCAPI bool isClientGeneratedChunk() const;

    MCAPI bool isEmptyClientChunk() const;

    MCAPI bool isFullyLoaded() const;

    MCAPI bool isNonActorDataDirty() const;

    MCAPI bool isOwnedByTickingThread() const;

    MCAPI bool isReadOnly() const;

    MCAPI bool isSkyLit(::ChunkBlockPos const& pos) const;

#ifdef LL_PLAT_C
    MCAPI bool isSubChunkHeightWithinRange(short const& subChunkHeight) const;
#endif

    MCAPI bool isTransient() const;

    MCAPI void legacyDeserializeBlockExtraData(::IDataInput& stream);

    MCAPI void legacyDeserializeTerrain(::IDataInput& stream);

    MCAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const;

#ifdef LL_PLAT_C
    MCAPI bool levelChunkHasHadOriginalLighting() const;
#endif

    MCAPI void markAsTransient();

    MCAPI void markForTickingThisFrame(::LevelChunkTicking::Registry& registry);

    MCAPI void markSaveIfNeverSaved();

    MCAPI void markSaveNonActorDataIfDirty();

    MCAPI bool metaDataDirty() const;

#ifdef LL_PLAT_C
    MCAPI void moveLevelChunk(::LevelChunk&& otherChunk, uint64 subChunkRequestLimit);
#endif

    MCAPI bool needsUpgradeFix() const;

    MCAPI bool needsWallFix() const;

    MCAPI bool nonActorDataNeedsSaving(int wait, int maxWait) const;

    MCAPI void onBlockEntityChanged();

    MCAPI void onDiscarded();

    MCAPI void onTickingStarted();

    MCAPI ::LevelChunk& operator=(::LevelChunk&& otherChunk);

    MCAPI void placeCallbacks(
        ::ChunkBlockPos const&          pos,
        ::Block const&                  old,
        ::Block const&                  current,
        ::BlockSource*                  currentSource,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::BlockChangeContext const&     changeSourceContext
    );

    MCAPI void populateHeightMapDataForSubChunkPacket(
        short                                 subChunkAbsoluteIndex,
        ::SubChunkPacket::SubChunkPacketData& subChunkPacketData
    ) const;

    MCAPI void pruneBiomesAboveHeightmap();

    MCAPI void pruneBiomesSubChunk3D(ushort subChunkIndex);

#ifdef LL_PLAT_C
    MCAPI void recalculateChunkSkyLight();
#endif

    MCAPI void recalculateSubchunkHashes(bool network);

    MCAPI void recomputeHeightMap(bool resetLighting);

    MCAPI ::std::shared_ptr<::BlockActor> removeBlockEntity(::BlockPos const& blockPos);

    MCAPI bool removeEntityFromChunk(::WeakEntityRef entityRef);

    MCAPI bool removeEntityFromWorld(::WeakEntityRef entityRef);

    MCAPI void removeHardcodedSpawningArea(::HardcodedSpawnAreaType type);

#ifdef LL_PLAT_C
    MCAPI void resetLightingTaskActive();
#endif

    MCAPI void serializeBiomeMaps(::IDataOutput& stream) const;

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

    MCAPI void setAllBlockTypeIDAndData(::buffer_span<::BlockID> ids, ::buffer_span<::NibblePair> data);

    MCAPI void setBiome2d(::Biome const& biome, ::ChunkBlockPos const& pos);

    MCAPI void setBiome3d(::Biome const& biome, ::ChunkBlockPos const& pos);

    MCAPI void setBiomeFromVolume(::ChunkVolume::VolumeOf<::Biome> const& volume);

    MCAPI void setBiomeSubChunk3D(::Biome const& biome, ushort subChunkIndex);

    MCAPI ::Block const& setBlock(
        ::ChunkBlockPos const&          pos,
        ::Block const&                  block,
        ::BlockSource*                  issuingSource,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::BlockChangeContext const&     changeSourceContext
    );

    MCAPI void setBlockSimple(::ChunkBlockPos const& pos, ::Block const& block);

    MCAPI void setBlockVolume(::BlockVolume const& box, uint yOffset);

    MCAPI void setBorder(::ChunkBlockPos const& pos, bool val);

    MCAPI void setCachedTemperatureNoise(::ChunkBlockPos const& pos, schar noiseVal);

    MCAPI void setChunkInterpolants(::LevelChunk::Neighbors const& savedNeighbors);

#ifdef LL_PLAT_C
    MCAPI void setClientNeedsToRequestSubchunks(::std::optional<uint64> requestLimit);

    MCAPI void setEmptyClientChunk();
#endif

    MCAPI ::Block const&
    setExtraBlock(::ChunkBlockPos const& localPos, ::Block const& block, ::BlockSource* issuingSource);

    MCAPI void setExtraBlockSimple(::ChunkBlockPos const& pos, ::Block const& block);

    MCAPI void setFinalized(::LevelChunk::Finalization state);

#ifdef LL_PLAT_C
    MCAPI void setGrassColor(int grassColor, ::ChunkBlockPos const& pos);
#endif

    MCAPI void setHadSerializedEntities();

    MCAPI void setIsClientGeneratedChunk(bool isClientGenerated);

#ifdef LL_PLAT_C
    MCAPI void setLastNetworkLightingTime(::std::chrono::steady_clock::time_point timeToSet);
#endif

    MCAPI void setMetaData(::std::shared_ptr<::LevelChunkMetaData> metaData);

    MCAPI void setPendingEntities(::std::string entitiesData);

    MCAPI void setPreWorldGenHeightMap(::std::unique_ptr<::std::vector<short>> heightmap);

    MCAPI void setSaved();

    MCAPI void setToSingleBiome(::Biome const& biome);

    MCAPI void setUnsaved();

#ifdef LL_PLAT_C
    MCAPI void setWaterColor(int waterColor, ::ChunkBlockPos const& pos);
#endif

    MCAPI void setupRedstoneCircuit(::BlockSource& resource);

    MCAPI bool shouldSaveIfNeverSaved() const;

    MCAPI bool shouldSaveNonActorDataIfDirty() const;

    MCAPI bool subChunkIsSafeReference(::BlockPos const& blockPos) const;

    MCAPI void tick(::BlockSource& tickRegion, ::Tick const& tick);

    MCAPI void tickBlockEntities(::BlockSource& tickRegion);

    MCAPI void tickBlocks(::BlockSource& region);

    MCAPI void tickImpl(::BlockSource& tickRegion, ::Tick const& tick, ::std::function<void()> spawnerCallback);

    MCAPI ::BlockPos toWorldPos(::ChunkBlockPos const& cbp) const;

    MCAPI bool tryChangeState(::ChunkState from, ::ChunkState to);

#ifdef LL_PLAT_C
    MCAPI bool trySetLightingTaskActive();
#endif

    MCAPI void trySpawnSkeletonTrap(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void updateLoadedMetaDataHash();

    MCAPI void validateAndFixBiomeStates();

#ifdef LL_PLAT_C
    MCAPI bool wasEverClientGenerated() const;
#endif

    MCAPI bool wasTickedThisTick(::Tick const& tick) const;

    MCAPI ~LevelChunk();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LevelChunk, ::LevelChunkPhase1Deleter> createNew(
        ::Dimension&                                dimension,
        ::ChunkPos                                  cp,
        bool                                        readOnly,
        ::SubChunkInitMode                          initBlocks,
        ::LevelChunkBlockActorStorage::TrackingMode blockActorTrackingMode
    );

    MCAPI static ::std::unique_ptr<::LevelChunk>
    createNewNoCustomDeleter(::Dimension& dimension, ::ChunkPos cp, bool readOnly, ::SubChunkInitMode initBlocks);

    MCAPI static ::std::tuple<::std::array<::ChunkLocalHeight, 256>, ::std::array<::BiomeIdType, 256>>
    deserialize2DData(::IDataInput& stream, ::std::optional<::LevelChunkFormat> const& lcFormat, bool isClientSide);

    MCAPI static ::std::pair<ushort, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> deserialize3DBiomes(
        ::IDataInput&          stream,
        ::BiomeRegistry const& biomeRegistry,
        ushort                 dimensionHeightInSubchunks,
        ::Biome const*         defaultBiome,
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
        ::Biome const*         defaultBiome
    );

    MCAPI static void deserializeSubChunk(
        ::IDataInput&                              stream,
        ::ChunkPos const&                          chunkPosition,
        ::std::optional<schar>                     absoluteIndex,
        ::SubChunk&                                sc,
        ::BlockPalette&                            blockPalette,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );

    MCAPI static ::std::optional<::BlockPos> findExposedLightningRod(::BlockPos const& pos, ::BlockSource& region);

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

    MCAPI static ::std::
        tuple<::std::array<::ChunkLocalHeight, 256>, ::std::array<::BiomeIdType, 256>, ::std::vector<::SubChunk>>
        staticDeserializeLegacyTerrain(::IDataInput& stream, short minY, ushort dimensionSizeInSubchunks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Dimension&                                dimension,
        ::ChunkPos const&                           cp,
        bool                                        readOnly,
        ::SubChunkInitMode                          initBlocks,
        bool                                        initializeMetaData,
        ::LevelChunkBlockActorStorage::TrackingMode blockActorTrackingMode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
