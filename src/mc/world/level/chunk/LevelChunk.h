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
        /**
         * @symbol ??0Neighbors\@LevelChunk\@\@QEAA\@XZ
         */
        MCAPI Neighbors(); // NOLINT
        /**
         * @symbol ??0Neighbors\@LevelChunk\@\@QEAA\@AEAVStringByteInput\@\@\@Z
         */
        MCAPI Neighbors(class StringByteInput&); // NOLINT
        /**
         * @symbol ?hasNeighbor\@Neighbors\@LevelChunk\@\@QEBA_NW4LevelChunkNeighbor\@\@\@Z
         */
        MCAPI bool hasNeighbor(enum class LevelChunkNeighbor) const; // NOLINT
        /**
         * @symbol ?isSurrounded\@Neighbors\@LevelChunk\@\@QEBA_NXZ
         */
        MCAPI bool isSurrounded() const; // NOLINT
        /**
         * @symbol ?serialize\@Neighbors\@LevelChunk\@\@QEBAXAEAVStringByteOutput\@\@\@Z
         */
        MCAPI void serialize(class StringByteOutput&) const; // NOLINT
        /**
         * @symbol ?setNeighbor\@Neighbors\@LevelChunk\@\@QEAAXW4LevelChunkNeighbor\@\@_N\@Z
         */
        MCAPI void setNeighbor(enum class LevelChunkNeighbor, bool); // NOLINT
        /**
         * @symbol
         * ?sOffsetMap\@Neighbors\@LevelChunk\@\@2V?$array\@U?$pair\@W4LevelChunkNeighbor\@\@VChunkPos\@\@\@std\@\@$07\@std\@\@B
         */
        MCAPI static class std::array<struct std::pair<enum class LevelChunkNeighbor, class ChunkPos>, 8> const
            sOffsetMap; // NOLINT
    };

public:
    // prevent constructor by default
    LevelChunk& operator=(LevelChunk const&) = delete;
    LevelChunk(LevelChunk const&)            = delete;
    LevelChunk()                             = delete;

public:
    /**
     * @symbol ??0LevelChunk\@\@QEAA\@AEAVDimension\@\@AEBVChunkPos\@\@_NW4SubChunkInitMode\@\@2\@Z
     */
    MCAPI LevelChunk(class Dimension&, class ChunkPos const&, bool, enum class SubChunkInitMode, bool); // NOLINT
    /**
     * @symbol ?_changeTerrainDataState\@LevelChunk\@\@QEAAXW4ChunkTerrainDataState\@\@0\@Z
     */
    MCAPI void _changeTerrainDataState(enum class ChunkTerrainDataState, enum class ChunkTerrainDataState); // NOLINT
    /**
     * @symbol ?_getTerrainDataState\@LevelChunk\@\@QEBA?AW4ChunkTerrainDataState\@\@XZ
     */
    MCAPI enum class ChunkTerrainDataState _getTerrainDataState() const; // NOLINT
    /**
     * @symbol ?_onRandomTickingQueueChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void _onRandomTickingQueueChanged(); // NOLINT
    /**
     * @symbol ?_onTickingQueueChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void _onTickingQueueChanged(); // NOLINT
    /**
     * @symbol ?_setGenerator\@LevelChunk\@\@QEAAXPEAVChunkSource\@\@\@Z
     */
    MCAPI void _setGenerator(class ChunkSource*); // NOLINT
    /**
     * @symbol ?_setOnChunkLoadedCalled\@LevelChunk\@\@QEAA_NXZ
     */
    MCAPI bool _setOnChunkLoadedCalled(); // NOLINT
    /**
     * @symbol ?actorDataNeedsSaving\@LevelChunk\@\@QEBA_NHH\@Z
     */
    MCAPI bool actorDataNeedsSaving(int, int) const; // NOLINT
    /**
     * @symbol ?addEntity\@LevelChunk\@\@QEAAXVWeakEntityRef\@\@\@Z
     */
    MCAPI void addEntity(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?addHardcodedSpawningArea\@LevelChunk\@\@QEAAXAEBVBoundingBox\@\@W4HardcodedSpawnAreaType\@\@\@Z
     */
    MCAPI void addHardcodedSpawningArea(class BoundingBox const&, enum class HardcodedSpawnAreaType); // NOLINT
    /**
     * @symbol
     * ?addSubChunkBlockEntitiesToLevelChunk\@LevelChunk\@\@QEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void addSubChunkBlockEntitiesToLevelChunk(class std::unordered_map<
                                                    class ChunkBlockPos,
                                                    class std::shared_ptr<class BlockActor>,
                                                    struct std::hash<class ChunkBlockPos>,
                                                    struct std::equal_to<class ChunkBlockPos>,
                                                    class std::allocator<struct std::pair<
                                                        class ChunkBlockPos const,
                                                        class std::shared_ptr<class BlockActor>>>>&); // NOLINT
    /**
     * @symbol ?applySeasonsPostProcess\@LevelChunk\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool applySeasonsPostProcess(class BlockSource&); // NOLINT
    /**
     * @symbol ?changeState\@LevelChunk\@\@QEAAXW4ChunkState\@\@0\@Z
     */
    MCAPI void changeState(enum class ChunkState, enum class ChunkState); // NOLINT
    /**
     * @symbol ?checkSeasonsPostProcessDirty\@LevelChunk\@\@QEAA_NXZ
     */
    MCAPI bool checkSeasonsPostProcessDirty(); // NOLINT
    /**
     * @symbol ?chunkHasConvertedDataTag\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool chunkHasConvertedDataTag() const; // NOLINT
    /**
     * @symbol ?clearDirtyTickCounters\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void clearDirtyTickCounters(); // NOLINT
    /**
     * @symbol ?clearPreservedEntities\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void clearPreservedEntities(); // NOLINT
    /**
     * @symbol ?clientSubChunkRequestGenerateLightingForSubChunk\@LevelChunk\@\@QEAAXAEAVChunkViewSource\@\@F\@Z
     */
    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(class ChunkViewSource&, short); // NOLINT
    /**
     * @symbol ?deserializeBiomes\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeBiomes(class IDataInput&); // NOLINT
    /**
     * @symbol ?deserializeBlockEntities\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeBlockEntities(class IDataInput&); // NOLINT
    /**
     * @symbol ?deserializeFinalization\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeFinalization(class IDataInput&); // NOLINT
    /**
     * @symbol ?deserializeHardcodedSpawners\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeHardcodedSpawners(class IDataInput&); // NOLINT
    /**
     * @symbol ?deserializeKey\@LevelChunk\@\@QEAA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0\@Z
     */
    MCAPI bool
        deserializeKey(class std::basic_string_view<char, struct std::char_traits<char>>, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?deserializeLoadedVersion\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeLoadedVersion(class IDataInput&); // NOLINT
    /**
     * @symbol ?deserializeMetaDataHash\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeMetaDataHash(class IDataInput&); // NOLINT
    /**
     * @symbol
     * ?deserializeSubChunk\@LevelChunk\@\@QEAAXEAEAVIDataInput\@\@V?$optional\@C\@std\@\@V?$optional\@PEAUDeserializationChanges\@\@\@4\@\@Z
     */
    MCAPI void
    deserializeSubChunk(unsigned char, class IDataInput&, class std::optional<signed char>, class std::optional<struct DeserializationChanges*>); // NOLINT
    /**
     * @symbol
     * ?deserializeSubChunkBlockEntities\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@AEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void
    deserializeSubChunkBlockEntities(class IDataInput&, class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>>&); // NOLINT
    /**
     * @symbol ?enableBlockEntityAccessForThisThread\@LevelChunk\@\@QEBA?AVLevelChunkBlockActorAccessToken\@\@XZ
     */
    MCAPI class LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const; // NOLINT
    /**
     * @symbol
     * ?fetchBiomes\@LevelChunk\@\@QEBAXAEAV?$vector\@PEBVBiome\@\@V?$allocator\@PEBVBiome\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchBiomes(std::vector<class Biome const*>&) const; // NOLINT
    /**
     * @symbol ?fetchBlocks\@LevelChunk\@\@QEBAXAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI void fetchBlocks(class BlockPos const&, class BlockVolume&) const; // NOLINT
    /**
     * @symbol ?fillBiomes\@LevelChunk\@\@QEAAXAEBUBiomeChunkData\@\@\@Z
     */
    MCAPI void fillBiomes(struct BiomeChunkData const&); // NOLINT
    /**
     * @symbol ?finalizeDeserialization\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void finalizeDeserialization(); // NOLINT
    /**
     * @symbol ?finalizePostProcessing\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void finalizePostProcessing(); // NOLINT
    /**
     * @symbol
     * ?finalizeSubChunkDeserialization\@LevelChunk\@\@QEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@V?$buffer_span_mut\@USubChunk\@\@\@\@\@Z
     */
    MCAPI void finalizeSubChunkDeserialization(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>>&, class buffer_span_mut<struct SubChunk>); // NOLINT
    /**
     * @symbol
     * ?findExposedLightningRod\@LevelChunk\@\@QEAA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos>
    findExposedLightningRod(class BlockPos const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?findLightningTarget\@LevelChunk\@\@QEAA?AVVec3\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class Vec3 findLightningTarget(class BlockPos const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?generateOriginalLighting\@LevelChunk\@\@QEAA_NAEAVChunkViewSource\@\@_N\@Z
     */
    MCAPI bool generateOriginalLighting(class ChunkViewSource&, bool); // NOLINT
    /**
     * @symbol ?getAboveTopSolidBlock\@LevelChunk\@\@QEAA?AVChunkLocalHeight\@\@AEBVChunkBlockPos\@\@_N11\@Z
     */
    MCAPI class ChunkLocalHeight getAboveTopSolidBlock(class ChunkBlockPos const&, bool, bool, bool); // NOLINT
    /**
     * @symbol
     * ?getActors\@LevelChunk\@\@QEBAXAEBUActorDefinitionIdentifier\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void
    getActors(struct ActorDefinitionIdentifier const&, class AABB const&, std::vector<class Actor*>&) const; // NOLINT
    /**
     * @symbol ?getBiome\@LevelChunk\@\@QEBAAEAVBiome\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Biome& getBiome(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol ?getBlock\@LevelChunk\@\@QEBAAEBVBlock\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Block const& getBlock(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol
     * ?getBlockEntities\@LevelChunk\@\@QEBAAEBV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        class ChunkBlockPos,
        class std::shared_ptr<class BlockActor>,
        struct std::hash<class ChunkBlockPos>,
        struct std::equal_to<class ChunkBlockPos>,
        class std::allocator<
            struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> const&
    getBlockEntities() const; // NOLINT
    /**
     * @symbol ?getBlockEntity\@LevelChunk\@\@QEAAPEAVBlockActor\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockActor* getBlockEntity(class ChunkBlockPos const&); // NOLINT
    /**
     * @symbol ?getBorder\@LevelChunk\@\@QEBA_NAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI bool getBorder(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol ?getBrightness\@LevelChunk\@\@QEBA?AUBrightnessPair\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI struct BrightnessPair getBrightness(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol ?getCachedTemperatureNoise\@LevelChunk\@\@QEAACAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI signed char getCachedTemperatureNoise(class ChunkBlockPos const&); // NOLINT
    /**
     * @symbol
     * ?getChunkEntities\@LevelChunk\@\@QEAAAEAV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef>& getChunkEntities(); // NOLINT
    /**
     * @symbol ?getDimension\@LevelChunk\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension& getDimension() const; // NOLINT
    /**
     * @symbol
     * ?getEntities\@LevelChunk\@\@QEBAXW4ActorType\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void getEntities(enum class ActorType, class AABB const&, std::vector<class Actor*>&, bool) const; // NOLINT
    /**
     * @symbol
     * ?getEntities\@LevelChunk\@\@QEBAXV?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void getEntities(
        class gsl::span<class gsl::not_null<class Actor const*>, -1>,
        class AABB const&,
        std::vector<class Actor*>&,
        bool
    ) const; // NOLINT
    /**
     * @symbol ?getEntity\@LevelChunk\@\@QEBAPEAVActor\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class Actor* getEntity(struct ActorUniqueID const&) const; // NOLINT
    /**
     * @symbol ?getExtraBlock\@LevelChunk\@\@QEBAAEBVBlock\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Block const& getExtraBlock(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol ?getFinalized\@LevelChunk\@\@QEBA?AW4Finalization\@1\@XZ
     */
    MCAPI enum class LevelChunk::Finalization getFinalized() const; // NOLINT
    /**
     * @symbol ?getGameEventListenerRegistry\@LevelChunk\@\@QEBAAEAVGameEventListenerRegistry\@\@XZ
     */
    MCAPI class GameEventListenerRegistry& getGameEventListenerRegistry() const; // NOLINT
    /**
     * @symbol ?getGenerator\@LevelChunk\@\@QEBAPEAVChunkSource\@\@XZ
     */
    MCAPI class ChunkSource* getGenerator() const; // NOLINT
    /**
     * @symbol ?getGrassColor\@LevelChunk\@\@QEAAHAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI int getGrassColor(class ChunkBlockPos const&); // NOLINT
    /**
     * @symbol ?getHeightRange\@LevelChunk\@\@QEBAAEBVDimensionHeightRange\@\@XZ
     */
    MCAPI class DimensionHeightRange const& getHeightRange() const; // NOLINT
    /**
     * @symbol ?getHeightmap\@LevelChunk\@\@QEBAFAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI short getHeightmap(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol ?getHighestNonAirSubChunkIndex\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getHighestNonAirSubChunkIndex() const; // NOLINT
    /**
     * @symbol ?getInterpolant\@LevelChunk\@\@QEBAM_K0\@Z
     */
    MCAPI float getInterpolant(unsigned __int64, unsigned __int64) const; // NOLINT
    /**
     * @symbol ?getLastTick\@LevelChunk\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const& getLastTick() const; // NOLINT
    /**
     * @symbol ?getLevel\@LevelChunk\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level& getLevel() const; // NOLINT
    /**
     * @symbol ?getLoadedFormat\@LevelChunk\@\@QEBA?AV?$optional\@W4LevelChunkFormat\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<enum class LevelChunkFormat> getLoadedFormat() const; // NOLINT
    /**
     * @symbol ?getMax\@LevelChunk\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getMax() const; // NOLINT
    /**
     * @symbol ?getMaxAllocatedY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMaxAllocatedY() const; // NOLINT
    /**
     * @symbol ?getMaxSubChunkCnt\@LevelChunk\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getMaxSubChunkCnt() const; // NOLINT
    /**
     * @symbol ?getMaxY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMaxY() const; // NOLINT
    /**
     * @symbol ?getMetaData\@LevelChunk\@\@QEBA?AV?$shared_ptr\@$$CBVLevelChunkMetaData\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData const> getMetaData() const; // NOLINT
    /**
     * @symbol ?getMetaDataCopy\@LevelChunk\@\@QEBA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> getMetaDataCopy() const; // NOLINT
    /**
     * @symbol ?getMin\@LevelChunk\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getMin() const; // NOLINT
    /**
     * @symbol ?getMinY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMinY() const; // NOLINT
    /**
     * @symbol ?getNonAirMaxHeight\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getNonAirMaxHeight() const; // NOLINT
    /**
     * @symbol ?getPosition\@LevelChunk\@\@QEBAAEBVChunkPos\@\@XZ
     */
    MCAPI class ChunkPos const& getPosition() const; // NOLINT
    /**
     * @symbol ?getPreWorldGenHeightmap\@LevelChunk\@\@QEBA?AVChunkLocalHeight\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class ChunkLocalHeight getPreWorldGenHeightmap(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol ?getPreWorldGenHeightmap\@LevelChunk\@\@QEBA?AVHeightmapWrapper\@\@XZ
     */
    MCAPI class HeightmapWrapper getPreWorldGenHeightmap() const; // NOLINT
    /**
     * @symbol
     * ?getPreservedBlockEntities\@LevelChunk\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class BlockActor>> const& getPreservedBlockEntities() const; // NOLINT
    /**
     * @symbol ?getRandomTickQueue\@LevelChunk\@\@QEAAAEAVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue& getRandomTickQueue(); // NOLINT
    /**
     * @symbol ?getRawBrightness\@LevelChunk\@\@QEBA?AUBrightness\@\@AEBVChunkBlockPos\@\@U2\@\@Z
     */
    MCAPI struct Brightness getRawBrightness(class ChunkBlockPos const&, struct Brightness) const; // NOLINT
    /**
     * @symbol
     * ?getSpawningAreas\@LevelChunk\@\@QEBAAEBV?$vector\@UHardcodedSpawningArea\@LevelChunk\@\@V?$allocator\@UHardcodedSpawningArea\@LevelChunk\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct LevelChunk::HardcodedSpawningArea> const& getSpawningAreas() const; // NOLINT
    /**
     * @symbol ?getState\@LevelChunk\@\@QEBAAEBU?$atomic\@W4ChunkState\@\@\@std\@\@XZ
     */
    MCAPI struct std::atomic<enum class ChunkState> const& getState() const; // NOLINT
    /**
     * @symbol ?getSubChunk\@LevelChunk\@\@QEBAPEBUSubChunk\@\@F\@Z
     */
    MCAPI struct SubChunk const* getSubChunk(short) const; // NOLINT
    /**
     * @symbol ?getSubChunk\@LevelChunk\@\@QEAAPEAUSubChunk\@\@F\@Z
     */
    MCAPI struct SubChunk* getSubChunk(short); // NOLINT
    /**
     * @symbol ?getSurfaceBiome\@LevelChunk\@\@QEBAAEBVBiome\@\@VChunkBlockPos\@\@\@Z
     */
    MCAPI class Biome const& getSurfaceBiome(class ChunkBlockPos) const; // NOLINT
    /**
     * @symbol ?getTickQueue\@LevelChunk\@\@QEBAAEBVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue const& getTickQueue() const; // NOLINT
    /**
     * @symbol ?getTickQueue\@LevelChunk\@\@QEAAAEAVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue& getTickQueue(); // NOLINT
    /**
     * @symbol ?getTopRainBlockPos\@LevelChunk\@\@QEAA?BVBlockPos\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockPos const getTopRainBlockPos(class ChunkBlockPos const&); // NOLINT
    /**
     * @symbol ?getTotalAllocatedHeight\@LevelChunk\@\@QEBA?AVChunkLocalHeight\@\@XZ
     */
    MCAPI class ChunkLocalHeight getTotalAllocatedHeight() const; // NOLINT
    /**
     * @symbol ?hasAnyBiomeStates\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyBiomeStates() const; // NOLINT
    /**
     * @symbol ?hasBlockEntitiesToSerialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasBlockEntitiesToSerialize() const; // NOLINT
    /**
     * @symbol ?hasEntitiesPendingToLoad\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasEntitiesPendingToLoad() const; // NOLINT
    /**
     * @symbol ?hasEntitiesToSerialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasEntitiesToSerialize() const; // NOLINT
    /**
     * @symbol ?hasEntity\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool hasEntity(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?isAnyBlockEntityDirty\@LevelChunk\@\@QEAA_NXZ
     */
    MCAPI bool isAnyBlockEntityDirty(); // NOLINT
    /**
     * @symbol ?isBlockInChunk\@LevelChunk\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isBlockInChunk(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isClientGeneratedChunk\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isClientGeneratedChunk() const; // NOLINT
    /**
     * @symbol ?isEmptyClientChunk\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isEmptyClientChunk() const; // NOLINT
    /**
     * @symbol ?isFullyLoaded\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isFullyLoaded() const; // NOLINT
    /**
     * @symbol ?isNonActorDataDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isNonActorDataDirty() const; // NOLINT
    /**
     * @symbol ?isReadOnly\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isReadOnly() const; // NOLINT
    /**
     * @symbol ?isSkyLit\@LevelChunk\@\@QEBA_NAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI bool isSkyLit(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol ?legacyDeserializeBlockExtraData\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void legacyDeserializeBlockExtraData(class IDataInput&); // NOLINT
    /**
     * @symbol ?legacyDeserializeTerrain\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void legacyDeserializeTerrain(class IDataInput&); // NOLINT
    /**
     * @symbol ?levelChunkHad3dBiomeTagOnLastDeserialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const; // NOLINT
    /**
     * @symbol ?markSaveIfNeverSaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void markSaveIfNeverSaved(); // NOLINT
    /**
     * @symbol ?markSaveNonActorDataIfDirty\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void markSaveNonActorDataIfDirty(); // NOLINT
    /**
     * @symbol ?metaDataDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool metaDataDirty() const; // NOLINT
    /**
     * @symbol ?needsUpgradeFix\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsUpgradeFix() const; // NOLINT
    /**
     * @symbol ?needsWallFix\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsWallFix() const; // NOLINT
    /**
     * @symbol ?nonActorDataNeedsSaving\@LevelChunk\@\@QEBA_NHH\@Z
     */
    MCAPI bool nonActorDataNeedsSaving(int, int) const; // NOLINT
    /**
     * @symbol ?onBlockEntityChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void onBlockEntityChanged(); // NOLINT
    /**
     * @symbol ?onDiscarded\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void onDiscarded(); // NOLINT
    /**
     * @symbol ??4LevelChunk\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelChunk& operator=(class LevelChunk&&); // NOLINT
    /**
     * @symbol
     * ?placeCallbacks\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void
    placeCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*, class std::shared_ptr<class BlockActor>); // NOLINT
    /**
     * @symbol
     * ?populateHeightMapDataForSubChunkPacket\@LevelChunk\@\@QEBAXFAEAUSubChunkPacketData\@SubChunkPacket\@\@\@Z
     */
    MCAPI void
    populateHeightMapDataForSubChunkPacket(short, struct SubChunkPacket::SubChunkPacketData&) const; // NOLINT
    /**
     * @symbol ?recomputeHeightMap\@LevelChunk\@\@QEAAX_N\@Z
     */
    MCAPI void recomputeHeightMap(bool); // NOLINT
    /**
     * @symbol ?removeBlockEntity\@LevelChunk\@\@QEAA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const&); // NOLINT
    /**
     * @symbol ?removeEntityFromChunk\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool removeEntityFromChunk(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?removeEntityFromWorld\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool removeEntityFromWorld(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?removeHardcodedSpawningArea\@LevelChunk\@\@QEAAXW4HardcodedSpawnAreaType\@\@\@Z
     */
    MCAPI void removeHardcodedSpawningArea(enum class HardcodedSpawnAreaType); // NOLINT
    /**
     * @symbol
     * ?runtimeRelightSubchunk\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@_KAEBV?$vector\@USubChunkLightUpdate\@\@V?$allocator\@USubChunkLightUpdate\@\@\@std\@\@\@std\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void
    runtimeRelightSubchunk(class BlockSource&, unsigned __int64, std::vector<struct SubChunkLightUpdate> const&, std::vector<class BlockPos>&); // NOLINT
    /**
     * @symbol ?serialize2DMaps\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serialize2DMaps(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serialize3DMaps\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serialize3DMaps(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serializeBiomeStates\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBiomeStates(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serializeBiomes\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBiomes(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serializeBlockEntities\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBlockEntities(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serializeBlockEntitiesForSubChunk\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@AEBVSubChunkPos\@\@\@Z
     */
    MCAPI void serializeBlockEntitiesForSubChunk(class IDataOutput&, class SubChunkPos const&) const; // NOLINT
    /**
     * @symbol ?serializeBorderBlocks\@LevelChunk\@\@QEBA_NAEAVIDataOutput\@\@\@Z
     */
    MCAPI bool serializeBorderBlocks(class IDataOutput&) const; // NOLINT
    /**
     * @symbol
     * ?serializeEntities\@LevelChunk\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@3\@22\@Z
     */
    MCAPI void
    serializeEntities(std::string&, bool, class std::function<void(std::string const&)>, class std::function<void(std::string const&)>, class std::function<void(std::string const&)>)
        const; // NOLINT
    /**
     * @symbol
     * ?serializeEntityRemovals\@LevelChunk\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serializeEntityRemovals(class std::function<void(std::string const&)>); // NOLINT
    /**
     * @symbol ?serializeFinalization\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeFinalization(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serializeHardcodedSpawners\@LevelChunk\@\@QEBA_NAEAVIDataOutput\@\@\@Z
     */
    MCAPI bool serializeHardcodedSpawners(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serializeMetaDataHash\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeMetaDataHash(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serializeRandomTicks\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeRandomTicks(class IDataOutput&) const; // NOLINT
    /**
     * @symbol ?serializeTicks\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeTicks(class IDataOutput&) const; // NOLINT
    /**
     * @symbol
     * ?setAllLegacyBlockIDAndData\@LevelChunk\@\@QEAAXV?$buffer_span\@UBlockID\@\@\@\@V?$buffer_span\@UNibblePair\@\@\@\@\@Z
     */
    MCAPI void
        setAllLegacyBlockIDAndData(class buffer_span<struct BlockID>, class buffer_span<struct NibblePair>); // NOLINT
    /**
     * @symbol ?setBiome2d\@LevelChunk\@\@QEAAXAEBVBiome\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI void setBiome2d(class Biome const&, class ChunkBlockPos const&); // NOLINT
    /**
     * @symbol ?setBiomeFromVolume\@LevelChunk\@\@QEAAXAEBV?$VolumeOf\@PEBVBiome\@\@\@ClientBlockPipeline\@\@I\@Z
     */
    MCAPI void
    setBiomeFromVolume(class ClientBlockPipeline::VolumeOf<class Biome const*> const&, unsigned int); // NOLINT
    /**
     * @symbol
     * ?setBlock\@LevelChunk\@\@QEAAAEBVBlock\@\@AEBVChunkBlockPos\@\@AEBV2\@PEAVBlockSource\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI class Block const&
    setBlock(class ChunkBlockPos const&, class Block const&, class BlockSource*, class std::shared_ptr<class BlockActor>); // NOLINT
    /**
     * @symbol ?setBlockSimple\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void setBlockSimple(class ChunkBlockPos const&, class Block const&); // NOLINT
    /**
     * @symbol ?setBlockVolume\@LevelChunk\@\@QEAAXAEBVBlockVolume\@\@I\@Z
     */
    MCAPI void setBlockVolume(class BlockVolume const&, unsigned int); // NOLINT
    /**
     * @symbol ?setBorder\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@_N\@Z
     */
    MCAPI void setBorder(class ChunkBlockPos const&, bool); // NOLINT
    /**
     * @symbol ?setCachedTemperatureNoise\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@C\@Z
     */
    MCAPI void setCachedTemperatureNoise(class ChunkBlockPos const&, signed char); // NOLINT
    /**
     * @symbol ?setChunkInterpolants\@LevelChunk\@\@QEAAXAEBVNeighbors\@1\@\@Z
     */
    MCAPI void setChunkInterpolants(class LevelChunk::Neighbors const&); // NOLINT
    /**
     * @symbol ?setExtraBlock\@LevelChunk\@\@QEAAAEBVBlock\@\@AEBVChunkBlockPos\@\@AEBV2\@PEAVBlockSource\@\@\@Z
     */
    MCAPI class Block const&
    setExtraBlock(class ChunkBlockPos const&, class Block const&, class BlockSource*); // NOLINT
    /**
     * @symbol ?setExtraBlockSimple\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void setExtraBlockSimple(class ChunkBlockPos const&, class Block const&); // NOLINT
    /**
     * @symbol ?setFinalized\@LevelChunk\@\@QEAAXW4Finalization\@1\@\@Z
     */
    MCAPI void setFinalized(enum class LevelChunk::Finalization); // NOLINT
    /**
     * @symbol ?setHadSerializedEntities\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setHadSerializedEntities(); // NOLINT
    /**
     * @symbol ?setMetaData\@LevelChunk\@\@QEAAXV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@\@Z
     */
    MCAPI void setMetaData(class std::shared_ptr<class LevelChunkMetaData>); // NOLINT
    /**
     * @symbol
     * ?setPendingEntities\@LevelChunk\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPendingEntities(std::string); // NOLINT
    /**
     * @symbol
     * ?setPreWorldGenHeightMap\@LevelChunk\@\@QEAAXV?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>); // NOLINT
    /**
     * @symbol ?setSaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setSaved(); // NOLINT
    /**
     * @symbol ?setUnsaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setUnsaved(); // NOLINT
    /**
     * @symbol ?setupRedstoneCircuit\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void setupRedstoneCircuit(class BlockSource&); // NOLINT
    /**
     * @symbol ?shouldSaveIfNeverSaved\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool shouldSaveIfNeverSaved() const; // NOLINT
    /**
     * @symbol ?shouldSaveNonActorDataIfDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool shouldSaveNonActorDataIfDirty() const; // NOLINT
    /**
     * @symbol ?subChunkIsSafeReference\@LevelChunk\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool subChunkIsSafeReference(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?tick\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@AEBUTick\@\@\@Z
     */
    MCAPI void tick(class BlockSource&, struct Tick const&); // NOLINT
    /**
     * @symbol ?tickBlockEntities\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void tickBlockEntities(class BlockSource&); // NOLINT
    /**
     * @symbol ?tickBlocks\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void tickBlocks(class BlockSource&); // NOLINT
    /**
     * @symbol ?toWorldPos\@LevelChunk\@\@QEBA?AVBlockPos\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockPos toWorldPos(class ChunkBlockPos const&) const; // NOLINT
    /**
     * @symbol ?trySpawnSkeletonTrap\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void trySpawnSkeletonTrap(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?updateLoadedMetaDataHash\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void updateLoadedMetaDataHash(); // NOLINT
    /**
     * @symbol ?validateAndFixBiomeStates\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void validateAndFixBiomeStates(); // NOLINT
    /**
     * @symbol ?wasTickedThisTick\@LevelChunk\@\@QEBA_NAEBUTick\@\@\@Z
     */
    MCAPI bool wasTickedThisTick(struct Tick const&) const; // NOLINT
    /**
     * @symbol ??1LevelChunk\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunk(); // NOLINT
    /**
     * @symbol ?borderBlocksAreEnabled\@LevelChunk\@\@SA_NXZ
     */
    MCAPI static bool borderBlocksAreEnabled(); // NOLINT
    /**
     * @symbol
     * ?createNew\@LevelChunk\@\@SA?AV?$unique_ptr\@VLevelChunk\@\@ULevelChunkPhase1Deleter\@\@\@std\@\@AEAVDimension\@\@VChunkPos\@\@_NW4SubChunkInitMode\@\@\@Z
     */
    MCAPI static class std::unique_ptr<class LevelChunk, struct LevelChunkPhase1Deleter>
    createNew(class Dimension&, class ChunkPos, bool, enum class SubChunkInitMode); // NOLINT
    /**
     * @symbol
     * ?deserialize2DData\@LevelChunk\@\@SA?AV?$tuple\@V?$array\@VChunkLocalHeight\@\@$0BAA\@\@std\@\@V?$array\@UBiomeChunkData\@\@$0BAA\@\@2\@\@std\@\@AEAVIDataInput\@\@\@Z
     */
    MCAPI static class std::
        tuple<class std::array<class ChunkLocalHeight, 256>, class std::array<struct BiomeChunkData, 256>>
        deserialize2DData(class IDataInput&); // NOLINT
    /**
     * @symbol
     * ?deserialize3DBiomes\@LevelChunk\@\@SA?AU?$pair\@GV?$vector\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@AEAVIDataInput\@\@AEBVBiomeRegistry\@\@GPEAVBiome\@\@\@Z
     */
    MCAPI static struct std::pair<unsigned short, std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>>
    deserialize3DBiomes(class IDataInput&, class BiomeRegistry const&, unsigned short, class Biome*); // NOLINT
    /**
     * @symbol
     * ?deserialize3DData\@LevelChunk\@\@SA?AV?$tuple\@V?$array\@VChunkLocalHeight\@\@$0BAA\@\@std\@\@GV?$vector\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@\@2\@\@2\@\@std\@\@AEAVIDataInput\@\@AEBVBiomeRegistry\@\@GPEAVBiome\@\@\@Z
     */
    MCAPI static class std::tuple<
        class std::array<class ChunkLocalHeight, 256>,
        unsigned short,
        std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>>
    deserialize3DData(class IDataInput&, class BiomeRegistry const&, unsigned short, class Biome*); // NOLINT
    /**
     * @symbol
     * ?deserializeSubChunk\@LevelChunk\@\@SAXAEAVIDataInput\@\@AEBVChunkPos\@\@V?$optional\@C\@std\@\@AEAUSubChunk\@\@AEAVBlockPalette\@\@V?$optional\@PEAUDeserializationChanges\@\@\@5\@\@Z
     */
    MCAPI static void
    deserializeSubChunk(class IDataInput&, class ChunkPos const&, class std::optional<signed char>, struct SubChunk&, class BlockPalette&, class std::optional<struct DeserializationChanges*>); // NOLINT
    /**
     * @symbol ?flushGarbageCollector\@LevelChunk\@\@SAXXZ
     */
    MCAPI static void flushGarbageCollector(); // NOLINT
    /**
     * @symbol
     * ?getTagAndSubIndexFromKey\@LevelChunk\@\@SA?AU?$pair\@W4LevelChunkTag\@\@F\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
     */
    MCAPI static struct std::pair<enum class LevelChunkTag, short>
        getTagAndSubIndexFromKey(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol
     * ?serializeEntities\@LevelChunk\@\@SAXAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV43\@_NV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@3\@44\@Z
     */
    MCAPI static void
    serializeEntities(std::vector<class WeakEntityRef> const&, std::string const&, std::string&, bool, class std::function<void(std::string const&)>, class std::function<void(std::string const&)>, class std::function<void(std::string const&)>); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_deserializeBlockEntities\@LevelChunk\@\@IEAAXAEAVIDataInput\@\@AEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void
    _deserializeBlockEntities(class IDataInput&, class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>>&); // NOLINT
    /**
     * @symbol
     * ?_deserializeEntity\@LevelChunk\@\@IEAAXAEAVBlockSource\@\@AEAVIDataInput\@\@AEAV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _deserializeEntity(class BlockSource&, class IDataInput&, std::vector<struct ActorLink>&); // NOLINT
    /**
     * @symbol
     * ?_fixupCorruptedBlockActors\@LevelChunk\@\@IEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@V?$buffer_span_mut\@USubChunk\@\@\@\@\@Z
     */
    MCAPI void _fixupCorruptedBlockActors(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>>&, class buffer_span_mut<struct SubChunk>); // NOLINT
    /**
     * @symbol ?_generateOriginalLighting\@LevelChunk\@\@IEAAXAEAVChunkViewSource\@\@_N\@Z
     */
    MCAPI void _generateOriginalLighting(class ChunkViewSource&, bool); // NOLINT
    /**
     * @symbol ?_generateOriginalLightingSubChunk\@LevelChunk\@\@IEAAXAEAVBlockSource\@\@_K_N\@Z
     */
    MCAPI void _generateOriginalLightingSubChunk(class BlockSource&, unsigned __int64, bool); // NOLINT
    /**
     * @symbol ?_lightingCallbacks\@LevelChunk\@\@IEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@\@Z
     */
    MCAPI void
    _lightingCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*); // NOLINT
    /**
     * @symbol ?_placeBlockEntity\@LevelChunk\@\@IEAAXV?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void _placeBlockEntity(class std::shared_ptr<class BlockActor>); // NOLINT
    /**
     * @symbol ?_recalcHeight\@LevelChunk\@\@IEAA_NAEBVChunkBlockPos\@\@PEAVBlockSource\@\@\@Z
     */
    MCAPI bool _recalcHeight(class ChunkBlockPos const&, class BlockSource*); // NOLINT
    /**
     * @symbol ?_removeCallbacks\@LevelChunk\@\@IEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@\@Z
     */
    MCAPI void
    _removeCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*); // NOLINT
    /**
     * @symbol ?_setAllBiomesFrom2D\@LevelChunk\@\@IEAAXAEAV?$array\@UBiomeChunkData\@\@$0BAA\@\@std\@\@\@Z
     */
    MCAPI void _setAllBiomesFrom2D(class std::array<struct BiomeChunkData, 256>&); // NOLINT

    // private:
    /**
     * @symbol ?_addEntityToVolumes\@LevelChunk\@\@AEAAXV?$not_null\@PEAVActor\@\@\@gsl\@\@\@Z
     */
    MCAPI void _addEntityToVolumes(class gsl::not_null<class Actor*>); // NOLINT
    /**
     * @symbol ?_deserializeCCsubChunks\@LevelChunk\@\@AEAAXFAEAVStringByteInput\@\@\@Z
     */
    MCAPI void _deserializeCCsubChunks(short, class StringByteInput&); // NOLINT
    /**
     * @symbol ?_deserializeSubChunk\@LevelChunk\@\@AEAA_NFAEAVStringByteInput\@\@\@Z
     */
    MCAPI bool _deserializeSubChunk(short, class StringByteInput&); // NOLINT
    /**
     * @symbol ?_disableBlockEntityAccessForThisThread\@LevelChunk\@\@AEBAXXZ
     */
    MCAPI void _disableBlockEntityAccessForThisThread() const; // NOLINT
    /**
     * @symbol ?_enableBlockEntityAccessForThisThread\@LevelChunk\@\@AEBAXXZ
     */
    MCAPI void _enableBlockEntityAccessForThisThread() const; // NOLINT
    /**
     * @symbol ?_fixupCommandBlocksOnTickingQueue\@LevelChunk\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _fixupCommandBlocksOnTickingQueue(class BlockSource&); // NOLINT
    /**
     * @symbol ?_makeUniformBiomes\@LevelChunk\@\@AEAAXAEBVBiome\@\@\@Z
     */
    MCAPI void _makeUniformBiomes(class Biome const&); // NOLINT
    /**
     * @symbol
     * ?_replaceBiomeStorage\@LevelChunk\@\@AEAAXGV?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@AEBV?$UniqueLock\@Vshared_mutex\@std\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void
    _replaceBiomeStorage(unsigned short, std::unique_ptr<class SubChunkStorage<class Biome>>, class Bedrock::Threading::UniqueLock<class std::shared_mutex> const&); // NOLINT
    /**
     * @symbol
     * ?_setBiome\@LevelChunk\@\@AEAAXAEBVBiome\@\@GGAEBV?$UniqueLock\@Vshared_mutex\@std\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void
    _setBiome(class Biome const&, unsigned short, unsigned short, class Bedrock::Threading::UniqueLock<class std::shared_mutex> const&); // NOLINT
    /**
     * @symbol ?_setBiome\@LevelChunk\@\@AEAAXAEBVBiome\@\@AEBVChunkBlockPos\@\@_N\@Z
     */
    MCAPI void _setBiome(class Biome const&, class ChunkBlockPos const&, bool); // NOLINT

protected:
    /**
     * @symbol ?UPDATE_MAP_BIT_SHIFT\@LevelChunk\@\@1HB
     */
    MCAPI static int const UPDATE_MAP_BIT_SHIFT; // NOLINT

private:
};
