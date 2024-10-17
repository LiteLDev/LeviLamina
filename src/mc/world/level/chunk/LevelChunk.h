#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/block/client_block_pipeline/VolumeOf.h"
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
namespace br::worldgen { class StructureInstance; }
// clang-format on

class LevelChunk {
public:
    // LevelChunk inner types declare
    // clang-format off
    struct HardcodedSpawningArea;
    class Neighbors;
    // clang-format on

    // LevelChunk inner types define
    enum class Finalization : int {
        NeedsInstaticking = 0x0,
        NeedsPopulation   = 0x1,
        Done              = 0x2,
    };

    struct HardcodedSpawningArea {
    public:
        class BoundingBox        aabb;
        ::HardcodedSpawnAreaType type;
    };

    class Neighbors {
    public:
        static const int COUNT = 0x8; // constant
        uchar            mNeighbors;  // this+0x0
    public:
        // NOLINTBEGIN
        MCAPI Neighbors();

        MCAPI explicit Neighbors(class StringByteInput& stream);

        MCAPI bool hasNeighbor(::LevelChunkNeighbor neighbor) const;

        MCAPI bool isSurrounded() const;

        MCAPI void serialize(class StringByteOutput& stream) const;

        MCAPI void setNeighbor(::LevelChunkNeighbor neighbor, bool value);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        MCAPI void* ctor$(class StringByteInput& stream);

        MCAPI static std::array<std::pair<::LevelChunkNeighbor, class ChunkPos>, 8> const& sOffsetMap();

        // NOLINTEND
    };

    /*These member variables were obtained by analyzing CLIENT-WIN 1.21.2 using IDA.*/

    // Align member variables by adding padding to match their respective offsets
    // Cannot be used before adding padding
    // ChunkPos                    mPosition;      // this+0x78
    // int8_t                      mLoadingStage;  // this+0xD8
    // int32_t                     mLastTick;      // this+0x120
    // std::vector<class SubChunk> mSubChunks;     // this+0x138
    // int32_t                     mLoadCompleted; // this+0xDE4
    // bool                        mIsLoading;     // this+0x11BB
public:
    // prevent constructor by default
    LevelChunk& operator=(LevelChunk const&);
    LevelChunk(LevelChunk const&);
    LevelChunk();

public:
    // NOLINTBEGIN
    MCAPI LevelChunk(
        class Dimension&      dimension,
        class ChunkPos const& cp,
        bool                  readOnly,
        ::SubChunkInitMode    initBlocks,
        bool                  initializeMetaData
    );

    MCAPI void _changeTerrainDataState(::ChunkTerrainDataState from, ::ChunkTerrainDataState to);

    MCAPI ::ChunkTerrainDataState _getTerrainDataState() const;

    MCAPI void _onRandomTickingQueueChanged();

    MCAPI void _onTickingQueueChanged();

    MCAPI void _setGenerator(class ChunkSource* generator);

    MCAPI bool _setOnChunkLoadedCalled();

    MCAPI bool actorDataNeedsSaving(int wait, int maxWait) const;

    MCAPI void addEntity(class WeakEntityRef entityRef);

    MCAPI void addHardcodedSpawningArea(class BoundingBox const& spawnerAABB, ::HardcodedSpawnAreaType type);

    MCAPI void addStructure(std::shared_ptr<class br::worldgen::StructureInstance const> instance);

    MCAPI void addStructureReference(std::shared_ptr<class br::worldgen::StructureInstance const> instance);

    MCAPI void addSubChunkBlockEntitiesToLevelChunk(
        std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>& blockActorMap
    );

    MCAPI bool applySeasonsPostProcess(class BlockSource& region);

    MCAPI void changeState(::ChunkState from, ::ChunkState to);

    MCAPI bool checkSeasonsPostProcessDirty();

    MCAPI bool chunkHasConvertedDataTag() const;

    MCAPI void clearDirtyTickCounters();

    MCAPI void
    clientSubChunkRequestGenerateLightingForSubChunk(class ChunkViewSource& neighborhood, short absoluteIndex);

    MCAPI void deserializeBiomes(class IDataInput& stream, bool fromNetwork);

    MCAPI void deserializeBlockEntities(class IDataInput& stream);

    MCAPI void deserializeFinalization(class IDataInput& stream);

    MCAPI bool deserializeKey(std::string_view key, std::string_view value);

    MCAPI void deserializeLoadedVersion(class IDataInput& stream);

    MCAPI void deserializeMetaDataHash(class IDataInput& stream);

    MCAPI void deserializeSubChunk(
        uchar                                         idx,
        class IDataInput&                             stream,
        std::optional<schar>                          absoluteIndex,
        std::optional<struct DeserializationChanges*> deserializationChanges
    );

    MCAPI void deserializeSubChunkBlockEntities(
        class IDataInput&                                                           stream,
        std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>& blockEntityMap
    );

    MCAPI class LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const;

    MCAPI void fetchBiomes(std::vector<class Biome const*>& biomes) const;

    MCAPI void fetchBlocks(class BlockPos const& volumeOrigin, class BlockVolume& volume) const;

    MCAPI void fillBiomes(struct BiomeChunkData const& biomeChunkData);

    MCAPI void finalizeDeserialization();

    MCAPI void finalizePostProcessing();

    MCAPI void finalizeSubChunkDeserialization(
        std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>& blockActorMap,
        class buffer_span_mut<struct SubChunk>                                      subchunks
    );

    MCAPI std::optional<class BlockPos> findExposedLightningRod(class BlockPos const& pos, class BlockSource& region);

    MCAPI class Vec3 findLightningTarget(class BlockPos const& pos, class BlockSource& region);

    MCAPI bool generateOriginalLighting(class ChunkViewSource& neighborhood, bool enforceBorderCheck);

    MCAPI class ChunkLocalHeight getAboveTopSolidBlock(
        class ChunkBlockPos const& start,
        bool                       dimensionShowsSky,
        bool                       includeWater,
        bool                       includeLeaves
    );

    MCAPI void getActors(
        struct ActorDefinitionIdentifier const& actorDefinitionId,
        class AABB const&                       bb,
        std::vector<class Actor*>&              actors
    ) const;

    MCAPI class Biome const& getBiome(class ChunkBlockPos const& pos) const;

    MCAPI class Block const& getBlock(class ChunkBlockPos const& pos) const;

    MCAPI std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>> const& getBlockEntities() const;

    MCAPI class BlockActor* getBlockEntity(class ChunkBlockPos const& localPos);

    MCAPI bool getBorder(class ChunkBlockPos const& pos) const;

    MCAPI struct BrightnessPair getBrightness(class ChunkBlockPos const& pos) const;

    MCAPI schar getCachedTemperatureNoise(class ChunkBlockPos const& pos);

    MCAPI std::vector<class WeakEntityRef>& getChunkEntities();

    MCAPI class Dimension& getDimension() const;

    MCAPI void getEntities(
        gsl::span<gsl::not_null<class Actor const*>> ignoredEntities,
        class AABB const&                            bb,
        std::vector<class Actor*>&                   entities,
        bool                                         useHitbox
    ) const;

    MCAPI void
    getEntities(::ActorType type, class AABB const& bb, std::vector<class Actor*>& es, bool ignoreTargetType) const;

    MCAPI class Actor* getEntity(struct ActorUniqueID const& actorId) const;

    MCAPI class Block const& getExtraBlock(class ChunkBlockPos const& localPos) const;

    MCAPI ::LevelChunk::Finalization getFinalized() const;

    MCAPI class GameEventListenerRegistry& getGameEventListenerRegistry() const;

    MCAPI class ChunkSource* getGenerator() const;

    MCAPI int getGrassColor(class ChunkBlockPos const& pos);

    MCAPI class DimensionHeightRange const& getHeightRange() const;

    MCAPI short getHeightmap(class ChunkBlockPos const& pos) const;

    MCAPI short getHighestNonAirSubChunkIndex() const;

    MCAPI float getInterpolant(uint64 x, uint64 y) const;

    MCAPI struct Tick const& getLastTick() const;

    MCAPI class Level& getLevel() const;

    MCAPI std::optional<::LevelChunkFormat> getLoadedFormat() const;

    MCAPI class BlockPos const& getMax() const;

    MCAPI short getMaxAllocatedY() const;

    MCAPI uint64 getMaxSubChunkCnt() const;

    MCAPI short getMaxY() const;

    MCAPI std::shared_ptr<class LevelChunkMetaData const> getMetaData() const;

    MCAPI std::shared_ptr<class LevelChunkMetaData> getMetaDataCopy() const;

    MCAPI class BlockPos const& getMin() const;

    MCAPI short getMinY() const;

    MCAPI short getNonAirMaxHeight() const;

    MCAPI class ChunkPos const& getPosition() const;

    MCAPI class ChunkLocalHeight getPreWorldGenHeightmap(class ChunkBlockPos const& pos) const;

    MCAPI class HeightmapWrapper getPreWorldGenHeightmap() const;

    MCAPI std::vector<std::shared_ptr<class BlockActor>> const& getPreservedBlockEntities() const;

    MCAPI class BlockTickingQueue& getRandomTickQueue();

    MCAPI struct Brightness getRawBrightness(class ChunkBlockPos const& pos, struct Brightness skyDampen) const;

    MCAPI std::vector<struct LevelChunk::HardcodedSpawningArea> const& getSpawningAreas() const;

    MCAPI std::atomic<::ChunkState> const& getState() const;

    MCAPI struct SubChunk* getSubChunk(short absoluteIndex);

    MCAPI struct SubChunk const* getSubChunk(short absoluteIndex) const;

    MCAPI class Biome const& getSurfaceBiome(class ChunkBlockPos pos) const;

    MCAPI class BlockTickingQueue& getTickQueue();

    MCAPI class BlockTickingQueue const& getTickQueue() const;

    MCAPI class BlockPos const getTopRainBlockPos(class ChunkBlockPos const& pos);

    MCAPI class ChunkLocalHeight getTotalAllocatedHeight() const;

    MCAPI bool hasAnyBiomeStates() const;

    MCAPI bool hasBlockEntitiesToSerialize() const;

    MCAPI bool hasEntitiesPendingToLoad() const;

    MCAPI bool hasEntitiesToSerialize() const;

    MCAPI bool hasEntity(class WeakEntityRef entityRef);

    MCAPI bool isAnyBlockEntityDirty();

    MCAPI bool isBlockInChunk(class BlockPos const& block) const;

    MCAPI bool isClientGeneratedChunk() const;

    MCAPI bool isEmptyClientChunk() const;

    MCAPI bool isFullyLoaded() const;

    MCAPI bool isNonActorDataDirty() const;

    MCAPI bool isReadOnly() const;

    MCAPI bool isSkyLit(class ChunkBlockPos const& pos) const;

    MCAPI void legacyDeserializeBlockExtraData(class IDataInput& stream);

    MCAPI void legacyDeserializeTerrain(class IDataInput& stream);

    MCAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const;

    MCAPI void markSaveIfNeverSaved();

    MCAPI void markSaveNonActorDataIfDirty();

    MCAPI bool metaDataDirty() const;

    MCAPI bool needsUpgradeFix() const;

    MCAPI bool needsWallFix() const;

    MCAPI bool nonActorDataNeedsSaving(int wait, int maxWait) const;

    MCAPI void onBlockEntityChanged();

    MCAPI void onDiscarded();

    MCAPI class LevelChunk& operator=(class LevelChunk&& otherChunk);

    MCAPI void placeCallbacks(
        class ChunkBlockPos const&        pos,
        class Block const&                old,
        class Block const&                current,
        class BlockSource*                currentSource,
        std::shared_ptr<class BlockActor> blockEntity
    );

    MCAPI void populateHeightMapDataForSubChunkPacket(
        short                                      subChunkAbsoluteIndex,
        struct SubChunkPacket::SubChunkPacketData& subChunkPacketData
    ) const;

    MCAPI void pruneBiomesAboveHeightmap();

    MCAPI void recalculateSubchunkHashes(bool network);

    MCAPI void recomputeHeightMap(bool resetLighting);

    MCAPI std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const& blockPos);

    MCAPI bool removeEntityFromChunk(class WeakEntityRef entityRef);

    MCAPI bool removeEntityFromWorld(class WeakEntityRef entityRef);

    MCAPI void removeHardcodedSpawningArea(::HardcodedSpawnAreaType type);

    MCAPI void serialize2DMaps(class IDataOutput& stream) const;

    MCAPI void serialize3DMaps(class IDataOutput& stream) const;

    MCAPI void serializeBiomeStates(class IDataOutput& stream) const;

    MCAPI void serializeBiomes(class IDataOutput& stream) const;

    MCAPI void serializeBlockEntities(class IDataOutput& stream) const;

    MCAPI void serializeBlockEntitiesForSubChunk(class IDataOutput& stream, class SubChunkPos const& subChunkPos) const;

    MCAPI bool serializeBorderBlocks(class IDataOutput& stream) const;

    MCAPI void serializeEntities(
        std::string&                            buffer,
        bool                                    markProcessedOnChunkDisard,
        std::function<void(std::string const&)> addLiveActorCallback,
        std::function<void(std::string const&)> addActorKeyCallback,
        std::function<void(std::string const&)> addSerializedActor
    ) const;

    MCAPI void serializeEntityRemovals(std::function<void(std::string const&)> callback);

    MCAPI void serializeFinalization(class IDataOutput& stream) const;

    MCAPI bool serializeHardcodedSpawners(class IDataOutput& stream) const;

    MCAPI void serializeMetaDataHash(class IDataOutput& stream) const;

    MCAPI void serializeRandomTicks(class IDataOutput& stream) const;

    MCAPI void serializeTicks(class IDataOutput& stream) const;

    MCAPI void
    setAllLegacyBlockIDAndData(class buffer_span<struct BlockID> ids, class buffer_span<struct NibblePair> data);

    MCAPI void setBiome2d(class Biome const& biome, class ChunkBlockPos const& pos);

    MCAPI void setBiomeFromVolume(class ClientBlockPipeline::VolumeOf<class Biome const*> const& volume, uint yOffset);

    MCAPI class Block const& setBlock(
        class ChunkBlockPos const&        pos,
        class Block const&                block,
        class BlockSource*                issuingSource,
        std::shared_ptr<class BlockActor> blockEntity
    );

    MCAPI void setBlockSimple(class ChunkBlockPos const& pos, class Block const& block);

    MCAPI void setBlockVolume(class BlockVolume const& box, uint yOffset);

    MCAPI void setBorder(class ChunkBlockPos const& pos, bool val);

    MCAPI void setCachedTemperatureNoise(class ChunkBlockPos const& pos, schar noiseVal);

    MCAPI void setChunkInterpolants(class LevelChunk::Neighbors const& savedNeighbors);

    MCAPI class Block const&
    setExtraBlock(class ChunkBlockPos const& localPos, class Block const& block, class BlockSource* issuingSource);

    MCAPI void setExtraBlockSimple(class ChunkBlockPos const& pos, class Block const& block);

    MCAPI void setFinalized(::LevelChunk::Finalization state);

    MCAPI void setHadSerializedEntities();

    MCAPI void setIsClientGeneratedChunk(bool isClientGenerated);

    MCAPI void setMetaData(std::shared_ptr<class LevelChunkMetaData> metaData);

    MCAPI void setPendingEntities(std::string entitiesData);

    MCAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>> heightmap);

    MCAPI void setSaved();

    MCAPI void setUnsaved();

    MCAPI void setupRedstoneCircuit(class BlockSource& resource);

    MCAPI bool shouldSaveIfNeverSaved() const;

    MCAPI bool shouldSaveNonActorDataIfDirty() const;

    MCAPI bool subChunkIsSafeReference(class BlockPos const& blockPos) const;

    MCAPI void tick(class BlockSource& tickRegion, struct Tick const& tick);

    MCAPI void tickBlockEntities(class BlockSource& tickRegion);

    MCAPI void tickBlocks(class BlockSource& region);

    MCAPI class BlockPos toWorldPos(class ChunkBlockPos const& cbp) const;

    MCAPI bool tryChangeState(::ChunkState from, ::ChunkState to);

    MCAPI void trySpawnSkeletonTrap(class BlockSource& region, class BlockPos const& pos);

    MCAPI void updateLoadedMetaDataHash();

    MCAPI void validateAndFixBiomeStates();

    MCAPI bool wasTickedThisTick(struct Tick const& tick) const;

    MCAPI ~LevelChunk();

    MCAPI static bool borderBlocksAreEnabled();

    MCAPI static std::unique_ptr<class LevelChunk, struct LevelChunkPhase1Deleter>
    createNew(class Dimension& dimension, class ChunkPos cp, bool readOnly, ::SubChunkInitMode initBlocks);

    MCAPI static std::tuple<std::array<class ChunkLocalHeight, 256>, std::array<struct BiomeChunkData, 256>>
    deserialize2DData(class IDataInput& stream);

    MCAPI static std::pair<ushort, std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>>
    deserialize3DBiomes(
        class IDataInput&          stream,
        class BiomeRegistry const& biomeRegistry,
        ushort                     dimensionHeightInSubchunks,
        class Biome*               defaultBiome,
        bool                       fromNetwork
    );

    MCAPI static std::tuple<
        std::array<class ChunkLocalHeight, 256>,
        ushort,
        std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>>
    deserialize3DData(
        class IDataInput&          stream,
        class BiomeRegistry const& biomeRegistry,
        ushort                     dimensionHeightInSubchunks,
        class Biome*               defaultBiomes
    );

    MCAPI static void deserializeSubChunk(
        class IDataInput&                             stream,
        class ChunkPos const&                         chunkPosition,
        std::optional<schar>                          absoluteIndex,
        struct SubChunk&                              sc,
        class BlockPalette&                           blockPalette,
        std::optional<struct DeserializationChanges*> deserializationChanges
    );

    MCAPI static void flushGarbageCollector();

    MCAPI static std::pair<::LevelChunkTag, short> getTagAndSubIndexFromKey(std::string_view key);

    MCAPI static void serializeEntities(
        std::vector<class WeakEntityRef> const& entities,
        std::string const&                      serializedEntitiesBuffer,
        std::string&                            buffer,
        bool                                    markProcessedOnChunkDisard,
        std::function<void(std::string const&)> addLiveActorCallback,
        std::function<void(std::string const&)> addActorKeyCallback,
        std::function<void(std::string const&)> addSerializedActor
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class BlockActor> _createBlockEntity(
        class BlockPos const& block,
        class BlockSource*    currentSource,
        class Block const&    current,
        class Block const&    old
    );

    MCAPI void _deserializeBlockEntities(
        class IDataInput&                                                           stream,
        std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>& blockEntityMap
    );

    MCAPI void
    _deserializeEntity(class BlockSource& source, class IDataInput& stream, std::vector<struct ActorLink>& links);

    MCAPI void _fixupCorruptedBlockActors(
        std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>& deserialized,
        class buffer_span_mut<struct SubChunk>                                      subchunks
    );

    MCAPI void _generateOriginalLighting(class ChunkViewSource& neighborhood, bool enforceBorderCheck);

    MCAPI void _generateOriginalLightingSubChunk(class BlockSource& source, uint64 subchunkIdx, bool);

    MCAPI void _lightingCallbacks(
        class ChunkBlockPos const& pos,
        class Block const&         old,
        class Block const&         current,
        class BlockSource*         currentSource
    );

    MCAPI void _placeBlockEntity(std::shared_ptr<class BlockActor> te);

    MCAPI void _reassignSubChunks(class buffer_span_mut<struct SubChunk> newChunks);

    MCAPI bool _recalcHeight(class ChunkBlockPos const& start, class BlockSource* source);

    MCAPI void _removeCallbacks(
        class ChunkBlockPos const& pos,
        class Block const&         oldBlock,
        class Block const&         current,
        class BlockSource*         currentSource
    );

    MCAPI void _setAllBiomesFrom2D(std::array<struct BiomeChunkData, 256>& legacyBiomes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addEntityToVolumes(gsl::not_null<class Actor*> actor);

    MCAPI void _deserializeCCsubChunks(short index, class StringByteInput& stream);

    MCAPI bool _deserializeSubChunk(short index, class StringByteInput& stream);

    MCAPI void _disableBlockEntityAccessForThisThread() const;

    MCAPI void _enableBlockEntityAccessForThisThread() const;

    MCAPI void _fixupCommandBlocksOnTickingQueue(class BlockSource& tickRegion);

    MCAPI void _makeUniformBiomes(class Biome const& biome);

    MCAPI void _replaceBiomeStorage(
        ushort                                                         biomeIndex,
        std::unique_ptr<class SubChunkStorage<class Biome>>            newStorage,
        class Bedrock::Threading::UniqueLock<std::shared_mutex> const& lock
    );

    MCAPI void _setBiome(class Biome const& biome, class ChunkBlockPos const& pos, bool fillYDimension);

    MCAPI void _setBiome(
        class Biome const&                                             biome,
        ushort                                                         biomeIndex,
        ushort                                                         storageIndex,
        class Bedrock::Threading::UniqueLock<std::shared_mutex> const& writeLock
    );

    MCAPI void
    _tickSnowAndIce(class BlockSource& region, class Random& random, int xOffset, int zOffset, class Weather& weather);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class Dimension&      dimension,
        class ChunkPos const& cp,
        bool                  readOnly,
        ::SubChunkInitMode    initBlocks,
        bool                  initializeMetaData
    );

    MCAPI void dtor$();

    MCAPI static int const& UPDATE_MAP_BIT_SHIFT();

    // NOLINTEND
};
