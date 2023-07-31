#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/UniqueLock.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/world/level/block/utils/VolumeOf.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

class LevelChunk {
public:
    // LevelChunk inner types declare
    // clang-format off
    struct HardcodedSpawningArea;
    class Neighbors;
    // clang-format on

    // LevelChunk inner types define
    enum class Finalization {};

    struct HardcodedSpawningArea {

    public:
        // prevent constructor by default
        HardcodedSpawningArea& operator=(HardcodedSpawningArea const&) = delete;
        HardcodedSpawningArea(HardcodedSpawningArea const&)            = delete;
        HardcodedSpawningArea()                                        = delete;
    };

    class Neighbors {

    public:
        // prevent constructor by default
        Neighbors& operator=(Neighbors const&) = delete;
        Neighbors(Neighbors const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Neighbors\@LevelChunk\@\@QEAA\@XZ
         */
        MCAPI Neighbors();
        /**
         * @symbol ??0Neighbors\@LevelChunk\@\@QEAA\@AEAVStringByteInput\@\@\@Z
         */
        MCAPI Neighbors(class StringByteInput&);
        /**
         * @symbol ?hasNeighbor\@Neighbors\@LevelChunk\@\@QEBA_NW4LevelChunkNeighbor\@\@\@Z
         */
        MCAPI bool hasNeighbor(enum class LevelChunkNeighbor) const;
        /**
         * @symbol ?isSurrounded\@Neighbors\@LevelChunk\@\@QEBA_NXZ
         */
        MCAPI bool isSurrounded() const;
        /**
         * @symbol ?serialize\@Neighbors\@LevelChunk\@\@QEBAXAEAVStringByteOutput\@\@\@Z
         */
        MCAPI void serialize(class StringByteOutput&) const;
        /**
         * @symbol ?setNeighbor\@Neighbors\@LevelChunk\@\@QEAAXW4LevelChunkNeighbor\@\@_N\@Z
         */
        MCAPI void setNeighbor(enum class LevelChunkNeighbor, bool);
        /**
         * @symbol
         * ?sOffsetMap\@Neighbors\@LevelChunk\@\@2V?$array\@U?$pair\@W4LevelChunkNeighbor\@\@VChunkPos\@\@\@std\@\@$07\@std\@\@B
         */
        MCAPI static std::array<std::pair<enum class LevelChunkNeighbor, class ChunkPos>, 8> const sOffsetMap;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    LevelChunk& operator=(LevelChunk const&) = delete;
    LevelChunk(LevelChunk const&)            = delete;
    LevelChunk()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0LevelChunk\@\@QEAA\@AEAVDimension\@\@AEBVChunkPos\@\@_NW4SubChunkInitMode\@\@2\@Z
     */
    MCAPI LevelChunk(class Dimension&, class ChunkPos const&, bool, enum class SubChunkInitMode, bool);
    /**
     * @symbol ?_changeTerrainDataState\@LevelChunk\@\@QEAAXW4ChunkTerrainDataState\@\@0\@Z
     */
    MCAPI void _changeTerrainDataState(enum class ChunkTerrainDataState, enum class ChunkTerrainDataState);
    /**
     * @symbol ?_getTerrainDataState\@LevelChunk\@\@QEBA?AW4ChunkTerrainDataState\@\@XZ
     */
    MCAPI enum class ChunkTerrainDataState _getTerrainDataState() const;
    /**
     * @symbol ?_onRandomTickingQueueChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void _onRandomTickingQueueChanged();
    /**
     * @symbol ?_onTickingQueueChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void _onTickingQueueChanged();
    /**
     * @symbol ?_setGenerator\@LevelChunk\@\@QEAAXPEAVChunkSource\@\@\@Z
     */
    MCAPI void _setGenerator(class ChunkSource*);
    /**
     * @symbol ?_setOnChunkLoadedCalled\@LevelChunk\@\@QEAA_NXZ
     */
    MCAPI bool _setOnChunkLoadedCalled();
    /**
     * @symbol ?actorDataNeedsSaving\@LevelChunk\@\@QEBA_NHH\@Z
     */
    MCAPI bool actorDataNeedsSaving(int, int) const;
    /**
     * @symbol ?addEntity\@LevelChunk\@\@QEAAXVWeakEntityRef\@\@\@Z
     */
    MCAPI void addEntity(class WeakEntityRef);
    /**
     * @symbol ?addHardcodedSpawningArea\@LevelChunk\@\@QEAAXAEBVBoundingBox\@\@W4HardcodedSpawnAreaType\@\@\@Z
     */
    MCAPI void addHardcodedSpawningArea(class BoundingBox const&, enum class HardcodedSpawnAreaType);
    /**
     * @symbol
     * ?addSubChunkBlockEntitiesToLevelChunk\@LevelChunk\@\@QEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void
    addSubChunkBlockEntitiesToLevelChunk(std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&);
    /**
     * @symbol ?applySeasonsPostProcess\@LevelChunk\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool applySeasonsPostProcess(class BlockSource&);
    /**
     * @symbol ?changeState\@LevelChunk\@\@QEAAXW4ChunkState\@\@0\@Z
     */
    MCAPI void changeState(enum class ChunkState, enum class ChunkState);
    /**
     * @symbol ?checkSeasonsPostProcessDirty\@LevelChunk\@\@QEAA_NXZ
     */
    MCAPI bool checkSeasonsPostProcessDirty();
    /**
     * @symbol ?chunkHasConvertedDataTag\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool chunkHasConvertedDataTag() const;
    /**
     * @symbol ?clearDirtyTickCounters\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void clearDirtyTickCounters();
    /**
     * @symbol ?clearPreservedEntities\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void clearPreservedEntities();
    /**
     * @symbol ?clientSubChunkRequestGenerateLightingForSubChunk\@LevelChunk\@\@QEAAXAEAVChunkViewSource\@\@F\@Z
     */
    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(class ChunkViewSource&, short);
    /**
     * @symbol ?deserializeBiomes\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeBiomes(class IDataInput&);
    /**
     * @symbol ?deserializeBlockEntities\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeBlockEntities(class IDataInput&);
    /**
     * @symbol ?deserializeFinalization\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeFinalization(class IDataInput&);
    /**
     * @symbol ?deserializeHardcodedSpawners\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeHardcodedSpawners(class IDataInput&);
    /**
     * @symbol ?deserializeKey\@LevelChunk\@\@QEAA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z
     */
    MCAPI bool deserializeKey(std::string_view, std::string_view);
    /**
     * @symbol ?deserializeLoadedVersion\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeLoadedVersion(class IDataInput&);
    /**
     * @symbol ?deserializeMetaDataHash\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeMetaDataHash(class IDataInput&);
    /**
     * @symbol
     * ?deserializeSubChunk\@LevelChunk\@\@QEAAXEAEAVIDataInput\@\@V?$optional\@C\@std\@\@V?$optional\@PEAUDeserializationChanges\@\@\@4\@\@Z
     */
    MCAPI void
    deserializeSubChunk(unsigned char, class IDataInput&, std::optional<signed char>, std::optional<struct DeserializationChanges*>);
    /**
     * @symbol
     * ?deserializeSubChunkBlockEntities\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@AEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void
    deserializeSubChunkBlockEntities(class IDataInput&, std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&);
    /**
     * @symbol ?enableBlockEntityAccessForThisThread\@LevelChunk\@\@QEBA?AVLevelChunkBlockActorAccessToken\@\@XZ
     */
    MCAPI class LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const;
    /**
     * @symbol
     * ?fetchBiomes\@LevelChunk\@\@QEBAXAEAV?$vector\@PEBVBiome\@\@V?$allocator\@PEBVBiome\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchBiomes(std::vector<class Biome const*>&) const;
    /**
     * @symbol ?fetchBlocks\@LevelChunk\@\@QEBAXAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI void fetchBlocks(class BlockPos const&, class BlockVolume&) const;
    /**
     * @symbol ?fillBiomes\@LevelChunk\@\@QEAAXAEBUBiomeChunkData\@\@\@Z
     */
    MCAPI void fillBiomes(struct BiomeChunkData const&);
    /**
     * @symbol ?finalizeDeserialization\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void finalizeDeserialization();
    /**
     * @symbol ?finalizePostProcessing\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void finalizePostProcessing();
    /**
     * @symbol
     * ?finalizeSubChunkDeserialization\@LevelChunk\@\@QEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@V?$buffer_span_mut\@USubChunk\@\@\@\@\@Z
     */
    MCAPI void
    finalizeSubChunkDeserialization(std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&, class buffer_span_mut<struct SubChunk>);
    /**
     * @symbol
     * ?findExposedLightningRod\@LevelChunk\@\@QEAA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI std::optional<class BlockPos> findExposedLightningRod(class BlockPos const&, class BlockSource&);
    /**
     * @symbol ?findLightningTarget\@LevelChunk\@\@QEAA?AVVec3\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class Vec3 findLightningTarget(class BlockPos const&, class BlockSource&);
    /**
     * @symbol ?generateOriginalLighting\@LevelChunk\@\@QEAA_NAEAVChunkViewSource\@\@_N\@Z
     */
    MCAPI bool generateOriginalLighting(class ChunkViewSource&, bool);
    /**
     * @symbol ?getAboveTopSolidBlock\@LevelChunk\@\@QEAA?AVChunkLocalHeight\@\@AEBVChunkBlockPos\@\@_N11\@Z
     */
    MCAPI class ChunkLocalHeight getAboveTopSolidBlock(class ChunkBlockPos const&, bool, bool, bool);
    /**
     * @symbol
     * ?getActors\@LevelChunk\@\@QEBAXAEBUActorDefinitionIdentifier\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void getActors(struct ActorDefinitionIdentifier const&, class AABB const&, std::vector<class Actor*>&) const;
    /**
     * @symbol ?getBiome\@LevelChunk\@\@QEBAAEAVBiome\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Biome& getBiome(class ChunkBlockPos const&) const;
    /**
     * @symbol ?getBlock\@LevelChunk\@\@QEBAAEBVBlock\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Block const& getBlock(class ChunkBlockPos const&) const;
    /**
     * @symbol
     * ?getBlockEntities\@LevelChunk\@\@QEBAAEBV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>> const& getBlockEntities() const;
    /**
     * @symbol ?getBlockEntity\@LevelChunk\@\@QEAAPEAVBlockActor\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockActor* getBlockEntity(class ChunkBlockPos const&);
    /**
     * @symbol ?getBorder\@LevelChunk\@\@QEBA_NAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI bool getBorder(class ChunkBlockPos const&) const;
    /**
     * @symbol ?getBrightness\@LevelChunk\@\@QEBA?AUBrightnessPair\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI struct BrightnessPair getBrightness(class ChunkBlockPos const&) const;
    /**
     * @symbol ?getCachedTemperatureNoise\@LevelChunk\@\@QEAACAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI signed char getCachedTemperatureNoise(class ChunkBlockPos const&);
    /**
     * @symbol
     * ?getChunkEntities\@LevelChunk\@\@QEAAAEAV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef>& getChunkEntities();
    /**
     * @symbol ?getDimension\@LevelChunk\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension& getDimension() const;
    /**
     * @symbol
     * ?getEntities\@LevelChunk\@\@QEBAXW4ActorType\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void getEntities(enum class ActorType, class AABB const&, std::vector<class Actor*>&, bool) const;
    /**
     * @symbol
     * ?getEntities\@LevelChunk\@\@QEBAXV?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void getEntities(
        class gsl::span<class gsl::not_null<class Actor const*>>,
        class AABB const&,
        std::vector<class Actor*>&,
        bool
    ) const;
    /**
     * @symbol ?getEntity\@LevelChunk\@\@QEBAPEAVActor\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class Actor* getEntity(struct ActorUniqueID const&) const;
    /**
     * @symbol ?getExtraBlock\@LevelChunk\@\@QEBAAEBVBlock\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Block const& getExtraBlock(class ChunkBlockPos const&) const;
    /**
     * @symbol ?getFinalized\@LevelChunk\@\@QEBA?AW4Finalization\@1\@XZ
     */
    MCAPI enum class LevelChunk::Finalization getFinalized() const;
    /**
     * @symbol ?getGameEventListenerRegistry\@LevelChunk\@\@QEBAAEAVGameEventListenerRegistry\@\@XZ
     */
    MCAPI class GameEventListenerRegistry& getGameEventListenerRegistry() const;
    /**
     * @symbol ?getGenerator\@LevelChunk\@\@QEBAPEAVChunkSource\@\@XZ
     */
    MCAPI class ChunkSource* getGenerator() const;
    /**
     * @symbol ?getGrassColor\@LevelChunk\@\@QEAAHAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI int getGrassColor(class ChunkBlockPos const&);
    /**
     * @symbol ?getHeightRange\@LevelChunk\@\@QEBAAEBVDimensionHeightRange\@\@XZ
     */
    MCAPI class DimensionHeightRange const& getHeightRange() const;
    /**
     * @symbol ?getHeightmap\@LevelChunk\@\@QEBAFAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI short getHeightmap(class ChunkBlockPos const&) const;
    /**
     * @symbol ?getHighestNonAirSubChunkIndex\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getHighestNonAirSubChunkIndex() const;
    /**
     * @symbol ?getInterpolant\@LevelChunk\@\@QEBAM_K0\@Z
     */
    MCAPI float getInterpolant(uint64_t, uint64_t) const;
    /**
     * @symbol ?getLastTick\@LevelChunk\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const& getLastTick() const;
    /**
     * @symbol ?getLevel\@LevelChunk\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level& getLevel() const;
    /**
     * @symbol ?getLoadedFormat\@LevelChunk\@\@QEBA?AV?$optional\@W4LevelChunkFormat\@\@\@std\@\@XZ
     */
    MCAPI std::optional<enum class LevelChunkFormat> getLoadedFormat() const;
    /**
     * @symbol ?getMax\@LevelChunk\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getMax() const;
    /**
     * @symbol ?getMaxAllocatedY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMaxAllocatedY() const;
    /**
     * @symbol ?getMaxSubChunkCnt\@LevelChunk\@\@QEBA_KXZ
     */
    MCAPI uint64_t getMaxSubChunkCnt() const;
    /**
     * @symbol ?getMaxY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMaxY() const;
    /**
     * @symbol ?getMetaData\@LevelChunk\@\@QEBA?AV?$shared_ptr\@$$CBVLevelChunkMetaData\@\@\@std\@\@XZ
     */
    MCAPI std::shared_ptr<class LevelChunkMetaData const> getMetaData() const;
    /**
     * @symbol ?getMetaDataCopy\@LevelChunk\@\@QEBA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@XZ
     */
    MCAPI std::shared_ptr<class LevelChunkMetaData> getMetaDataCopy() const;
    /**
     * @symbol ?getMin\@LevelChunk\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getMin() const;
    /**
     * @symbol ?getMinY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMinY() const;
    /**
     * @symbol ?getNonAirMaxHeight\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getNonAirMaxHeight() const;
    /**
     * @symbol ?getPosition\@LevelChunk\@\@QEBAAEBVChunkPos\@\@XZ
     */
    MCAPI class ChunkPos const& getPosition() const;
    /**
     * @symbol ?getPreWorldGenHeightmap\@LevelChunk\@\@QEBA?AVChunkLocalHeight\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class ChunkLocalHeight getPreWorldGenHeightmap(class ChunkBlockPos const&) const;
    /**
     * @symbol ?getPreWorldGenHeightmap\@LevelChunk\@\@QEBA?AVHeightmapWrapper\@\@XZ
     */
    MCAPI class HeightmapWrapper getPreWorldGenHeightmap() const;
    /**
     * @symbol
     * ?getPreservedBlockEntities\@LevelChunk\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::shared_ptr<class BlockActor>> const& getPreservedBlockEntities() const;
    /**
     * @symbol ?getRandomTickQueue\@LevelChunk\@\@QEAAAEAVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue& getRandomTickQueue();
    /**
     * @symbol ?getRawBrightness\@LevelChunk\@\@QEBA?AUBrightness\@\@AEBVChunkBlockPos\@\@U2\@\@Z
     */
    MCAPI struct Brightness getRawBrightness(class ChunkBlockPos const&, struct Brightness) const;
    /**
     * @symbol
     * ?getSpawningAreas\@LevelChunk\@\@QEBAAEBV?$vector\@UHardcodedSpawningArea\@LevelChunk\@\@V?$allocator\@UHardcodedSpawningArea\@LevelChunk\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct LevelChunk::HardcodedSpawningArea> const& getSpawningAreas() const;
    /**
     * @symbol ?getState\@LevelChunk\@\@QEBAAEBU?$atomic\@W4ChunkState\@\@\@std\@\@XZ
     */
    MCAPI std::atomic<enum class ChunkState> const& getState() const;
    /**
     * @symbol ?getSubChunk\@LevelChunk\@\@QEBAPEBUSubChunk\@\@F\@Z
     */
    MCAPI struct SubChunk const* getSubChunk(short) const;
    /**
     * @symbol ?getSubChunk\@LevelChunk\@\@QEAAPEAUSubChunk\@\@F\@Z
     */
    MCAPI struct SubChunk* getSubChunk(short);
    /**
     * @symbol ?getSurfaceBiome\@LevelChunk\@\@QEBAAEBVBiome\@\@VChunkBlockPos\@\@\@Z
     */
    MCAPI class Biome const& getSurfaceBiome(class ChunkBlockPos) const;
    /**
     * @symbol ?getTickQueue\@LevelChunk\@\@QEBAAEBVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue const& getTickQueue() const;
    /**
     * @symbol ?getTickQueue\@LevelChunk\@\@QEAAAEAVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue& getTickQueue();
    /**
     * @symbol ?getTopRainBlockPos\@LevelChunk\@\@QEAA?BVBlockPos\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockPos const getTopRainBlockPos(class ChunkBlockPos const&);
    /**
     * @symbol ?getTotalAllocatedHeight\@LevelChunk\@\@QEBA?AVChunkLocalHeight\@\@XZ
     */
    MCAPI class ChunkLocalHeight getTotalAllocatedHeight() const;
    /**
     * @symbol ?hasAnyBiomeStates\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyBiomeStates() const;
    /**
     * @symbol ?hasBlockEntitiesToSerialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasBlockEntitiesToSerialize() const;
    /**
     * @symbol ?hasEntitiesPendingToLoad\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasEntitiesPendingToLoad() const;
    /**
     * @symbol ?hasEntitiesToSerialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasEntitiesToSerialize() const;
    /**
     * @symbol ?hasEntity\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool hasEntity(class WeakEntityRef);
    /**
     * @symbol ?isAnyBlockEntityDirty\@LevelChunk\@\@QEAA_NXZ
     */
    MCAPI bool isAnyBlockEntityDirty();
    /**
     * @symbol ?isBlockInChunk\@LevelChunk\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isBlockInChunk(class BlockPos const&) const;
    /**
     * @symbol ?isClientGeneratedChunk\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isClientGeneratedChunk() const;
    /**
     * @symbol ?isEmptyClientChunk\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isEmptyClientChunk() const;
    /**
     * @symbol ?isFullyLoaded\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isFullyLoaded() const;
    /**
     * @symbol ?isNonActorDataDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isNonActorDataDirty() const;
    /**
     * @symbol ?isReadOnly\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isReadOnly() const;
    /**
     * @symbol ?isSkyLit\@LevelChunk\@\@QEBA_NAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI bool isSkyLit(class ChunkBlockPos const&) const;
    /**
     * @symbol ?legacyDeserializeBlockExtraData\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void legacyDeserializeBlockExtraData(class IDataInput&);
    /**
     * @symbol ?legacyDeserializeTerrain\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void legacyDeserializeTerrain(class IDataInput&);
    /**
     * @symbol ?levelChunkHad3dBiomeTagOnLastDeserialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const;
    /**
     * @symbol ?markSaveIfNeverSaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void markSaveIfNeverSaved();
    /**
     * @symbol ?markSaveNonActorDataIfDirty\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void markSaveNonActorDataIfDirty();
    /**
     * @symbol ?metaDataDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool metaDataDirty() const;
    /**
     * @symbol ?needsUpgradeFix\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsUpgradeFix() const;
    /**
     * @symbol ?needsWallFix\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsWallFix() const;
    /**
     * @symbol ?nonActorDataNeedsSaving\@LevelChunk\@\@QEBA_NHH\@Z
     */
    MCAPI bool nonActorDataNeedsSaving(int, int) const;
    /**
     * @symbol ?onBlockEntityChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void onBlockEntityChanged();
    /**
     * @symbol ?onDiscarded\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void onDiscarded();
    /**
     * @symbol ??4LevelChunk\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelChunk& operator=(class LevelChunk&&);
    /**
     * @symbol
     * ?placeCallbacks\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void
    placeCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*, std::shared_ptr<class BlockActor>);
    /**
     * @symbol
     * ?populateHeightMapDataForSubChunkPacket\@LevelChunk\@\@QEBAXFAEAUSubChunkPacketData\@SubChunkPacket\@\@\@Z
     */
    MCAPI void populateHeightMapDataForSubChunkPacket(short, struct SubChunkPacket::SubChunkPacketData&) const;
    /**
     * @symbol ?recomputeHeightMap\@LevelChunk\@\@QEAAX_N\@Z
     */
    MCAPI void recomputeHeightMap(bool);
    /**
     * @symbol ?removeBlockEntity\@LevelChunk\@\@QEAA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const&);
    /**
     * @symbol ?removeEntityFromChunk\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool removeEntityFromChunk(class WeakEntityRef);
    /**
     * @symbol ?removeEntityFromWorld\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool removeEntityFromWorld(class WeakEntityRef);
    /**
     * @symbol ?removeHardcodedSpawningArea\@LevelChunk\@\@QEAAXW4HardcodedSpawnAreaType\@\@\@Z
     */
    MCAPI void removeHardcodedSpawningArea(enum class HardcodedSpawnAreaType);
    /**
     * @symbol
     * ?runtimeRelightSubchunk\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@_KAEBV?$vector\@USubChunkLightUpdate\@\@V?$allocator\@USubChunkLightUpdate\@\@\@std\@\@\@std\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void
    runtimeRelightSubchunk(class BlockSource&, uint64_t, std::vector<struct SubChunkLightUpdate> const&, std::vector<class BlockPos>&);
    /**
     * @symbol ?serialize2DMaps\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serialize2DMaps(class IDataOutput&) const;
    /**
     * @symbol ?serialize3DMaps\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serialize3DMaps(class IDataOutput&) const;
    /**
     * @symbol ?serializeBiomeStates\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBiomeStates(class IDataOutput&) const;
    /**
     * @symbol ?serializeBiomes\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBiomes(class IDataOutput&) const;
    /**
     * @symbol ?serializeBlockEntities\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBlockEntities(class IDataOutput&) const;
    /**
     * @symbol ?serializeBlockEntitiesForSubChunk\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@AEBVSubChunkPos\@\@\@Z
     */
    MCAPI void serializeBlockEntitiesForSubChunk(class IDataOutput&, class SubChunkPos const&) const;
    /**
     * @symbol ?serializeBorderBlocks\@LevelChunk\@\@QEBA_NAEAVIDataOutput\@\@\@Z
     */
    MCAPI bool serializeBorderBlocks(class IDataOutput&) const;
    /**
     * @symbol
     * ?serializeEntities\@LevelChunk\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@3\@22\@Z
     */
    MCAPI void
    serializeEntities(std::string&, bool, std::function<void(std::string const&)>, std::function<void(std::string const&)>, std::function<void(std::string const&)>)
        const;
    /**
     * @symbol
     * ?serializeEntityRemovals\@LevelChunk\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serializeEntityRemovals(std::function<void(std::string const&)>);
    /**
     * @symbol ?serializeFinalization\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeFinalization(class IDataOutput&) const;
    /**
     * @symbol ?serializeHardcodedSpawners\@LevelChunk\@\@QEBA_NAEAVIDataOutput\@\@\@Z
     */
    MCAPI bool serializeHardcodedSpawners(class IDataOutput&) const;
    /**
     * @symbol ?serializeMetaDataHash\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeMetaDataHash(class IDataOutput&) const;
    /**
     * @symbol ?serializeRandomTicks\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeRandomTicks(class IDataOutput&) const;
    /**
     * @symbol ?serializeTicks\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeTicks(class IDataOutput&) const;
    /**
     * @symbol
     * ?setAllLegacyBlockIDAndData\@LevelChunk\@\@QEAAXV?$buffer_span\@UBlockID\@\@\@\@V?$buffer_span\@UNibblePair\@\@\@\@\@Z
     */
    MCAPI void setAllLegacyBlockIDAndData(class buffer_span<struct BlockID>, class buffer_span<struct NibblePair>);
    /**
     * @symbol ?setBiome2d\@LevelChunk\@\@QEAAXAEBVBiome\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI void setBiome2d(class Biome const&, class ChunkBlockPos const&);
    /**
     * @symbol ?setBiomeFromVolume\@LevelChunk\@\@QEAAXAEBV?$VolumeOf\@PEBVBiome\@\@\@ClientBlockPipeline\@\@I\@Z
     */
    MCAPI void setBiomeFromVolume(class ClientBlockPipeline::VolumeOf<class Biome const*> const&, unsigned int);
    /**
     * @symbol
     * ?setBlock\@LevelChunk\@\@QEAAAEBVBlock\@\@AEBVChunkBlockPos\@\@AEBV2\@PEAVBlockSource\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI class Block const&
    setBlock(class ChunkBlockPos const&, class Block const&, class BlockSource*, std::shared_ptr<class BlockActor>);
    /**
     * @symbol ?setBlockSimple\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void setBlockSimple(class ChunkBlockPos const&, class Block const&);
    /**
     * @symbol ?setBlockVolume\@LevelChunk\@\@QEAAXAEBVBlockVolume\@\@I\@Z
     */
    MCAPI void setBlockVolume(class BlockVolume const&, unsigned int);
    /**
     * @symbol ?setBorder\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@_N\@Z
     */
    MCAPI void setBorder(class ChunkBlockPos const&, bool);
    /**
     * @symbol ?setCachedTemperatureNoise\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@C\@Z
     */
    MCAPI void setCachedTemperatureNoise(class ChunkBlockPos const&, signed char);
    /**
     * @symbol ?setChunkInterpolants\@LevelChunk\@\@QEAAXAEBVNeighbors\@1\@\@Z
     */
    MCAPI void setChunkInterpolants(class LevelChunk::Neighbors const&);
    /**
     * @symbol ?setExtraBlock\@LevelChunk\@\@QEAAAEBVBlock\@\@AEBVChunkBlockPos\@\@AEBV2\@PEAVBlockSource\@\@\@Z
     */
    MCAPI class Block const& setExtraBlock(class ChunkBlockPos const&, class Block const&, class BlockSource*);
    /**
     * @symbol ?setExtraBlockSimple\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void setExtraBlockSimple(class ChunkBlockPos const&, class Block const&);
    /**
     * @symbol ?setFinalized\@LevelChunk\@\@QEAAXW4Finalization\@1\@\@Z
     */
    MCAPI void setFinalized(enum class LevelChunk::Finalization);
    /**
     * @symbol ?setHadSerializedEntities\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setHadSerializedEntities();
    /**
     * @symbol ?setMetaData\@LevelChunk\@\@QEAAXV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@\@Z
     */
    MCAPI void setMetaData(std::shared_ptr<class LevelChunkMetaData>);
    /**
     * @symbol
     * ?setPendingEntities\@LevelChunk\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPendingEntities(std::string);
    /**
     * @symbol
     * ?setPreWorldGenHeightMap\@LevelChunk\@\@QEAAXV?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>);
    /**
     * @symbol ?setSaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setSaved();
    /**
     * @symbol ?setUnsaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setUnsaved();
    /**
     * @symbol ?setupRedstoneCircuit\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void setupRedstoneCircuit(class BlockSource&);
    /**
     * @symbol ?shouldSaveIfNeverSaved\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool shouldSaveIfNeverSaved() const;
    /**
     * @symbol ?shouldSaveNonActorDataIfDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool shouldSaveNonActorDataIfDirty() const;
    /**
     * @symbol ?subChunkIsSafeReference\@LevelChunk\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool subChunkIsSafeReference(class BlockPos const&) const;
    /**
     * @symbol ?tick\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@AEBUTick\@\@\@Z
     */
    MCAPI void tick(class BlockSource&, struct Tick const&);
    /**
     * @symbol ?tickBlockEntities\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void tickBlockEntities(class BlockSource&);
    /**
     * @symbol ?tickBlocks\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void tickBlocks(class BlockSource&);
    /**
     * @symbol ?toWorldPos\@LevelChunk\@\@QEBA?AVBlockPos\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockPos toWorldPos(class ChunkBlockPos const&) const;
    /**
     * @symbol ?trySpawnSkeletonTrap\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void trySpawnSkeletonTrap(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ?updateLoadedMetaDataHash\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void updateLoadedMetaDataHash();
    /**
     * @symbol ?validateAndFixBiomeStates\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void validateAndFixBiomeStates();
    /**
     * @symbol ?wasTickedThisTick\@LevelChunk\@\@QEBA_NAEBUTick\@\@\@Z
     */
    MCAPI bool wasTickedThisTick(struct Tick const&) const;
    /**
     * @symbol ??1LevelChunk\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunk();
    /**
     * @symbol ?borderBlocksAreEnabled\@LevelChunk\@\@SA_NXZ
     */
    MCAPI static bool borderBlocksAreEnabled();
    /**
     * @symbol
     * ?createNew\@LevelChunk\@\@SA?AV?$unique_ptr\@VLevelChunk\@\@ULevelChunkPhase1Deleter\@\@\@std\@\@AEAVDimension\@\@VChunkPos\@\@_NW4SubChunkInitMode\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LevelChunk, struct LevelChunkPhase1Deleter>
    createNew(class Dimension&, class ChunkPos, bool, enum class SubChunkInitMode);
    /**
     * @symbol
     * ?deserialize2DData\@LevelChunk\@\@SA?AV?$tuple\@V?$array\@VChunkLocalHeight\@\@$0BAA\@\@std\@\@V?$array\@UBiomeChunkData\@\@$0BAA\@\@2\@\@std\@\@AEAVIDataInput\@\@\@Z
     */
    MCAPI static std::tuple<std::array<class ChunkLocalHeight, 256>, std::array<struct BiomeChunkData, 256>>
    deserialize2DData(class IDataInput&);
    /**
     * @symbol
     * ?deserialize3DBiomes\@LevelChunk\@\@SA?AU?$pair\@GV?$vector\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@AEAVIDataInput\@\@AEBVBiomeRegistry\@\@GPEAVBiome\@\@\@Z
     */
    MCAPI static std::pair<unsigned short, std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>>
    deserialize3DBiomes(class IDataInput&, class BiomeRegistry const&, unsigned short, class Biome*);
    /**
     * @symbol
     * ?deserialize3DData\@LevelChunk\@\@SA?AV?$tuple\@V?$array\@VChunkLocalHeight\@\@$0BAA\@\@std\@\@GV?$vector\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@\@2\@\@2\@\@std\@\@AEAVIDataInput\@\@AEBVBiomeRegistry\@\@GPEAVBiome\@\@\@Z
     */
    MCAPI static std::tuple<
        std::array<class ChunkLocalHeight, 256>,
        unsigned short,
        std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>>
    deserialize3DData(class IDataInput&, class BiomeRegistry const&, unsigned short, class Biome*);
    /**
     * @symbol
     * ?deserializeSubChunk\@LevelChunk\@\@SAXAEAVIDataInput\@\@AEBVChunkPos\@\@V?$optional\@C\@std\@\@AEAUSubChunk\@\@AEAVBlockPalette\@\@V?$optional\@PEAUDeserializationChanges\@\@\@5\@\@Z
     */
    MCAPI static void
    deserializeSubChunk(class IDataInput&, class ChunkPos const&, std::optional<signed char>, struct SubChunk&, class BlockPalette&, std::optional<struct DeserializationChanges*>);
    /**
     * @symbol ?flushGarbageCollector\@LevelChunk\@\@SAXXZ
     */
    MCAPI static void flushGarbageCollector();
    /**
     * @symbol
     * ?getTagAndSubIndexFromKey\@LevelChunk\@\@SA?AU?$pair\@W4LevelChunkTag\@\@F\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
     */
    MCAPI static std::pair<enum class LevelChunkTag, short> getTagAndSubIndexFromKey(std::string_view);
    /**
     * @symbol
     * ?serializeEntities\@LevelChunk\@\@SAXAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV43\@_NV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@3\@44\@Z
     */
    MCAPI static void
    serializeEntities(std::vector<class WeakEntityRef> const&, std::string const&, std::string&, bool, std::function<void(std::string const&)>, std::function<void(std::string const&)>, std::function<void(std::string const&)>);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_deserializeBlockEntities\@LevelChunk\@\@IEAAXAEAVIDataInput\@\@AEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void
    _deserializeBlockEntities(class IDataInput&, std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&);
    /**
     * @symbol
     * ?_deserializeEntity\@LevelChunk\@\@IEAAXAEAVBlockSource\@\@AEAVIDataInput\@\@AEAV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _deserializeEntity(class BlockSource&, class IDataInput&, std::vector<struct ActorLink>&);
    /**
     * @symbol
     * ?_fixupCorruptedBlockActors\@LevelChunk\@\@IEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@V?$buffer_span_mut\@USubChunk\@\@\@\@\@Z
     */
    MCAPI void
    _fixupCorruptedBlockActors(std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&, class buffer_span_mut<struct SubChunk>);
    /**
     * @symbol ?_generateOriginalLighting\@LevelChunk\@\@IEAAXAEAVChunkViewSource\@\@_N\@Z
     */
    MCAPI void _generateOriginalLighting(class ChunkViewSource&, bool);
    /**
     * @symbol ?_generateOriginalLightingSubChunk\@LevelChunk\@\@IEAAXAEAVBlockSource\@\@_K_N\@Z
     */
    MCAPI void _generateOriginalLightingSubChunk(class BlockSource&, uint64_t, bool);
    /**
     * @symbol ?_lightingCallbacks\@LevelChunk\@\@IEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@\@Z
     */
    MCAPI void
    _lightingCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*);
    /**
     * @symbol ?_placeBlockEntity\@LevelChunk\@\@IEAAXV?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void _placeBlockEntity(std::shared_ptr<class BlockActor>);
    /**
     * @symbol ?_recalcHeight\@LevelChunk\@\@IEAA_NAEBVChunkBlockPos\@\@PEAVBlockSource\@\@\@Z
     */
    MCAPI bool _recalcHeight(class ChunkBlockPos const&, class BlockSource*);
    /**
     * @symbol ?_removeCallbacks\@LevelChunk\@\@IEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@\@Z
     */
    MCAPI void _removeCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*);
    /**
     * @symbol ?_setAllBiomesFrom2D\@LevelChunk\@\@IEAAXAEAV?$array\@UBiomeChunkData\@\@$0BAA\@\@std\@\@\@Z
     */
    MCAPI void _setAllBiomesFrom2D(std::array<struct BiomeChunkData, 256>&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_addEntityToVolumes\@LevelChunk\@\@AEAAXV?$not_null\@PEAVActor\@\@\@gsl\@\@\@Z
     */
    MCAPI void _addEntityToVolumes(class gsl::not_null<class Actor*>);
    /**
     * @symbol ?_deserializeCCsubChunks\@LevelChunk\@\@AEAAXFAEAVStringByteInput\@\@\@Z
     */
    MCAPI void _deserializeCCsubChunks(short, class StringByteInput&);
    /**
     * @symbol ?_deserializeSubChunk\@LevelChunk\@\@AEAA_NFAEAVStringByteInput\@\@\@Z
     */
    MCAPI bool _deserializeSubChunk(short, class StringByteInput&);
    /**
     * @symbol ?_disableBlockEntityAccessForThisThread\@LevelChunk\@\@AEBAXXZ
     */
    MCAPI void _disableBlockEntityAccessForThisThread() const;
    /**
     * @symbol ?_enableBlockEntityAccessForThisThread\@LevelChunk\@\@AEBAXXZ
     */
    MCAPI void _enableBlockEntityAccessForThisThread() const;
    /**
     * @symbol ?_fixupCommandBlocksOnTickingQueue\@LevelChunk\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _fixupCommandBlocksOnTickingQueue(class BlockSource&);
    /**
     * @symbol ?_makeUniformBiomes\@LevelChunk\@\@AEAAXAEBVBiome\@\@\@Z
     */
    MCAPI void _makeUniformBiomes(class Biome const&);
    /**
     * @symbol
     * ?_replaceBiomeStorage\@LevelChunk\@\@AEAAXGV?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@AEBV?$UniqueLock\@Vshared_mutex\@std\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void
    _replaceBiomeStorage(unsigned short, std::unique_ptr<class SubChunkStorage<class Biome>>, class Bedrock::Threading::UniqueLock<std::shared_mutex> const&);
    /**
     * @symbol
     * ?_setBiome\@LevelChunk\@\@AEAAXAEBVBiome\@\@GGAEBV?$UniqueLock\@Vshared_mutex\@std\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void
    _setBiome(class Biome const&, unsigned short, unsigned short, class Bedrock::Threading::UniqueLock<std::shared_mutex> const&);
    /**
     * @symbol ?_setBiome\@LevelChunk\@\@AEAAXAEBVBiome\@\@AEBVChunkBlockPos\@\@_N\@Z
     */
    MCAPI void _setBiome(class Biome const&, class ChunkBlockPos const&, bool);
    // NOLINTEND

protected:
    // NOLINTBEGIN
    /**
     * @symbol ?UPDATE_MAP_BIT_SHIFT\@LevelChunk\@\@1HB
     */
    MCAPI static int const UPDATE_MAP_BIT_SHIFT;
    // NOLINTEND
};
