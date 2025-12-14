#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/VolumeOf.h"
#include "mc/common/BiomeIdType.h"
#include "mc/common/BrightnessPair.h"
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkLocalHeight.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/chunk/BiomeChunkData.h"
#include "mc/world/level/chunk/ChunkCachedDataState.h"
#include "mc/world/level/chunk/ChunkDebugDisplaySavedState.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/ChunkTerrainDataState.h"
#include "mc/world/level/chunk/ColumnCachedData.h"
#include "mc/world/level/chunk/DirtyTicksCounter.h"
#include "mc/world/level/chunk/LevelChunkBlockActorStorage.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/chunk/LevelChunkNeighbor.h"
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
class BlockSource;
class BlockTickingQueue;
class BlockVolume;
class ChunkBlockPos;
class ChunkSource;
class ChunkViewSource;
class Dimension;
class EntityContext;
class GameEventListenerRegistry;
class IDataInput;
class IDataOutput;
class ILevel;
class LevelChunkMetaData;
class Random;
class SaveContext;
class StringByteInput;
class SubChunkPos;
class Vec3;
class WeakEntityRef;
class Weather;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct BiomeChunkState;
struct BlockID;
struct DeserializationChanges;
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
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::array<::std::pair<::LevelChunkNeighbor, ::ChunkPos>, 8> const& sOffsetMap();
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

    using BlockList = ::std::vector<::BlockPos>;

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
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>                       mRenderHeightmap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<short>>>                       mPreWorldGenHeightmap;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight>                                            mNonAirMaxHeight;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BiomeIdType, ::BiomeChunkState>>       mBiomeStates;
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
    ::ll::TypedStorage<4, 48, ::DirtyTicksCounter[6]>                         mFullChunkDirtyTicksCounters;
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                             mChunkActorsDirtyTicksCounter;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>         mRainHeights;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                 mEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                   mRemovedActorStorageKeys;
    ::ll::TypedStorage<8, 136, ::LevelChunkBlockActorStorage>                 mBlockEntities;
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

    MCAPI void
    _fixupCorruptedBlockActors(::LevelChunkBlockActorStorage& deserialized, ::buffer_span_mut<::SubChunk> subchunks);

    MCAPI void _generateOriginalLighting(::ChunkViewSource& neighborhood, bool enforceBorderCheck);

    MCAPI void _generateOriginalLightingSubChunk(::BlockSource& source, uint64 subchunkIdx, bool);

    MCAPI ::gsl::not_null<::Biome const*> const _getDefaultBiome() const;

    MCAPI_C void _handleHeightmapDataFromSubChunkPacketWithDeserializationChanges(
        short                                       subChunkIndex,
        ::SubChunkPacket::SubChunkPacketData const& subChunkPacketData
    );

    MCAPI void _lightingCallbacks(
        ::ChunkBlockPos const& pos,
        ::Block const&         old,
        ::Block const&         current,
        ::BlockSource*         currentSource
    );

    MCAPI void _makeUniformBiomes(::Biome const& biome);

    MCAPI void _placeBlockEntity(::std::shared_ptr<::BlockActor> te);

    MCAPI void _placeCallbackIfChunkLoaded(
        ::BlockSource&                  currentSource,
        ::BlockPos const&               blockPos,
        ::Block const&                  old,
        ::gsl::not_null<::Block const*> current
    );

    MCAPI bool _recalcHeight(::ChunkBlockPos const& start, ::BlockSource* source);

    MCAPI void _removeCallbacks(
        ::ChunkBlockPos const&      pos,
        ::Block const&              oldBlock,
        ::Block const&              current,
        ::BlockSource*              currentSource,
        ::BlockChangeContext const& changeSourceContext
    );

    MCAPI void _replaceBiomeStorage(
        ushort                                                       subChunkIndex,
        ::std::unique_ptr<::SubChunkStorage<::Biome>>                newStorage,
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const& lock
    );

    MCAPI void _set2DBiomesFrom3D(::IDataInput& stream);

    MCAPI void _setAllBiomesFrom2D(::std::array<::BiomeChunkData, 256>& legacyBiomes);

    MCAPI void _setBiome(::Biome const& biome, ::ChunkBlockPos const& pos, bool fillYDimension);

    MCAPI void _setBiome(
        ::Biome const&                                               biome,
        ushort                                                       subChunkIndex,
        ushort                                                       storageIndex,
        ::Bedrock::Threading::UniqueLock<::std::shared_mutex> const& writeLock
    );

    MCAPI void _tickSnowAndIce(::BlockSource& region, ::Random& random, int xOffset, int zOffset, ::Weather& weather);

    MCAPI void addEntity(::WeakEntityRef entityRef);

    MCAPI void addHardcodedSpawningArea(::BoundingBox const& spawnerAABB, ::HardcodedSpawnAreaType type);

    MCAPI void addSubChunkBlockEntitiesToLevelChunk(::LevelChunkBlockActorStorage& blockActorMap);

    MCAPI bool applySeasonsPostProcess(::BlockSource& region);

    MCAPI bool checkSeasonsPostProcessDirty();

    MCAPI_C void clearBlockEntitiesInSubChunk(schar absoluteIndex);

    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(::ChunkViewSource& neighborhood, short absoluteIndex);

    MCAPI_S void deserialize2DMaps(::IDataInput& stream);

    MCAPI_C void deserializeBiomes(::IDataInput& stream, bool fromNetwork);

    MCAPI void deserializeBlockEntities(::IDataInput& stream);

    MCAPI_C void deserializeBorderBlocks(::IDataInput& stream);

    MCAPI bool deserializeKey(::std::string_view key, ::std::string_view value);

    MCAPI void deserializeMetaDataHash(::IDataInput& stream);

    MCAPI void deserializeSubChunk(
        uchar                                      idx,
        ::IDataInput&                              stream,
        ::std::optional<schar>                     absoluteIndex,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );

    MCAPI void fetchBiomes(::Bedrock::small_vector_base<::gsl::not_null<::Biome const*>>& output) const;

    MCAPI void fillBiomes(::BiomeChunkData const& biomeChunkData);

    MCAPI void finalizeDeserialization();

    MCAPI void finalizePostProcessing();

    MCAPI void finalizeSubChunkDeserialization(
        ::LevelChunkBlockActorStorage& blockActorMap,
        ::buffer_span_mut<::SubChunk>  subchunks
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

    MCAPI void getActors(
        ::ActorDefinitionIdentifier const& actorDefinitionId,
        ::AABB const&                      bb,
        ::std::vector<::Actor*>&           actors
    ) const;

    MCAPI ::Biome const& getBiome(::ChunkBlockPos const& pos) const;

    MCAPI ::Block const& getBlock(::ChunkBlockPos const& pos) const;

    MCAPI ::BlockActor* getBlockEntity(::ChunkBlockPos const& localPos);

    MCAPI ::BrightnessPair getBrightness(::ChunkBlockPos const& pos) const;

    MCAPI_C ::std::array<::ChunkLocalHeight, 256> getEntireLightingHeightMap() const;

    MCAPI void getEntities(
        ::gsl::span<::gsl::not_null<::Actor const*>> ignoredEntities,
        ::AABB const&                                bb,
        ::std::vector<::Actor*>&                     entities,
        bool                                         useHitbox
    ) const;

    MCAPI void
    getEntities(::ActorType type, ::AABB const& bb, ::std::vector<::Actor*>& es, bool ignoreTargetType) const;

    MCAPI ::Block const& getExtraBlock(::ChunkBlockPos const& localPos) const;

    MCAPI short getHighestNonAirSubChunkIndex() const;

    MCAPI ::std::shared_ptr<::LevelChunkMetaData> getMetaDataCopy() const;

    MCAPI_C ::SubChunk* getSubChunk(short absoluteIndex);

    MCAPI ::BlockPos const getTopRainBlockPos(::ChunkBlockPos const& pos);

    MCAPI_C void handleHeightmapDataFromSubChunkPacket(
        short                                       subChunkAbsoluteIndex,
        ::SubChunkPacket::SubChunkPacketData const& subChunkPacketData,
        ::std::optional<::DeserializationChanges*>  deserializationChanges
    );

    MCAPI bool hasEntity(::WeakEntityRef entityRef);

    MCAPI bool hasSubChunksToPrune() const;

    MCAPI bool isNonActorDataDirty() const;

    MCAPI void legacyDeserializeBlockExtraData(::IDataInput& stream);

    MCAPI void legacyDeserializeTerrain(::IDataInput& stream);

    MCAPI void markForTickingThisFrame(::LevelChunkTicking::Registry& registry);

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

    MCAPI_C void recalculateChunkSkyLight();

    MCAPI void recomputeHeightMap(bool resetLighting);

    MCAPI bool removeEntityFromChunk(::WeakEntityRef entityRef);

    MCAPI bool removeEntityFromWorld(::WeakEntityRef entityRef);

    MCAPI void removeHardcodedSpawningArea(::HardcodedSpawnAreaType type);

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

    MCAPI void setAllBlockTypeIDAndData(::buffer_span<::BlockID> ids, ::buffer_span<::NibblePair> data);

    MCAPI void setBiomeFromVolume(::ClientBlockPipeline::VolumeOf<::Biome const*> const& volume);

    MCAPI ::Block const& setBlock(
        ::ChunkBlockPos const&          pos,
        ::Block const&                  block,
        ::BlockSource*                  issuingSource,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::BlockChangeContext const&     changeSourceContext
    );

    MCAPI void setBlockVolume(::BlockVolume const& box, uint yOffset);

    MCAPI_C void setClientNeedsToRequestSubchunks(::std::optional<uint64> requestLimit);

    MCAPI ::Block const&
    setExtraBlock(::ChunkBlockPos const& localPos, ::Block const& block, ::BlockSource* issuingSource);

    MCAPI void setMetaData(::std::shared_ptr<::LevelChunkMetaData> metaData);

    MCAPI void setPendingEntities(::std::string entitiesData);

    MCAPI void setPreWorldGenHeightMap(::std::unique_ptr<::std::vector<short>> heightmap);

    MCAPI void setSaved();

    MCAPI void setUnsaved();

    MCAPI void setupRedstoneCircuit(::BlockSource& resource);

    MCAPI void tickBlockEntities(::BlockSource& tickRegion);

    MCAPI void tickBlocks(::BlockSource& region);

    MCAPI void tickImpl(::BlockSource& tickRegion, ::Tick const& tick, ::std::function<void()> spawnerCallback);

    MCAPI void trySpawnSkeletonTrap(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void validateAndFixBiomeStates();

    MCAPI ~LevelChunk();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::unique_ptr<::LevelChunk>
    createNewNoCustomDeleter(::Dimension& dimension, ::ChunkPos cp, bool readOnly, ::SubChunkInitMode initBlocks);

    MCAPI static ::std::pair<ushort, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> deserialize3DBiomes(
        ::IDataInput&          stream,
        ::BiomeRegistry const& biomeRegistry,
        ushort                 dimensionHeightInSubchunks,
        ::Biome const*         defaultBiome,
        bool                   fromNetwork
    );

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
        tuple<::std::array<::ChunkLocalHeight, 256>, ::std::array<::BiomeChunkData, 256>, ::std::vector<::SubChunk>>
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
