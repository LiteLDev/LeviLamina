/**
 * @file  LevelChunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SubChunkPacket.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "BoundingBox.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunk.
 *
 */
class LevelChunk {

#define AFTER_EXTRA
// Add Member There
public:
enum class Finalization : int {
    Requeue = 0x0,
    Done = 0x1,
    Noop = 0x2,
};

class Neighbors {
public:
    Neighbors() = delete;
    Neighbors(Neighbors const&) = delete;
    Neighbors(Neighbors const&&) = delete;
};

enum class HardcodedSpawnAreaType : char {
    NONE = 0,
    NETHER_FORTRESS = 1,
    SWAMP_HUT = 2,
    OCEAN_MONUMENT = 3,
    UNKNOWN4 = 4,
    PILLAGER_OUTPOST = 5,
};

struct HardcodedSpawningArea {
    class BoundingBox aabb;
    enum class HardcodedSpawnAreaType type;
};
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNK
public:
    class LevelChunk& operator=(class LevelChunk const &) = delete;
    LevelChunk(class LevelChunk const &) = delete;
    LevelChunk() = delete;
#endif

public:
    /**
     * @hash   1947225295
     * @symbol  ??0LevelChunk\@\@QEAA\@AEAVDimension\@\@AEBVChunkPos\@\@_NW4SubChunkInitMode\@\@2\@Z
     */
    MCAPI LevelChunk(class Dimension &, class ChunkPos const &, bool, enum class SubChunkInitMode, bool);
    /**
     * @hash   498521037
     * @symbol  ?_changeTerrainDataState\@LevelChunk\@\@QEAAXW4ChunkTerrainDataState\@\@0\@Z
     */
    MCAPI void _changeTerrainDataState(enum class ChunkTerrainDataState, enum class ChunkTerrainDataState);
    /**
     * @hash   1030222284
     * @symbol  ?_getTerrainDataState\@LevelChunk\@\@QEBA?AW4ChunkTerrainDataState\@\@XZ
     */
    MCAPI enum class ChunkTerrainDataState _getTerrainDataState() const;
    /**
     * @hash   931994517
     * @symbol  ?_onRandomTickingQueueChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void _onRandomTickingQueueChanged();
    /**
     * @hash   -1657027899
     * @symbol  ?_onTickingQueueChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void _onTickingQueueChanged();
    /**
     * @hash   2096662835
     * @symbol  ?_setGenerator\@LevelChunk\@\@QEAAXPEAVChunkSource\@\@\@Z
     */
    MCAPI void _setGenerator(class ChunkSource *);
    /**
     * @hash   1276600504
     * @symbol  ?_setOnChunkLoadedCalled\@LevelChunk\@\@QEAA_NXZ
     */
    MCAPI bool _setOnChunkLoadedCalled();
    /**
     * @hash   -1292674684
     * @symbol  ?actorDataNeedsSaving\@LevelChunk\@\@QEBA_NHH\@Z
     */
    MCAPI bool actorDataNeedsSaving(int, int) const;
    /**
     * @hash   -967327030
     * @symbol  ?addEntity\@LevelChunk\@\@QEAAXVWeakEntityRef\@\@\@Z
     */
    MCAPI void addEntity(class WeakEntityRef);
    /**
     * @hash   1210460177
     * @symbol  ?addHardcodedSpawningArea\@LevelChunk\@\@QEAAXAEBVBoundingBox\@\@W4HardcodedSpawnAreaType\@\@\@Z
     */
    MCAPI void addHardcodedSpawningArea(class BoundingBox const &, enum class HardcodedSpawnAreaType);
    /**
     * @hash   -1963434593
     * @symbol  ?addSubChunkBlockEntitiesToLevelChunk\@LevelChunk\@\@QEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void addSubChunkBlockEntitiesToLevelChunk(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &);
    /**
     * @hash   808415617
     * @symbol  ?applySeasonsPostProcess\@LevelChunk\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool applySeasonsPostProcess(class BlockSource &);
    /**
     * @hash   -914085306
     * @symbol  ?changeState\@LevelChunk\@\@QEAAXW4ChunkState\@\@0\@Z
     */
    MCAPI void changeState(enum class ChunkState, enum class ChunkState);
    /**
     * @hash   10275762
     * @symbol  ?checkSeasonsPostProcessDirty\@LevelChunk\@\@QEAA_NXZ
     */
    MCAPI bool checkSeasonsPostProcessDirty();
    /**
     * @hash   -427711966
     * @symbol  ?chunkHasConvertedDataTag\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool chunkHasConvertedDataTag() const;
    /**
     * @hash   1546350341
     * @symbol  ?clearDirtyTickCounters\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void clearDirtyTickCounters();
    /**
     * @hash   1980317797
     * @symbol  ?clearPreservedEntities\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void clearPreservedEntities();
    /**
     * @hash   609752302
     * @symbol  ?clientSubChunkRequestGenerateLightingForSubChunk\@LevelChunk\@\@QEAAXAEAVChunkViewSource\@\@F\@Z
     */
    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(class ChunkViewSource &, short);
    /**
     * @hash   959747610
     * @symbol  ?deserializeBiomes\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeBiomes(class IDataInput &);
    /**
     * @hash   660324770
     * @symbol  ?deserializeBlockEntities\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeBlockEntities(class IDataInput &);
    /**
     * @hash   1221459524
     * @symbol  ?deserializeFinalization\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeFinalization(class IDataInput &);
    /**
     * @hash   -1904414272
     * @symbol  ?deserializeHardcodedSpawners\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeHardcodedSpawners(class IDataInput &);
    /**
     * @hash   -1542869908
     * @symbol  ?deserializeKey\@LevelChunk\@\@QEAA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@0\@Z
     */
    MCAPI bool deserializeKey(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   188042344
     * @symbol  ?deserializeLoadedVersion\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeLoadedVersion(class IDataInput &);
    /**
     * @hash   1337680310
     * @symbol  ?deserializeMetaDataHash\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeMetaDataHash(class IDataInput &);
    /**
     * @hash   -1532508876
     * @symbol  ?deserializeSubChunk\@LevelChunk\@\@QEAAXEAEAVIDataInput\@\@V?$optional\@C\@std\@\@V?$optional\@PEAUDeserializationChanges\@\@\@4\@\@Z
     */
    MCAPI void deserializeSubChunk(unsigned char, class IDataInput &, class std::optional<signed char>, class std::optional<struct DeserializationChanges *>);
    /**
     * @hash   466623540
     * @symbol  ?deserializeSubChunkBlockEntities\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@AEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void deserializeSubChunkBlockEntities(class IDataInput &, class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &);
    /**
     * @hash   -599659162
     * @symbol  ?enableBlockEntityAccessForThisThread\@LevelChunk\@\@QEBA?AVLevelChunkBlockActorAccessToken\@\@XZ
     */
    MCAPI class LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const;
    /**
     * @hash   1107801144
     * @symbol  ?fetchBiomes\@LevelChunk\@\@QEBAXAEAV?$vector\@PEBVBiome\@\@V?$allocator\@PEBVBiome\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void fetchBiomes(std::vector<class Biome const *> &) const;
    /**
     * @hash   -1127835497
     * @symbol  ?fetchBlocks\@LevelChunk\@\@QEBAXAEBVBlockPos\@\@AEAVBlockVolume\@\@\@Z
     */
    MCAPI void fetchBlocks(class BlockPos const &, class BlockVolume &) const;
    /**
     * @hash   1293170624
     * @symbol  ?fillBiomes\@LevelChunk\@\@QEAAXAEBUBiomeChunkData\@\@\@Z
     */
    MCAPI void fillBiomes(struct BiomeChunkData const &);
    /**
     * @hash   -178055805
     * @symbol  ?finalizeDeserialization\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void finalizeDeserialization();
    /**
     * @hash   152481605
     * @symbol  ?finalizePostProcessing\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void finalizePostProcessing();
    /**
     * @hash   -619385337
     * @symbol  ?finalizeSubChunkDeserialization\@LevelChunk\@\@QEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@V?$buffer_span_mut\@USubChunk\@\@\@\@\@Z
     */
    MCAPI void finalizeSubChunkDeserialization(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &, class buffer_span_mut<struct SubChunk>);
    /**
     * @hash   -1030828351
     * @symbol  ?findExposedLightningRod\@LevelChunk\@\@QEAA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos> findExposedLightningRod(class BlockPos const &, class BlockSource &);
    /**
     * @hash   -1058709490
     * @symbol  ?findLightningTarget\@LevelChunk\@\@QEAA?AVVec3\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class Vec3 findLightningTarget(class BlockPos const &, class BlockSource &);
    /**
     * @hash   -98625088
     * @symbol  ?generateOriginalLighting\@LevelChunk\@\@QEAA_NAEAVChunkViewSource\@\@_N\@Z
     */
    MCAPI bool generateOriginalLighting(class ChunkViewSource &, bool);
    /**
     * @hash   -1047909988
     * @symbol  ?getAboveTopSolidBlock\@LevelChunk\@\@QEAA?AVChunkLocalHeight\@\@AEBVChunkBlockPos\@\@_N11\@Z
     */
    MCAPI class ChunkLocalHeight getAboveTopSolidBlock(class ChunkBlockPos const &, bool, bool, bool);
    /**
     * @hash   -1340370544
     * @symbol  ?getActors\@LevelChunk\@\@QEBAXAEBUActorDefinitionIdentifier\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void getActors(struct ActorDefinitionIdentifier const &, class AABB const &, std::vector<class Actor *> &) const;
    /**
     * @hash   -1672590827
     * @symbol  ?getBiome\@LevelChunk\@\@QEBAAEAVBiome\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Biome & getBiome(class ChunkBlockPos const &) const;
    /**
     * @hash   1715628163
     * @symbol  ?getBlock\@LevelChunk\@\@QEBAAEBVBlock\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Block const & getBlock(class ChunkBlockPos const &) const;
    /**
     * @hash   1459146241
     * @symbol  ?getBlockEntities\@LevelChunk\@\@QEBAAEBV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> const & getBlockEntities() const;
    /**
     * @hash   -1272478828
     * @symbol  ?getBlockEntity\@LevelChunk\@\@QEAAPEAVBlockActor\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockActor * getBlockEntity(class ChunkBlockPos const &);
    /**
     * @hash   873065657
     * @symbol  ?getBorder\@LevelChunk\@\@QEBA_NAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI bool getBorder(class ChunkBlockPos const &) const;
    /**
     * @hash   -134450827
     * @symbol  ?getBrightness\@LevelChunk\@\@QEBA?AUBrightnessPair\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI struct BrightnessPair getBrightness(class ChunkBlockPos const &) const;
    /**
     * @hash   1512661435
     * @symbol  ?getCachedTemperatureNoise\@LevelChunk\@\@QEAACAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI signed char getCachedTemperatureNoise(class ChunkBlockPos const &);
    /**
     * @hash   -864474870
     * @symbol  ?getChunkEntities\@LevelChunk\@\@QEAAAEAV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class WeakEntityRef> & getChunkEntities();
    /**
     * @hash   570935834
     * @symbol  ?getDimension\@LevelChunk\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension & getDimension() const;
    /**
     * @hash   38445793
     * @symbol  ?getEntities\@LevelChunk\@\@QEBAXW4ActorType\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void getEntities(enum class ActorType, class AABB const &, std::vector<class Actor *> &, bool) const;
    /**
     * @hash   -157048706
     * @symbol  ?getEntities\@LevelChunk\@\@QEBAXV?$span\@V?$not_null\@PEBVActor\@\@\@gsl\@\@$0?0\@gsl\@\@AEBVAABB\@\@AEAV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void getEntities(class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, std::vector<class Actor *> &, bool) const;
    /**
     * @hash   -342300948
     * @symbol  ?getEntity\@LevelChunk\@\@QEBAPEAVActor\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class Actor * getEntity(struct ActorUniqueID const &) const;
    /**
     * @hash   1972680805
     * @symbol  ?getExtraBlock\@LevelChunk\@\@QEBAAEBVBlock\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class Block const & getExtraBlock(class ChunkBlockPos const &) const;
    /**
     * @hash   -1509995820
     * @symbol  ?getFinalized\@LevelChunk\@\@QEBA?AW4Finalization\@1\@XZ
     */
    MCAPI enum class LevelChunk::Finalization getFinalized() const;
    /**
     * @hash   1322060068
     * @symbol  ?getGameEventListenerRegistry\@LevelChunk\@\@QEBAAEAVGameEventListenerRegistry\@\@XZ
     */
    MCAPI class GameEventListenerRegistry & getGameEventListenerRegistry() const;
    /**
     * @hash   -895600861
     * @symbol  ?getGenerator\@LevelChunk\@\@QEBAPEAVChunkSource\@\@XZ
     */
    MCAPI class ChunkSource * getGenerator() const;
    /**
     * @hash   308948037
     * @symbol  ?getGrassColor\@LevelChunk\@\@QEAAHAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI int getGrassColor(class ChunkBlockPos const &);
    /**
     * @hash   -235902152
     * @symbol  ?getHeightRange\@LevelChunk\@\@QEBAAEBVDimensionHeightRange\@\@XZ
     */
    MCAPI class DimensionHeightRange const & getHeightRange() const;
    /**
     * @hash   1848844798
     * @symbol  ?getHeightmap\@LevelChunk\@\@QEBAFAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI short getHeightmap(class ChunkBlockPos const &) const;
    /**
     * @hash   -775339189
     * @symbol  ?getHighestNonAirSubChunkIndex\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getHighestNonAirSubChunkIndex() const;
    /**
     * @hash   1484560602
     * @symbol  ?getInterpolant\@LevelChunk\@\@QEBAM_K0\@Z
     */
    MCAPI float getInterpolant(unsigned __int64, unsigned __int64) const;
    /**
     * @hash   -984764000
     * @symbol  ?getLastTick\@LevelChunk\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const & getLastTick() const;
    /**
     * @hash   -1908099954
     * @symbol  ?getLevel\@LevelChunk\@\@QEBAAEAVLevel\@\@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @hash   128953921
     * @symbol  ?getLoadedFormat\@LevelChunk\@\@QEBA?AV?$optional\@W4LevelChunkFormat\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<enum class LevelChunkFormat> getLoadedFormat() const;
    /**
     * @hash   -2033205770
     * @symbol  ?getMax\@LevelChunk\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getMax() const;
    /**
     * @hash   1046000013
     * @symbol  ?getMaxAllocatedY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMaxAllocatedY() const;
    /**
     * @hash   648535221
     * @symbol  ?getMaxSubChunkCnt\@LevelChunk\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getMaxSubChunkCnt() const;
    /**
     * @hash   867427819
     * @symbol  ?getMaxY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMaxY() const;
    /**
     * @hash   -152025635
     * @symbol  ?getMetaData\@LevelChunk\@\@QEBA?AV?$shared_ptr\@$$CBVLevelChunkMetaData\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData const> getMetaData() const;
    /**
     * @hash   1728688859
     * @symbol  ?getMetaDataCopy\@LevelChunk\@\@QEBA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> getMetaDataCopy() const;
    /**
     * @hash   833957490
     * @symbol  ?getMin\@LevelChunk\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getMin() const;
    /**
     * @hash   -1007196757
     * @symbol  ?getMinY\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getMinY() const;
    /**
     * @hash   911004221
     * @symbol  ?getNonAirMaxHeight\@LevelChunk\@\@QEBAFXZ
     */
    MCAPI short getNonAirMaxHeight() const;
    /**
     * @hash   -1544501126
     * @symbol  ?getPosition\@LevelChunk\@\@QEBAAEBVChunkPos\@\@XZ
     */
    MCAPI class ChunkPos const & getPosition() const;
    /**
     * @hash   1225202039
     * @symbol  ?getPreWorldGenHeightmap\@LevelChunk\@\@QEBA?AVChunkLocalHeight\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class ChunkLocalHeight getPreWorldGenHeightmap(class ChunkBlockPos const &) const;
    /**
     * @hash   1275479874
     * @symbol  ?getPreWorldGenHeightmap\@LevelChunk\@\@QEBA?AVHeightmapWrapper\@\@XZ
     */
    MCAPI class HeightmapWrapper getPreWorldGenHeightmap() const;
    /**
     * @hash   1468574611
     * @symbol  ?getPreservedBlockEntities\@LevelChunk\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class BlockActor>> const & getPreservedBlockEntities() const;
    /**
     * @hash   214266918
     * @symbol  ?getRandomTickQueue\@LevelChunk\@\@QEAAAEAVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue & getRandomTickQueue();
    /**
     * @hash   187988551
     * @symbol  ?getRawBrightness\@LevelChunk\@\@QEBA?AUBrightness\@\@AEBVChunkBlockPos\@\@U2\@\@Z
     */
    MCAPI struct Brightness getRawBrightness(class ChunkBlockPos const &, struct Brightness) const;
    /**
     * @hash   521444510
     * @symbol  ?getSpawningAreas\@LevelChunk\@\@QEBAAEBV?$vector\@UHardcodedSpawningArea\@LevelChunk\@\@V?$allocator\@UHardcodedSpawningArea\@LevelChunk\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct LevelChunk::HardcodedSpawningArea> const & getSpawningAreas() const;
    /**
     * @hash   -1494019919
     * @symbol  ?getState\@LevelChunk\@\@QEBAAEBU?$atomic\@W4ChunkState\@\@\@std\@\@XZ
     */
    MCAPI struct std::atomic<enum class ChunkState> const & getState() const;
    /**
     * @hash   -36487489
     * @symbol  ?getSubChunk\@LevelChunk\@\@QEBAPEBUSubChunk\@\@F\@Z
     */
    MCAPI struct SubChunk const * getSubChunk(short) const;
    /**
     * @hash   -207178593
     * @symbol  ?getSubChunk\@LevelChunk\@\@QEAAPEAUSubChunk\@\@F\@Z
     */
    MCAPI struct SubChunk * getSubChunk(short);
    /**
     * @hash   1345655383
     * @symbol  ?getSurfaceBiome\@LevelChunk\@\@QEBAAEBVBiome\@\@VChunkBlockPos\@\@\@Z
     */
    MCAPI class Biome const & getSurfaceBiome(class ChunkBlockPos) const;
    /**
     * @hash   30607190
     * @symbol  ?getTickQueue\@LevelChunk\@\@QEAAAEAVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue & getTickQueue();
    /**
     * @hash   171862736
     * @symbol  ?getTickQueue\@LevelChunk\@\@QEBAAEBVBlockTickingQueue\@\@XZ
     */
    MCAPI class BlockTickingQueue const & getTickQueue() const;
    /**
     * @hash   -1196200325
     * @symbol  ?getTopRainBlockPos\@LevelChunk\@\@QEAA?BVBlockPos\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockPos const getTopRainBlockPos(class ChunkBlockPos const &);
    /**
     * @hash   851979604
     * @symbol  ?getTotalAllocatedHeight\@LevelChunk\@\@QEBA?AVChunkLocalHeight\@\@XZ
     */
    MCAPI class ChunkLocalHeight getTotalAllocatedHeight() const;
    /**
     * @hash   -56760690
     * @symbol  ?hasAnyBiomeStates\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyBiomeStates() const;
    /**
     * @hash   458995552
     * @symbol  ?hasBlockEntitiesToSerialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasBlockEntitiesToSerialize() const;
    /**
     * @hash   1491387958
     * @symbol  ?hasEntitiesPendingToLoad\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasEntitiesPendingToLoad() const;
    /**
     * @hash   2079081120
     * @symbol  ?hasEntitiesToSerialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool hasEntitiesToSerialize() const;
    /**
     * @hash   415664857
     * @symbol  ?hasEntity\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool hasEntity(class WeakEntityRef);
    /**
     * @hash   -220602895
     * @symbol  ?isBlockInChunk\@LevelChunk\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isBlockInChunk(class BlockPos const &) const;
    /**
     * @hash   345243266
     * @symbol  ?isClientGeneratedChunk\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isClientGeneratedChunk() const;
    /**
     * @symbol  ?isEmptyClientChunk\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isEmptyClientChunk() const;
    /**
     * @hash   -1206467240
     * @symbol  ?isFullyLoaded\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isFullyLoaded() const;
    /**
     * @hash   -1198310502
     * @symbol  ?isNonActorDataDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isNonActorDataDirty() const;
    /**
     * @hash   1034384644
     * @symbol  ?isReadOnly\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isReadOnly() const;
    /**
     * @symbol  ?isServerGeneratedClientChunk\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool isServerGeneratedClientChunk() const;
    /**
     * @hash   575042335
     * @symbol  ?isSkyLit\@LevelChunk\@\@QEBA_NAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI bool isSkyLit(class ChunkBlockPos const &) const;
    /**
     * @hash   -729022872
     * @symbol  ?legacyDeserializeBlockExtraData\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void legacyDeserializeBlockExtraData(class IDataInput &);
    /**
     * @hash   500784338
     * @symbol  ?legacyDeserializeTerrain\@LevelChunk\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void legacyDeserializeTerrain(class IDataInput &);
    /**
     * @hash   -1122866842
     * @symbol  ?levelChunkHad3dBiomeTagOnLastDeserialize\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const;
    /**
     * @hash   -742371435
     * @symbol  ?markSaveIfNeverSaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void markSaveIfNeverSaved();
    /**
     * @hash   1720382499
     * @symbol  ?markSaveNonActorDataIfDirty\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void markSaveNonActorDataIfDirty();
    /**
     * @hash   1797486868
     * @symbol  ?metaDataDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool metaDataDirty() const;
    /**
     * @hash   -1430327942
     * @symbol  ?needsUpgradeFix\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsUpgradeFix() const;
    /**
     * @hash   -385464056
     * @symbol  ?needsWallFix\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsWallFix() const;
    /**
     * @hash   1779843648
     * @symbol  ?nonActorDataNeedsSaving\@LevelChunk\@\@QEBA_NHH\@Z
     */
    MCAPI bool nonActorDataNeedsSaving(int, int) const;
    /**
     * @hash   -1824188363
     * @symbol  ?onBlockEntityChanged\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void onBlockEntityChanged();
    /**
     * @hash   1186185027
     * @symbol  ?onDiscarded\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void onDiscarded();
    /**
     * @hash   709921886
     * @symbol  ??4LevelChunk\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelChunk & operator=(class LevelChunk &&);
    /**
     * @hash   760537572
     * @symbol  ?placeCallbacks\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void placeCallbacks(class ChunkBlockPos const &, class Block const &, class Block const &, class BlockSource *, class std::shared_ptr<class BlockActor>);
    /**
     * @hash   -1145536650
     * @symbol  ?populateHeightMapDataForSubChunkPacket\@LevelChunk\@\@QEBAXFAEAUSubChunkPacketData\@SubChunkPacket\@\@\@Z
     */
    MCAPI void populateHeightMapDataForSubChunkPacket(short, struct SubChunkPacket::SubChunkPacketData &) const;
    /**
     * @hash   153273155
     * @symbol  ?pruneBiomesAboveHeightmap\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void pruneBiomesAboveHeightmap();
    /**
     * @hash   704682150
     * @symbol  ?recalculateSubchunkHashes\@LevelChunk\@\@QEAAX_N\@Z
     */
    MCAPI void recalculateSubchunkHashes(bool);
    /**
     * @hash   1008711294
     * @symbol  ?recomputeHeightMap\@LevelChunk\@\@QEAAX_N\@Z
     */
    MCAPI void recomputeHeightMap(bool);
    /**
     * @hash   -411322386
     * @symbol  ?removeBlockEntity\@LevelChunk\@\@QEAA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const &);
    /**
     * @hash   -292832727
     * @symbol  ?removeEntityFromChunk\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool removeEntityFromChunk(class WeakEntityRef);
    /**
     * @hash   -1366827351
     * @symbol  ?removeEntityFromWorld\@LevelChunk\@\@QEAA_NVWeakEntityRef\@\@\@Z
     */
    MCAPI bool removeEntityFromWorld(class WeakEntityRef);
    /**
     * @hash   -426789532
     * @symbol  ?removeHardcodedSpawningArea\@LevelChunk\@\@QEAAXW4HardcodedSpawnAreaType\@\@\@Z
     */
    MCAPI void removeHardcodedSpawningArea(enum class HardcodedSpawnAreaType);
    /**
     * @hash   1622615291
     * @symbol  ?runtimeRelightSubchunk\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@_KAEBV?$vector\@USubChunkLightUpdate\@\@V?$allocator\@USubChunkLightUpdate\@\@\@std\@\@\@std\@\@AEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void runtimeRelightSubchunk(class BlockSource &, unsigned __int64, std::vector<struct SubChunkLightUpdate> const &, std::vector<class BlockPos> &);
    /**
     * @hash   -1807043586
     * @symbol  ?serialize2DMaps\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serialize2DMaps(class IDataOutput &) const;
    /**
     * @hash   -333721570
     * @symbol  ?serialize3DMaps\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serialize3DMaps(class IDataOutput &) const;
    /**
     * @hash   1961871276
     * @symbol  ?serializeBiomeStates\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBiomeStates(class IDataOutput &) const;
    /**
     * @hash   -1596171346
     * @symbol  ?serializeBiomes\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBiomes(class IDataOutput &) const;
    /**
     * @hash   1921870844
     * @symbol  ?serializeBlockEntities\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeBlockEntities(class IDataOutput &) const;
    /**
     * @hash   -1768796065
     * @symbol  ?serializeBlockEntitiesForSubChunk\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@AEBVSubChunkPos\@\@\@Z
     */
    MCAPI void serializeBlockEntitiesForSubChunk(class IDataOutput &, class SubChunkPos const &) const;
    /**
     * @hash   -829243475
     * @symbol  ?serializeBorderBlocks\@LevelChunk\@\@QEBA_NAEAVIDataOutput\@\@\@Z
     */
    MCAPI bool serializeBorderBlocks(class IDataOutput &) const;
    /**
     * @hash   739769493
     * @symbol  ?serializeEntities\@LevelChunk\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@3\@22\@Z
     */
    MCAPI void serializeEntities(std::string &, bool, class std::function<void (std::string const &)>, class std::function<void (std::string const &)>, class std::function<void (std::string const &)>) const;
    /**
     * @hash   -2028726479
     * @symbol  ?serializeEntityRemovals\@LevelChunk\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serializeEntityRemovals(class std::function<void (std::string const &)>);
    /**
     * @hash   665656046
     * @symbol  ?serializeFinalization\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeFinalization(class IDataOutput &) const;
    /**
     * @hash   -272473243
     * @symbol  ?serializeHardcodedSpawners\@LevelChunk\@\@QEBA_NAEAVIDataOutput\@\@\@Z
     */
    MCAPI bool serializeHardcodedSpawners(class IDataOutput &) const;
    /**
     * @hash   -1821712802
     * @symbol  ?serializeMetaDataHash\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeMetaDataHash(class IDataOutput &) const;
    /**
     * @hash   -1535528180
     * @symbol  ?serializeRandomTicks\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeRandomTicks(class IDataOutput &) const;
    /**
     * @hash   1098929868
     * @symbol  ?serializeTicks\@LevelChunk\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeTicks(class IDataOutput &) const;
    /**
     * @hash   -1249513949
     * @symbol  ?setAllLegacyBlockIDAndData\@LevelChunk\@\@QEAAXV?$buffer_span\@UBlockID\@\@\@\@V?$buffer_span\@UNibblePair\@\@\@\@\@Z
     */
    MCAPI void setAllLegacyBlockIDAndData(class buffer_span<struct BlockID>, class buffer_span<struct NibblePair>);
    /**
     * @hash   -990837899
     * @symbol  ?setBiome2d\@LevelChunk\@\@QEAAXAEBVBiome\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI void setBiome2d(class Biome const &, class ChunkBlockPos const &);
    /**
     * @hash   -63551642
     * @symbol  ?setBiomeFromVolume\@LevelChunk\@\@QEAAXAEBV?$VolumeOf\@PEBVBiome\@\@\@ClientBlockPipeline\@\@I\@Z
     */
    MCAPI void setBiomeFromVolume(class ClientBlockPipeline::VolumeOf<class Biome const *> const &, unsigned int);
    /**
     * @hash   294554595
     * @symbol  ?setBlock\@LevelChunk\@\@QEAAAEBVBlock\@\@AEBVChunkBlockPos\@\@AEBV2\@PEAVBlockSource\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI class Block const & setBlock(class ChunkBlockPos const &, class Block const &, class BlockSource *, class std::shared_ptr<class BlockActor>);
    /**
     * @hash   -169433973
     * @symbol  ?setBlockSimple\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void setBlockSimple(class ChunkBlockPos const &, class Block const &);
    /**
     * @hash   1428284907
     * @symbol  ?setBlockVolume\@LevelChunk\@\@QEAAXAEBVBlockVolume\@\@I\@Z
     */
    MCAPI void setBlockVolume(class BlockVolume const &, unsigned int);
    /**
     * @hash   -1264160173
     * @symbol  ?setBorder\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@_N\@Z
     */
    MCAPI void setBorder(class ChunkBlockPos const &, bool);
    /**
     * @hash   1359980115
     * @symbol  ?setCachedTemperatureNoise\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@C\@Z
     */
    MCAPI void setCachedTemperatureNoise(class ChunkBlockPos const &, signed char);
    /**
     * @hash   493705974
     * @symbol  ?setChunkInterpolants\@LevelChunk\@\@QEAAXAEBVNeighbors\@1\@\@Z
     */
    MCAPI void setChunkInterpolants(class LevelChunk::Neighbors const &);
    /**
     * @hash   -1491663703
     * @symbol  ?setExtraBlock\@LevelChunk\@\@QEAAAEBVBlock\@\@AEBVChunkBlockPos\@\@AEBV2\@PEAVBlockSource\@\@\@Z
     */
    MCAPI class Block const & setExtraBlock(class ChunkBlockPos const &, class Block const &, class BlockSource *);
    /**
     * @hash   1601335977
     * @symbol  ?setExtraBlockSimple\@LevelChunk\@\@QEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void setExtraBlockSimple(class ChunkBlockPos const &, class Block const &);
    /**
     * @hash   530843264
     * @symbol  ?setFinalized\@LevelChunk\@\@QEAAXW4Finalization\@1\@\@Z
     */
    MCAPI void setFinalized(enum class LevelChunk::Finalization);
    /**
     * @hash   840944773
     * @symbol  ?setHadSerializedEntities\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setHadSerializedEntities();
    /**
     * @hash   -210176076
     * @symbol  ?setIsClientGeneratedChunk\@LevelChunk\@\@QEAAX_N\@Z
     */
    MCAPI void setIsClientGeneratedChunk(bool);
    /**
     * @hash   257098619
     * @symbol  ?setMetaData\@LevelChunk\@\@QEAAXV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@\@Z
     */
    MCAPI void setMetaData(class std::shared_ptr<class LevelChunkMetaData>);
    /**
     * @hash   -1536482588
     * @symbol  ?setPendingEntities\@LevelChunk\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPendingEntities(std::string);
    /**
     * @hash   1330901351
     * @symbol  ?setPreWorldGenHeightMap\@LevelChunk\@\@QEAAXV?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>);
    /**
     * @hash   334397749
     * @symbol  ?setSaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setSaved();
    /**
     * @hash   773288133
     * @symbol  ?setUnsaved\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void setUnsaved();
    /**
     * @hash   2063969124
     * @symbol  ?setupRedstoneCircuit\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void setupRedstoneCircuit(class BlockSource &);
    /**
     * @hash   117141052
     * @symbol  ?shouldSaveIfNeverSaved\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool shouldSaveIfNeverSaved() const;
    /**
     * @hash   1038162052
     * @symbol  ?shouldSaveNonActorDataIfDirty\@LevelChunk\@\@QEBA_NXZ
     */
    MCAPI bool shouldSaveNonActorDataIfDirty() const;
    /**
     * @hash   -801216013
     * @symbol  ?subChunkIsSafeReference\@LevelChunk\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool subChunkIsSafeReference(class BlockPos const &) const;
    /**
     * @hash   1014154941
     * @symbol  ?tick\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@AEBUTick\@\@\@Z
     */
    MCAPI void tick(class BlockSource &, struct Tick const &);
    /**
     * @hash   -2029435994
     * @symbol  ?tickBlockEntities\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void tickBlockEntities(class BlockSource &);
    /**
     * @hash   1617525796
     * @symbol  ?tickBlocks\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void tickBlocks(class BlockSource &);
    /**
     * @hash   1222997481
     * @symbol  ?toWorldPos\@LevelChunk\@\@QEBA?AVBlockPos\@\@AEBVChunkBlockPos\@\@\@Z
     */
    MCAPI class BlockPos toWorldPos(class ChunkBlockPos const &) const;
    /**
     * @hash   -922974273
     * @symbol  ?tryChangeState\@LevelChunk\@\@QEAA_NW4ChunkState\@\@0\@Z
     */
    MCAPI bool tryChangeState(enum class ChunkState, enum class ChunkState);
    /**
     * @hash   1653676997
     * @symbol  ?trySpawnSkeletonTrap\@LevelChunk\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void trySpawnSkeletonTrap(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1086680107
     * @symbol  ?updateLoadedMetaDataHash\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void updateLoadedMetaDataHash();
    /**
     * @hash   -1833231805
     * @symbol  ?validateAndFixBiomeStates\@LevelChunk\@\@QEAAXXZ
     */
    MCAPI void validateAndFixBiomeStates();
    /**
     * @hash   -1029414523
     * @symbol  ?wasTickedThisTick\@LevelChunk\@\@QEBA_NAEBUTick\@\@\@Z
     */
    MCAPI bool wasTickedThisTick(struct Tick const &) const;
    /**
     * @hash   580752243
     * @symbol  ??1LevelChunk\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunk();
    /**
     * @hash   1815954036
     * @symbol  ?borderBlocksAreEnabled\@LevelChunk\@\@SA_NXZ
     */
    MCAPI static bool borderBlocksAreEnabled();
    /**
     * @hash   715825771
     * @symbol  ?createNew\@LevelChunk\@\@SA?AV?$unique_ptr\@VLevelChunk\@\@ULevelChunkPhase1Deleter\@\@\@std\@\@AEAVDimension\@\@VChunkPos\@\@_NW4SubChunkInitMode\@\@\@Z
     */
    MCAPI static class std::unique_ptr<class LevelChunk, struct LevelChunkPhase1Deleter> createNew(class Dimension &, class ChunkPos, bool, enum class SubChunkInitMode);
    /**
     * @hash   591563577
     * @symbol  ?deserialize2DData\@LevelChunk\@\@SA?AV?$tuple\@V?$array\@VChunkLocalHeight\@\@$0BAA\@\@std\@\@V?$array\@UBiomeChunkData\@\@$0BAA\@\@2\@\@std\@\@AEAVIDataInput\@\@\@Z
     */
    MCAPI static class std::tuple<class std::array<class ChunkLocalHeight, 256>, class std::array<struct BiomeChunkData, 256>> deserialize2DData(class IDataInput &);
    /**
     * @hash   2146142226
     * @symbol  ?deserialize3DBiomes\@LevelChunk\@\@SA?AU?$pair\@GV?$vector\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@AEAVIDataInput\@\@AEBVBiomeRegistry\@\@GPEAVBiome\@\@\@Z
     */
    MCAPI static struct std::pair<unsigned short, std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>> deserialize3DBiomes(class IDataInput &, class BiomeRegistry const &, unsigned short, class Biome *);
    /**
     * @hash   -267642979
     * @symbol  ?deserialize3DData\@LevelChunk\@\@SA?AV?$tuple\@V?$array\@VChunkLocalHeight\@\@$0BAA\@\@std\@\@GV?$vector\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@\@2\@\@2\@\@std\@\@AEAVIDataInput\@\@AEBVBiomeRegistry\@\@GPEAVBiome\@\@\@Z
     */
    MCAPI static class std::tuple<class std::array<class ChunkLocalHeight, 256>, unsigned short, std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>> deserialize3DData(class IDataInput &, class BiomeRegistry const &, unsigned short, class Biome *);
    /**
     * @hash   1437281112
     * @symbol  ?deserializeSubChunk\@LevelChunk\@\@SAXAEAVIDataInput\@\@AEBVChunkPos\@\@V?$optional\@C\@std\@\@AEAUSubChunk\@\@AEAVBlockPalette\@\@V?$optional\@PEAUDeserializationChanges\@\@\@5\@\@Z
     */
    MCAPI static void deserializeSubChunk(class IDataInput &, class ChunkPos const &, class std::optional<signed char>, struct SubChunk &, class BlockPalette &, class std::optional<struct DeserializationChanges *>);
    /**
     * @hash   -1215269695
     * @symbol  ?flushGarbageCollector\@LevelChunk\@\@SAXXZ
     */
    MCAPI static void flushGarbageCollector();
    /**
     * @hash   476254616
     * @symbol  ?getTagAndSubIndexFromKey\@LevelChunk\@\@SA?AU?$pair\@W4LevelChunkTag\@\@F\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI static struct std::pair<enum class LevelChunkTag, short> getTagAndSubIndexFromKey(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -1429711101
     * @symbol  ?serializeEntities\@LevelChunk\@\@SAXAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV43\@_NV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@3\@44\@Z
     */
    MCAPI static void serializeEntities(std::vector<class WeakEntityRef> const &, std::string const &, std::string &, bool, class std::function<void (std::string const &)>, class std::function<void (std::string const &)>, class std::function<void (std::string const &)>);

//protected:
    /**
     * @hash   1155627480
     * @symbol  ?_deserializeBlockEntities\@LevelChunk\@\@IEAAXAEAVIDataInput\@\@AEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void _deserializeBlockEntities(class IDataInput &, class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &);
    /**
     * @hash   617380348
     * @symbol  ?_deserializeEntity\@LevelChunk\@\@IEAAXAEAVBlockSource\@\@AEAVIDataInput\@\@AEAV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _deserializeEntity(class BlockSource &, class IDataInput &, std::vector<struct ActorLink> &);
    /**
     * @hash   1694715964
     * @symbol  ?_fixupCorruptedBlockActors\@LevelChunk\@\@IEAAXAEAV?$unordered_map\@VChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@U?$hash\@VChunkBlockPos\@\@\@3\@U?$equal_to\@VChunkBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkBlockPos\@\@V?$shared_ptr\@VBlockActor\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@V?$buffer_span_mut\@USubChunk\@\@\@\@\@Z
     */
    MCAPI void _fixupCorruptedBlockActors(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &, class buffer_span_mut<struct SubChunk>);
    /**
     * @hash   -1654616368
     * @symbol  ?_generateOriginalLighting\@LevelChunk\@\@IEAAXAEAVChunkViewSource\@\@_N\@Z
     */
    MCAPI void _generateOriginalLighting(class ChunkViewSource &, bool);
    /**
     * @hash   699223204
     * @symbol  ?_generateOriginalLightingSubChunk\@LevelChunk\@\@IEAAXAEAVBlockSource\@\@_K_N\@Z
     */
    MCAPI void _generateOriginalLightingSubChunk(class BlockSource &, unsigned __int64, bool);
    /**
     * @hash   -889014456
     * @symbol  ?_lightingCallbacks\@LevelChunk\@\@IEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@\@Z
     */
    MCAPI void _lightingCallbacks(class ChunkBlockPos const &, class Block const &, class Block const &, class BlockSource *);
    /**
     * @hash   1448531912
     * @symbol  ?_placeBlockEntity\@LevelChunk\@\@IEAAXV?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void _placeBlockEntity(class std::shared_ptr<class BlockActor>);
    /**
     * @hash   -1781382003
     * @symbol  ?_recalcHeight\@LevelChunk\@\@IEAA_NAEBVChunkBlockPos\@\@PEAVBlockSource\@\@\@Z
     */
    MCAPI bool _recalcHeight(class ChunkBlockPos const &, class BlockSource *);
    /**
     * @hash   -27167904
     * @symbol  ?_removeCallbacks\@LevelChunk\@\@IEAAXAEBVChunkBlockPos\@\@AEBVBlock\@\@1PEAVBlockSource\@\@\@Z
     */
    MCAPI void _removeCallbacks(class ChunkBlockPos const &, class Block const &, class Block const &, class BlockSource *);
    /**
     * @hash   -561523318
     * @symbol  ?_setAllBiomesFrom2D\@LevelChunk\@\@IEAAXAEAV?$array\@UBiomeChunkData\@\@$0BAA\@\@std\@\@\@Z
     */
    MCAPI void _setAllBiomesFrom2D(class std::array<struct BiomeChunkData, 256> &);

//private:
    /**
     * @hash   -1092178505
     * @symbol  ?_addEntityToVolumes\@LevelChunk\@\@AEAAXV?$not_null\@PEAVActor\@\@\@gsl\@\@\@Z
     */
    MCAPI void _addEntityToVolumes(class gsl::not_null<class Actor *>);
    /**
     * @hash   835119410
     * @symbol  ?_deserializeCCsubChunks\@LevelChunk\@\@AEAAXFAEAVStringByteInput\@\@\@Z
     */
    MCAPI void _deserializeCCsubChunks(short, class StringByteInput &);
    /**
     * @hash   -42634749
     * @symbol  ?_deserializeSubChunk\@LevelChunk\@\@AEAA_NFAEAVStringByteInput\@\@\@Z
     */
    MCAPI bool _deserializeSubChunk(short, class StringByteInput &);
    /**
     * @hash   2010362104
     * @symbol  ?_disableBlockEntityAccessForThisThread\@LevelChunk\@\@AEBAXXZ
     */
    MCAPI void _disableBlockEntityAccessForThisThread() const;
    /**
     * @hash   2017085201
     * @symbol  ?_enableBlockEntityAccessForThisThread\@LevelChunk\@\@AEBAXXZ
     */
    MCAPI void _enableBlockEntityAccessForThisThread() const;
    /**
     * @hash   900626854
     * @symbol  ?_fixupCommandBlocksOnTickingQueue\@LevelChunk\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _fixupCommandBlocksOnTickingQueue(class BlockSource &);
    /**
     * @hash   368619244
     * @symbol  ?_makeUniformBiomes\@LevelChunk\@\@AEAAXAEBVBiome\@\@\@Z
     */
    MCAPI void _makeUniformBiomes(class Biome const &);
    /**
     * @hash   -564577598
     * @symbol  ?_replaceBiomeStorage\@LevelChunk\@\@AEAAXGV?$unique_ptr\@V?$SubChunkStorage\@VBiome\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBiome\@\@\@\@\@std\@\@\@std\@\@AEBV?$UniqueLock\@Vshared_mutex\@std\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void _replaceBiomeStorage(unsigned short, std::unique_ptr<class SubChunkStorage<class Biome>>, class Bedrock::Threading::UniqueLock<class std::shared_mutex> const &);
    /**
     * @hash   -240351400
     * @symbol  ?_setBiome\@LevelChunk\@\@AEAAXAEBVBiome\@\@AEBVChunkBlockPos\@\@_N\@Z
     */
    MCAPI void _setBiome(class Biome const &, class ChunkBlockPos const &, bool);
    /**
     * @hash   -518331852
     * @symbol  ?_setBiome\@LevelChunk\@\@AEAAXAEBVBiome\@\@GGAEBV?$UniqueLock\@Vshared_mutex\@std\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void _setBiome(class Biome const &, unsigned short, unsigned short, class Bedrock::Threading::UniqueLock<class std::shared_mutex> const &);

protected:
    /**
     * @hash   1360407720
     * @symbol  ?UPDATE_MAP_BIT_SHIFT\@LevelChunk\@\@1HB
     */
    MCAPI static int const UPDATE_MAP_BIT_SHIFT;

private:

};