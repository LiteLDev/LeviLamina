/**
 * @file  LevelChunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1087291743
     * @symbol ??0LevelChunk@@QEAA@AEAVDimension@@AEBVChunkPos@@_NW4SubChunkInitMode@@2@Z
     */
    MCAPI LevelChunk(class Dimension &, class ChunkPos const &, bool, enum SubChunkInitMode, bool);
    /**
     * @hash   -361489395
     * @symbol ?_changeTerrainDataState@LevelChunk@@QEAAXW4ChunkTerrainDataState@@0@Z
     */
    MCAPI void _changeTerrainDataState(enum ChunkTerrainDataState, enum ChunkTerrainDataState);
    /**
     * @hash   1962315404
     * @symbol ?_getTerrainDataState@LevelChunk@@QEBA?AW4ChunkTerrainDataState@@XZ
     */
    MCAPI enum ChunkTerrainDataState _getTerrainDataState() const;
    /**
     * @hash   71322917
     * @symbol ?_onRandomTickingQueueChanged@LevelChunk@@QEAAXXZ
     */
    MCAPI void _onRandomTickingQueueChanged();
    /**
     * @hash   1777267797
     * @symbol ?_onTickingQueueChanged@LevelChunk@@QEAAXXZ
     */
    MCAPI void _onTickingQueueChanged();
    /**
     * @hash   1235560707
     * @symbol ?_setGenerator@LevelChunk@@QEAAXPEAVChunkSource@@@Z
     */
    MCAPI void _setGenerator(class ChunkSource *);
    /**
     * @hash   415498376
     * @symbol ?_setOnChunkLoadedCalled@LevelChunk@@QEAA_NXZ
     */
    MCAPI bool _setOnChunkLoadedCalled();
    /**
     * @hash   2141190484
     * @symbol ?actorDataNeedsSaving@LevelChunk@@QEBA_NHH@Z
     */
    MCAPI bool actorDataNeedsSaving(int, int) const;
    /**
     * @hash   -1828429158
     * @symbol ?addEntity@LevelChunk@@QEAAXVWeakEntityRef@@@Z
     */
    MCAPI void addEntity(class WeakEntityRef);
    /**
     * @hash   349342673
     * @symbol ?addHardcodedSpawningArea@LevelChunk@@QEAAXAEBVBoundingBox@@W4HardcodedSpawnAreaType@@@Z
     */
    MCAPI void addHardcodedSpawningArea(class BoundingBox const &, enum HardcodedSpawnAreaType);
    /**
     * @hash   1470415199
     * @symbol ?addSubChunkBlockEntitiesToLevelChunk@LevelChunk@@QEAAXAEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@@Z
     */
    MCAPI void addSubChunkBlockEntitiesToLevelChunk(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &);
    /**
     * @hash   -53439935
     * @symbol ?applySeasonsPostProcess@LevelChunk@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool applySeasonsPostProcess(class BlockSource &);
    /**
     * @hash   -1775940858
     * @symbol ?changeState@LevelChunk@@QEAAXW4ChunkState@@0@Z
     */
    MCAPI void changeState(enum ChunkState, enum ChunkState);
    /**
     * @hash   -851579790
     * @symbol ?checkSeasonsPostProcessDirty@LevelChunk@@QEAA_NXZ
     */
    MCAPI bool checkSeasonsPostProcessDirty();
    /**
     * @hash   -1289567518
     * @symbol ?chunkHasConvertedDataTag@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool chunkHasConvertedDataTag() const;
    /**
     * @hash   1594334853
     * @symbol ?clearDeletedEntities@LevelChunk@@QEAAXXZ
     */
    MCAPI void clearDeletedEntities();
    /**
     * @hash   684540917
     * @symbol ?clearDirtyTickCounters@LevelChunk@@QEAAXXZ
     */
    MCAPI void clearDirtyTickCounters();
    /**
     * @hash   -252103250
     * @symbol ?clientSubChunkRequestGenerateLightingForSubChunk@LevelChunk@@QEAAXAEAVChunkViewSource@@F@Z
     */
    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(class ChunkViewSource &, short);
    /**
     * @hash   97722922
     * @symbol ?deserializeBiomes@LevelChunk@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void deserializeBiomes(class IDataInput &);
    /**
     * @hash   -201822926
     * @symbol ?deserializeBlockEntities@LevelChunk@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void deserializeBlockEntities(class IDataInput &);
    /**
     * @hash   359311828
     * @symbol ?deserializeFinalization@LevelChunk@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void deserializeFinalization(class IDataInput &);
    /**
     * @hash   1889503788
     * @symbol ?deserializeKey@LevelChunk@@QEAA_NV?$basic_string_span@$$CBD$0?0@gsl@@0@Z
     */
    MCAPI bool deserializeKey(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -674674264
     * @symbol ?deserializeLoadedVersion@LevelChunk@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void deserializeLoadedVersion(class IDataInput &);
    /**
     * @hash   474948326
     * @symbol ?deserializeMetaDataHash@LevelChunk@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void deserializeMetaDataHash(class IDataInput &);
    /**
     * @hash   1899680308
     * @symbol ?deserializeSubChunk@LevelChunk@@QEAAXEAEAVIDataInput@@V?$optional@C@std@@V?$optional@PEAUDeserializationChanges@@@4@@Z
     */
    MCAPI void deserializeSubChunk(unsigned char, class IDataInput &, class std::optional<signed char>, class std::optional<struct DeserializationChanges *>);
    /**
     * @hash   -396154572
     * @symbol ?deserializeSubChunkBlockEntities@LevelChunk@@QEAAXAEAVIDataInput@@AEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@@Z
     */
    MCAPI void deserializeSubChunkBlockEntities(class IDataInput &, class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &);
    /**
     * @hash   -691161738
     * @symbol ?enableBlockEntityAccessForThisThread@LevelChunk@@QEBA?AVLevelChunkBlockActorAccessToken@@XZ
     */
    MCAPI class LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const;
    /**
     * @hash   245376680
     * @symbol ?fetchBiomes@LevelChunk@@QEBAXAEAV?$vector@PEBVBiome@@V?$allocator@PEBVBiome@@@std@@@std@@@Z
     */
    MCAPI void fetchBiomes(std::vector<class Biome const *> &) const;
    /**
     * @hash   -1990275337
     * @symbol ?fetchBlocks@LevelChunk@@QEBAXAEBVBlockPos@@AEAVBlockVolume@@@Z
     */
    MCAPI void fetchBlocks(class BlockPos const &, class BlockVolume &) const;
    /**
     * @hash   430484768
     * @symbol ?fillBiomes@LevelChunk@@QEAAXAEBUBiomeChunkData@@@Z
     */
    MCAPI void fillBiomes(struct BiomeChunkData const &);
    /**
     * @hash   -1040741661
     * @symbol ?finalizeDeserialization@LevelChunk@@QEAAXXZ
     */
    MCAPI void finalizeDeserialization();
    /**
     * @hash   -710219627
     * @symbol ?finalizePostProcessing@LevelChunk@@QEAAXXZ
     */
    MCAPI void finalizePostProcessing();
    /**
     * @hash   -1481978937
     * @symbol ?finalizeSubChunkDeserialization@LevelChunk@@QEAAXAEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@V?$buffer_span_mut@USubChunk@@@@@Z
     */
    MCAPI void finalizeSubChunkDeserialization(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &, class buffer_span_mut<struct SubChunk>);
    /**
     * @hash   -1893421951
     * @symbol ?findExposedLightningRod@LevelChunk@@QEAA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
     */
    MCAPI class std::optional<class BlockPos> findExposedLightningRod(class BlockPos const &, class BlockSource &);
    /**
     * @hash   -1921303090
     * @symbol ?findLightningTarget@LevelChunk@@QEAA?AVVec3@@AEBVBlockPos@@AEAVBlockSource@@@Z
     */
    MCAPI class Vec3 findLightningTarget(class BlockPos const &, class BlockSource &);
    /**
     * @hash   -961264816
     * @symbol ?generateOriginalLighting@LevelChunk@@QEAA_NAEAVChunkViewSource@@_N@Z
     */
    MCAPI bool generateOriginalLighting(class ChunkViewSource &, bool);
    /**
     * @hash   -1910580468
     * @symbol ?getAboveTopSolidBlock@LevelChunk@@QEAA?AVChunkLocalHeight@@AEBVChunkBlockPos@@_N11@Z
     */
    MCAPI class ChunkLocalHeight getAboveTopSolidBlock(class ChunkBlockPos const &, bool, bool, bool);
    /**
     * @hash   2091926272
     * @symbol ?getActors@LevelChunk@@QEBAXAEBUActorDefinitionIdentifier@@AEBVAABB@@AEAV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@@Z
     */
    MCAPI void getActors(struct ActorDefinitionIdentifier const &, class AABB const &, std::vector<class Actor *> &) const;
    /**
     * @hash   1759705989
     * @symbol ?getBiome@LevelChunk@@QEBAAEAVBiome@@AEBVChunkBlockPos@@@Z
     */
    MCAPI class Biome & getBiome(class ChunkBlockPos const &) const;
    /**
     * @hash   852634787
     * @symbol ?getBlock@LevelChunk@@QEBAAEBVBlock@@AEBVChunkBlockPos@@@Z
     */
    MCAPI class Block const & getBlock(class ChunkBlockPos const &) const;
    /**
     * @hash   596152865
     * @symbol ?getBlockEntities@LevelChunk@@QEBAAEBV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@XZ
     */
    MCAPI class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> const & getBlockEntities() const;
    /**
     * @hash   -2135472204
     * @symbol ?getBlockEntity@LevelChunk@@QEAAPEAVBlockActor@@AEBVChunkBlockPos@@@Z
     */
    MCAPI class BlockActor * getBlockEntity(class ChunkBlockPos const &);
    /**
     * @hash   10072281
     * @symbol ?getBorder@LevelChunk@@QEBA_NAEBVChunkBlockPos@@@Z
     */
    MCAPI bool getBorder(class ChunkBlockPos const &) const;
    /**
     * @hash   -997444203
     * @symbol ?getBrightness@LevelChunk@@QEBA?AUBrightnessPair@@AEBVChunkBlockPos@@@Z
     */
    MCAPI struct BrightnessPair getBrightness(class ChunkBlockPos const &) const;
    /**
     * @hash   649668059
     * @symbol ?getCachedTemperatureNoise@LevelChunk@@QEAACAEBVChunkBlockPos@@@Z
     */
    MCAPI signed char getCachedTemperatureNoise(class ChunkBlockPos const &);
    /**
     * @hash   -1727468246
     * @symbol ?getChunkEntities@LevelChunk@@QEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
     */
    MCAPI std::vector<class WeakEntityRef> & getChunkEntities();
    /**
     * @hash   534422426
     * @symbol ?getDimension@LevelChunk@@QEBAAEAVDimension@@XZ
     */
    MCAPI class Dimension & getDimension() const;
    /**
     * @hash   -1020042082
     * @symbol ?getEntities@LevelChunk@@QEBAXV?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@gsl@@AEBVAABB@@AEAV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@_N@Z
     */
    MCAPI void getEntities(class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, std::vector<class Actor *> &, bool) const;
    /**
     * @hash   -824655215
     * @symbol ?getEntities@LevelChunk@@QEBAXW4ActorType@@AEBVAABB@@AEAV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@_N@Z
     */
    MCAPI void getEntities(enum ActorType, class AABB const &, std::vector<class Actor *> &, bool) const;
    /**
     * @hash   -1205401956
     * @symbol ?getEntity@LevelChunk@@QEBAPEAVActor@@AEBUActorUniqueID@@@Z
     */
    MCAPI class Actor * getEntity(struct ActorUniqueID const &) const;
    /**
     * @hash   1109579797
     * @symbol ?getExtraBlock@LevelChunk@@QEBAAEBVBlock@@AEBVChunkBlockPos@@@Z
     */
    MCAPI class Block const & getExtraBlock(class ChunkBlockPos const &) const;
    /**
     * @hash   1921870468
     * @symbol ?getFinalized@LevelChunk@@QEBA?AW4Finalization@1@XZ
     */
    MCAPI enum LevelChunk::Finalization getFinalized() const;
    /**
     * @hash   458959060
     * @symbol ?getGameEventListenerRegistry@LevelChunk@@QEBAAEAVGameEventListenerRegistry@@XZ
     */
    MCAPI class GameEventListenerRegistry & getGameEventListenerRegistry() const;
    /**
     * @hash   -1758701869
     * @symbol ?getGenerator@LevelChunk@@QEBAPEAVChunkSource@@XZ
     */
    MCAPI class ChunkSource * getGenerator() const;
    /**
     * @hash   -554152971
     * @symbol ?getGrassColor@LevelChunk@@QEAAHAEBVChunkBlockPos@@@Z
     */
    MCAPI int getGrassColor(class ChunkBlockPos const &);
    /**
     * @hash   -1099003160
     * @symbol ?getHeightRange@LevelChunk@@QEBAAEBVDimensionHeightRange@@XZ
     */
    MCAPI class DimensionHeightRange const & getHeightRange() const;
    /**
     * @hash   985743790
     * @symbol ?getHeightmap@LevelChunk@@QEBAFAEBVChunkBlockPos@@@Z
     */
    MCAPI short getHeightmap(class ChunkBlockPos const &) const;
    /**
     * @hash   -1638440197
     * @symbol ?getHighestNonAirSubChunkIndex@LevelChunk@@QEBAFXZ
     */
    MCAPI short getHighestNonAirSubChunkIndex() const;
    /**
     * @hash   621459594
     * @symbol ?getInterpolant@LevelChunk@@QEBAM_K0@Z
     */
    MCAPI float getInterpolant(unsigned __int64, unsigned __int64) const;
    /**
     * @hash   -141621040
     * @symbol ?getLastTick@LevelChunk@@QEBAAEBUTick@@XZ
     */
    MCAPI struct Tick const & getLastTick() const;
    /**
     * @hash   -1173526930
     * @symbol ?getLevel@LevelChunk@@QEBAAEAVLevel@@XZ
     */
    MCAPI class Level & getLevel() const;
    /**
     * @hash   -734147087
     * @symbol ?getLoadedFormat@LevelChunk@@QEBA?AV?$optional@W4LevelChunkFormat@@@std@@XZ
     */
    MCAPI class std::optional<enum LevelChunkFormat> getLoadedFormat() const;
    /**
     * @hash   1398660518
     * @symbol ?getMax@LevelChunk@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getMax() const;
    /**
     * @hash   182899005
     * @symbol ?getMaxAllocatedY@LevelChunk@@QEBAFXZ
     */
    MCAPI short getMaxAllocatedY() const;
    /**
     * @hash   -214565787
     * @symbol ?getMaxSubChunkCnt@LevelChunk@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getMaxSubChunkCnt() const;
    /**
     * @hash   4326811
     * @symbol ?getMaxY@LevelChunk@@QEBAFXZ
     */
    MCAPI short getMaxY() const;
    /**
     * @hash   -1015126643
     * @symbol ?getMetaData@LevelChunk@@QEBA?AV?$shared_ptr@$$CBVLevelChunkMetaData@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData const> getMetaData() const;
    /**
     * @hash   865587851
     * @symbol ?getMetaDataCopy@LevelChunk@@QEBA?AV?$shared_ptr@VLevelChunkMetaData@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> getMetaDataCopy() const;
    /**
     * @hash   727693954
     * @symbol ?getMin@LevelChunk@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getMin() const;
    /**
     * @hash   -1870297765
     * @symbol ?getMinY@LevelChunk@@QEBAFXZ
     */
    MCAPI short getMinY() const;
    /**
     * @hash   47903213
     * @symbol ?getNonAirMaxHeight@LevelChunk@@QEBAFXZ
     */
    MCAPI short getNonAirMaxHeight() const;
    /**
     * @hash   1440031194
     * @symbol ?getPosition@LevelChunk@@QEBAAEBVChunkPos@@XZ
     */
    MCAPI class ChunkPos const & getPosition() const;
    /**
     * @hash   362101031
     * @symbol ?getPreWorldGenHeightmap@LevelChunk@@QEBA?AVChunkLocalHeight@@AEBVChunkBlockPos@@@Z
     */
    MCAPI class ChunkLocalHeight getPreWorldGenHeightmap(class ChunkBlockPos const &) const;
    /**
     * @hash   412378866
     * @symbol ?getPreWorldGenHeightmap@LevelChunk@@QEBA?AVHeightmapWrapper@@XZ
     */
    MCAPI class HeightmapWrapper getPreWorldGenHeightmap() const;
    /**
     * @hash   -648849466
     * @symbol ?getRandomTickQueue@LevelChunk@@QEAAAEAVBlockTickingQueue@@XZ
     */
    MCAPI class BlockTickingQueue & getRandomTickQueue();
    /**
     * @hash   -675127833
     * @symbol ?getRawBrightness@LevelChunk@@QEBA?AUBrightness@@AEBVChunkBlockPos@@U2@@Z
     */
    MCAPI struct Brightness getRawBrightness(class ChunkBlockPos const &, struct Brightness) const;
    /**
     * @hash   -341671874
     * @symbol ?getSpawningAreas@LevelChunk@@QEBAAEBV?$vector@UHardcodedSpawningArea@LevelChunk@@V?$allocator@UHardcodedSpawningArea@LevelChunk@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct LevelChunk::HardcodedSpawningArea> const & getSpawningAreas() const;
    /**
     * @hash   813204193
     * @symbol ?getState@LevelChunk@@QEBAAEBU?$atomic@W4ChunkState@@@std@@XZ
     */
    MCAPI struct std::atomic<enum ChunkState> const & getState() const;
    /**
     * @hash   -899603873
     * @symbol ?getSubChunk@LevelChunk@@QEBAPEBUSubChunk@@F@Z
     */
    MCAPI struct SubChunk const * getSubChunk(short) const;
    /**
     * @hash   -1070294977
     * @symbol ?getSubChunk@LevelChunk@@QEAAPEAUSubChunk@@F@Z
     */
    MCAPI struct SubChunk * getSubChunk(short);
    /**
     * @hash   482538999
     * @symbol ?getSurfaceBiome@LevelChunk@@QEBAAEBVBiome@@VChunkBlockPos@@@Z
     */
    MCAPI class Biome const & getSurfaceBiome(class ChunkBlockPos) const;
    /**
     * @hash   1563225366
     * @symbol ?getTickQueue@LevelChunk@@QEAAAEAVBlockTickingQueue@@XZ
     */
    MCAPI class BlockTickingQueue & getTickQueue();
    /**
     * @hash   1704480912
     * @symbol ?getTickQueue@LevelChunk@@QEBAAEBVBlockTickingQueue@@XZ
     */
    MCAPI class BlockTickingQueue const & getTickQueue() const;
    /**
     * @hash   -2059301333
     * @symbol ?getTopRainBlockPos@LevelChunk@@QEAA?BVBlockPos@@AEBVChunkBlockPos@@@Z
     */
    MCAPI class BlockPos const getTopRainBlockPos(class ChunkBlockPos const &);
    /**
     * @hash   -11136780
     * @symbol ?getTotalAllocatedHeight@LevelChunk@@QEBA?AVChunkLocalHeight@@XZ
     */
    MCAPI class ChunkLocalHeight getTotalAllocatedHeight() const;
    /**
     * @hash   -919877074
     * @symbol ?hasAnyBiomeStates@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool hasAnyBiomeStates() const;
    /**
     * @hash   -404120832
     * @symbol ?hasBlockEntitiesToSerialize@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool hasBlockEntitiesToSerialize() const;
    /**
     * @hash   628271574
     * @symbol ?hasEntitiesPendingToLoad@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool hasEntitiesPendingToLoad() const;
    /**
     * @hash   1215964736
     * @symbol ?hasEntitiesToSerialize@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool hasEntitiesToSerialize() const;
    /**
     * @hash   -447451527
     * @symbol ?hasEntity@LevelChunk@@QEAA_NVWeakEntityRef@@@Z
     */
    MCAPI bool hasEntity(class WeakEntityRef);
    /**
     * @hash   -1083719279
     * @symbol ?isBlockInChunk@LevelChunk@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool isBlockInChunk(class BlockPos const &) const;
    /**
     * @hash   -517873118
     * @symbol ?isClientGeneratedChunk@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool isClientGeneratedChunk() const;
    /**
     * @hash   -2069583624
     * @symbol ?isFullyLoaded@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool isFullyLoaded() const;
    /**
     * @hash   -2061426886
     * @symbol ?isNonActorDataDirty@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool isNonActorDataDirty() const;
    /**
     * @hash   171252884
     * @symbol ?isReadOnly@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool isReadOnly() const;
    /**
     * @hash   -288089425
     * @symbol ?isSkyLit@LevelChunk@@QEBA_NAEBVChunkBlockPos@@@Z
     */
    MCAPI bool isSkyLit(class ChunkBlockPos const &) const;
    /**
     * @hash   -1592216136
     * @symbol ?legacyDeserializeBlockExtraData@LevelChunk@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void legacyDeserializeBlockExtraData(class IDataInput &);
    /**
     * @hash   -362439678
     * @symbol ?legacyDeserializeTerrain@LevelChunk@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void legacyDeserializeTerrain(class IDataInput &);
    /**
     * @hash   -1986121610
     * @symbol ?levelChunkHad3dBiomeTagOnLastDeserialize@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const;
    /**
     * @hash   -1605764587
     * @symbol ?markSaveIfNeverSaved@LevelChunk@@QEAAXXZ
     */
    MCAPI void markSaveIfNeverSaved();
    /**
     * @hash   856989347
     * @symbol ?markSaveNonActorDataIfDirty@LevelChunk@@QEAAXXZ
     */
    MCAPI void markSaveNonActorDataIfDirty();
    /**
     * @hash   934093716
     * @symbol ?metaDataDirty@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool metaDataDirty() const;
    /**
     * @hash   2001246202
     * @symbol ?needsUpgradeFix@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool needsUpgradeFix() const;
    /**
     * @hash   -1248872584
     * @symbol ?needsWallFix@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool needsWallFix() const;
    /**
     * @hash   916435120
     * @symbol ?nonActorDataNeedsSaving@LevelChunk@@QEBA_NHH@Z
     */
    MCAPI bool nonActorDataNeedsSaving(int, int) const;
    /**
     * @hash   1607370405
     * @symbol ?onBlockEntityChanged@LevelChunk@@QEAAXXZ
     */
    MCAPI void onBlockEntityChanged();
    /**
     * @hash   322776499
     * @symbol ?onDiscarded@LevelChunk@@QEAAXXZ
     */
    MCAPI void onDiscarded();
    /**
     * @hash   -150165426
     * @symbol ??4LevelChunk@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class LevelChunk & operator=(class LevelChunk &&);
    /**
     * @hash   -102870956
     * @symbol ?placeCallbacks@LevelChunk@@QEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@V?$shared_ptr@VBlockActor@@@std@@@Z
     */
    MCAPI void placeCallbacks(class ChunkBlockPos const &, class Block const &, class Block const &, class BlockSource *, class std::shared_ptr<class BlockActor>);
    /**
     * @hash   -2009006682
     * @symbol ?populateHeightMapDataForSubChunkPacket@LevelChunk@@QEBAXFAEAUSubChunkPacketData@SubChunkPacket@@@Z
     */
    MCAPI void populateHeightMapDataForSubChunkPacket(short, struct SubChunkPacket::SubChunkPacketData &) const;
    /**
     * @hash   -710196877
     * @symbol ?pruneBiomesAboveHeightmap@LevelChunk@@QEAAXXZ
     */
    MCAPI void pruneBiomesAboveHeightmap();
    /**
     * @hash   -158787882
     * @symbol ?recalculateSubchunkHashes@LevelChunk@@QEAAX_N@Z
     */
    MCAPI void recalculateSubchunkHashes(bool);
    /**
     * @hash   145241262
     * @symbol ?recomputeHeightMap@LevelChunk@@QEAAX_N@Z
     */
    MCAPI void recomputeHeightMap(bool);
    /**
     * @hash   -1274823170
     * @symbol ?removeBlockEntity@LevelChunk@@QEAA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z
     */
    MCAPI class std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const &);
    /**
     * @hash   -1156364263
     * @symbol ?removeEntityFromChunk@LevelChunk@@QEAA_NVWeakEntityRef@@@Z
     */
    MCAPI bool removeEntityFromChunk(class WeakEntityRef);
    /**
     * @hash   2064608409
     * @symbol ?removeEntityFromWorld@LevelChunk@@QEAA_NVWeakEntityRef@@@Z
     */
    MCAPI bool removeEntityFromWorld(class WeakEntityRef);
    /**
     * @hash   -1290336444
     * @symbol ?removeHardcodedSpawningArea@LevelChunk@@QEAAXW4HardcodedSpawnAreaType@@@Z
     */
    MCAPI void removeHardcodedSpawningArea(enum HardcodedSpawnAreaType);
    /**
     * @hash   759283643
     * @symbol ?runtimeRelightSubchunk@LevelChunk@@QEAAXAEAVBlockSource@@_KAEBV?$vector@USubChunkLightUpdate@@V?$allocator@USubChunkLightUpdate@@@std@@@std@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@4@@Z
     */
    MCAPI void runtimeRelightSubchunk(class BlockSource &, unsigned __int64, std::vector<struct SubChunkLightUpdate> const &, std::vector<class BlockPos> &);
    /**
     * @hash   1624576686
     * @symbol ?serialize2DMaps@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serialize2DMaps(class IDataOutput &) const;
    /**
     * @hash   -1197068594
     * @symbol ?serialize3DMaps@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serialize3DMaps(class IDataOutput &) const;
    /**
     * @hash   1098508876
     * @symbol ?serializeBiomeStates@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serializeBiomeStates(class IDataOutput &) const;
    /**
     * @hash   1835433550
     * @symbol ?serializeBiomes@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serializeBiomes(class IDataOutput &) const;
    /**
     * @hash   1058477692
     * @symbol ?serializeBlockEntities@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serializeBlockEntities(class IDataOutput &) const;
    /**
     * @hash   1662793455
     * @symbol ?serializeBlockEntitiesForSubChunk@LevelChunk@@QEBAXAEAVIDataOutput@@AEBVSubChunkPos@@@Z
     */
    MCAPI void serializeBlockEntitiesForSubChunk(class IDataOutput &, class SubChunkPos const &) const;
    /**
     * @hash   -1692605875
     * @symbol ?serializeBorderBlocks@LevelChunk@@QEBA_NAEAVIDataOutput@@@Z
     */
    MCAPI bool serializeBorderBlocks(class IDataOutput &) const;
    /**
     * @hash   -123592907
     * @symbol ?serializeEntities@LevelChunk@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@3@22@Z
     */
    MCAPI void serializeEntities(std::string &, bool, class std::function<void (std::string const &)>, class std::function<void (std::string const &)>, class std::function<void (std::string const &)>) const;
    /**
     * @hash   1402832289
     * @symbol ?serializeEntityRemovals@LevelChunk@@QEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     */
    MCAPI void serializeEntityRemovals(class std::function<void (std::string const &)>);
    /**
     * @hash   -197767858
     * @symbol ?serializeFinalization@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serializeFinalization(class IDataOutput &) const;
    /**
     * @hash   -1135897147
     * @symbol ?serializeHardcodedSpawners@LevelChunk@@QEBA_NAEAVIDataOutput@@@Z
     */
    MCAPI bool serializeHardcodedSpawners(class IDataOutput &) const;
    /**
     * @hash   1609753710
     * @symbol ?serializeMetaDataHash@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serializeMetaDataHash(class IDataOutput &) const;
    /**
     * @hash   1895953708
     * @symbol ?serializeRandomTicks@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serializeRandomTicks(class IDataOutput &) const;
    /**
     * @hash   235475212
     * @symbol ?serializeTicks@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serializeTicks(class IDataOutput &) const;
    /**
     * @hash   -2112937853
     * @symbol ?setAllLegacyBlockIDAndData@LevelChunk@@QEAAXV?$buffer_span@UBlockID@@@@V?$buffer_span@UNibblePair@@@@@Z
     */
    MCAPI void setAllLegacyBlockIDAndData(class buffer_span<struct BlockID>, class buffer_span<struct NibblePair>);
    /**
     * @hash   -1854261803
     * @symbol ?setBiome2d@LevelChunk@@QEAAXAEBVBiome@@AEBVChunkBlockPos@@@Z
     */
    MCAPI void setBiome2d(class Biome const &, class ChunkBlockPos const &);
    /**
     * @hash   -926975546
     * @symbol ?setBiomeFromVolume@LevelChunk@@QEAAXAEBV?$VolumeOf@PEBVBiome@@@ClientBlockPipeline@@I@Z
     */
    MCAPI void setBiomeFromVolume(class ClientBlockPipeline::VolumeOf<class Biome const *> const &, unsigned int);
    /**
     * @hash   -568884685
     * @symbol ?setBlock@LevelChunk@@QEAAAEBVBlock@@AEBVChunkBlockPos@@AEBV2@PEAVBlockSource@@V?$shared_ptr@VBlockActor@@@std@@@Z
     */
    MCAPI class Block const & setBlock(class ChunkBlockPos const &, class Block const &, class BlockSource *, class std::shared_ptr<class BlockActor>);
    /**
     * @hash   -1032996261
     * @symbol ?setBlockSimple@LevelChunk@@QEAAXAEBVChunkBlockPos@@AEBVBlock@@@Z
     */
    MCAPI void setBlockSimple(class ChunkBlockPos const &, class Block const &);
    /**
     * @hash   564707243
     * @symbol ?setBlockVolume@LevelChunk@@QEAAXAEBVBlockVolume@@I@Z
     */
    MCAPI void setBlockVolume(class BlockVolume const &, unsigned int);
    /**
     * @hash   -2127737837
     * @symbol ?setBorder@LevelChunk@@QEAAXAEBVChunkBlockPos@@_N@Z
     */
    MCAPI void setBorder(class ChunkBlockPos const &, bool);
    /**
     * @hash   496387075
     * @symbol ?setCachedTemperatureNoise@LevelChunk@@QEAAXAEBVChunkBlockPos@@C@Z
     */
    MCAPI void setCachedTemperatureNoise(class ChunkBlockPos const &, signed char);
    /**
     * @hash   -369887066
     * @symbol ?setChunkInterpolants@LevelChunk@@QEAAXAEBVNeighbors@1@@Z
     */
    MCAPI void setChunkInterpolants(class LevelChunk::Neighbors const &);
    /**
     * @hash   1939695177
     * @symbol ?setExtraBlock@LevelChunk@@QEAAAEBVBlock@@AEBVChunkBlockPos@@AEBV2@PEAVBlockSource@@@Z
     */
    MCAPI class Block const & setExtraBlock(class ChunkBlockPos const &, class Block const &, class BlockSource *);
    /**
     * @hash   737727561
     * @symbol ?setExtraBlockSimple@LevelChunk@@QEAAXAEBVChunkBlockPos@@AEBVBlock@@@Z
     */
    MCAPI void setExtraBlockSimple(class ChunkBlockPos const &, class Block const &);
    /**
     * @hash   -332765152
     * @symbol ?setFinalized@LevelChunk@@QEAAXW4Finalization@1@@Z
     */
    MCAPI void setFinalized(enum LevelChunk::Finalization);
    /**
     * @hash   -22663643
     * @symbol ?setHadSerializedEntities@LevelChunk@@QEAAXXZ
     */
    MCAPI void setHadSerializedEntities();
    /**
     * @hash   -1073784492
     * @symbol ?setIsClientGeneratedChunk@LevelChunk@@QEAAX_N@Z
     */
    MCAPI void setIsClientGeneratedChunk(bool);
    /**
     * @hash   -606509797
     * @symbol ?setMetaData@LevelChunk@@QEAAXV?$shared_ptr@VLevelChunkMetaData@@@std@@@Z
     */
    MCAPI void setMetaData(class std::shared_ptr<class LevelChunkMetaData>);
    /**
     * @hash   1894845540
     * @symbol ?setPendingEntities@LevelChunk@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setPendingEntities(std::string);
    /**
     * @hash   467262183
     * @symbol ?setPreWorldGenHeightMap@LevelChunk@@QEAAXV?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@@Z
     */
    MCAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>);
    /**
     * @hash   -529241419
     * @symbol ?setSaved@LevelChunk@@QEAAXXZ
     */
    MCAPI void setSaved();
    /**
     * @hash   -90351035
     * @symbol ?setUnsaved@LevelChunk@@QEAAXXZ
     */
    MCAPI void setUnsaved();
    /**
     * @hash   1200329956
     * @symbol ?setupRedstoneCircuit@LevelChunk@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void setupRedstoneCircuit(class BlockSource &);
    /**
     * @hash   -746236724
     * @symbol ?shouldSaveIfNeverSaved@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool shouldSaveIfNeverSaved() const;
    /**
     * @hash   174784276
     * @symbol ?shouldSaveNonActorDataIfDirty@LevelChunk@@QEBA_NXZ
     */
    MCAPI bool shouldSaveNonActorDataIfDirty() const;
    /**
     * @hash   -1664593789
     * @symbol ?subChunkIsSafeReference@LevelChunk@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool subChunkIsSafeReference(class BlockPos const &) const;
    /**
     * @hash   150777165
     * @symbol ?tick@LevelChunk@@QEAAXAEAVBlockSource@@AEBUTick@@@Z
     */
    MCAPI void tick(class BlockSource &, struct Tick const &);
    /**
     * @hash   1401969014
     * @symbol ?tickBlockEntities@LevelChunk@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void tickBlockEntities(class BlockSource &);
    /**
     * @hash   753625236
     * @symbol ?tickBlocks@LevelChunk@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void tickBlocks(class BlockSource &);
    /**
     * @hash   359112297
     * @symbol ?toWorldPos@LevelChunk@@QEBA?AVBlockPos@@AEBVChunkBlockPos@@@Z
     */
    MCAPI class BlockPos toWorldPos(class ChunkBlockPos const &) const;
    /**
     * @hash   -1786859457
     * @symbol ?tryChangeState@LevelChunk@@QEAA_NW4ChunkState@@0@Z
     */
    MCAPI bool tryChangeState(enum ChunkState, enum ChunkState);
    /**
     * @hash   789791813
     * @symbol ?trySpawnSkeletonTrap@LevelChunk@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void trySpawnSkeletonTrap(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1950549915
     * @symbol ?updateLoadedMetaDataHash@LevelChunk@@QEAAXXZ
     */
    MCAPI void updateLoadedMetaDataHash();
    /**
     * @hash   1597865683
     * @symbol ?validateAndFixBiomeStates@LevelChunk@@QEAAXXZ
     */
    MCAPI void validateAndFixBiomeStates();
    /**
     * @hash   -1893514971
     * @symbol ?wasTickedThisTick@LevelChunk@@QEBA_NAEBUTick@@@Z
     */
    MCAPI bool wasTickedThisTick(struct Tick const &) const;
    /**
     * @hash   -279319693
     * @symbol ??1LevelChunk@@QEAA@XZ
     */
    MCAPI ~LevelChunk();
    /**
     * @hash   1716056164
     * @symbol ?borderBlocksAreEnabled@LevelChunk@@SA_NXZ
     */
    MCAPI static bool borderBlocksAreEnabled();
    /**
     * @hash   -146091285
     * @symbol ?createNew@LevelChunk@@SA?AV?$unique_ptr@VLevelChunk@@ULevelChunkPhase1Deleter@@@std@@AEAVDimension@@VChunkPos@@_NW4SubChunkInitMode@@@Z
     */
    MCAPI static class std::unique_ptr<class LevelChunk, struct LevelChunkPhase1Deleter> createNew(class Dimension &, class ChunkPos, bool, enum SubChunkInitMode);
    /**
     * @hash   -270353479
     * @symbol ?deserialize2DData@LevelChunk@@SA?AV?$tuple@V?$array@VChunkLocalHeight@@$0BAA@@std@@V?$array@UBiomeChunkData@@$0BAA@@2@@std@@AEAVIDataInput@@@Z
     */
    MCAPI static class std::tuple<class std::array<class ChunkLocalHeight, 256>, class std::array<struct BiomeChunkData, 256>> deserialize2DData(class IDataInput &);
    /**
     * @hash   1104219232
     * @symbol ?deserialize3DBiomes@LevelChunk@@SA?AU?$pair@GV?$vector@V?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@V?$allocator@V?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@@2@@std@@@std@@AEAVIDataInput@@AEBVBiomeRegistry@@G@Z
     */
    MCAPI static struct std::pair<unsigned short, std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>> deserialize3DBiomes(class IDataInput &, class BiomeRegistry const &, unsigned short);
    /**
     * @hash   -1365676123
     * @symbol ?deserialize3DData@LevelChunk@@SA?AV?$tuple@V?$array@VChunkLocalHeight@@$0BAA@@std@@GV?$vector@V?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@V?$allocator@V?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@@2@@2@@std@@AEAVIDataInput@@AEBVBiomeRegistry@@G@Z
     */
    MCAPI static class std::tuple<class std::array<class ChunkLocalHeight, 256>, unsigned short, std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>> deserialize3DData(class IDataInput &, class BiomeRegistry const &, unsigned short);
    /**
     * @hash   574503000
     * @symbol ?deserializeSubChunk@LevelChunk@@SAXAEAVIDataInput@@AEBVChunkPos@@V?$optional@C@std@@AEAUSubChunk@@AEAVBlockPalette@@V?$optional@PEAUDeserializationChanges@@@5@@Z
     */
    MCAPI static void deserializeSubChunk(class IDataInput &, class ChunkPos const &, class std::optional<signed char>, struct SubChunk &, class BlockPalette &, class std::optional<struct DeserializationChanges *>);
    /**
     * @hash   -2077909423
     * @symbol ?flushGarbageCollector@LevelChunk@@SAXXZ
     */
    MCAPI static void flushGarbageCollector();
    /**
     * @hash   -386861768
     * @symbol ?getTagAndSubIndexFromKey@LevelChunk@@SA?AU?$pair@W4LevelChunkTag@@F@std@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI static struct std::pair<enum LevelChunkTag, short> getTagAndSubIndexFromKey(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   2001863043
     * @symbol ?serializeEntities@LevelChunk@@SAXAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV43@_NV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@3@44@Z
     */
    MCAPI static void serializeEntities(std::vector<class WeakEntityRef> const &, std::string const &, std::string &, bool, class std::function<void (std::string const &)>, class std::function<void (std::string const &)>, class std::function<void (std::string const &)>);

//protected:
    /**
     * @hash   295617048
     * @symbol ?_deserializeBlockEntities@LevelChunk@@IEAAXAEAVIDataInput@@AEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@@Z
     */
    MCAPI void _deserializeBlockEntities(class IDataInput &, class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &);
    /**
     * @hash   -242722340
     * @symbol ?_deserializeEntity@LevelChunk@@IEAAXAEAVBlockSource@@AEAVIDataInput@@AEAV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@@Z
     */
    MCAPI void _deserializeEntity(class BlockSource &, class IDataInput &, std::vector<struct ActorLink> &);
    /**
     * @hash   834121244
     * @symbol ?_fixupCorruptedBlockActors@LevelChunk@@IEAAXAEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@V?$buffer_span_mut@USubChunk@@@@@Z
     */
    MCAPI void _fixupCorruptedBlockActors(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor>>>> &, class buffer_span_mut<struct SubChunk>);
    /**
     * @hash   1779710080
     * @symbol ?_generateOriginalLighting@LevelChunk@@IEAAXAEAVChunkViewSource@@_N@Z
     */
    MCAPI void _generateOriginalLighting(class ChunkViewSource &, bool);
    /**
     * @hash   -161433020
     * @symbol ?_generateOriginalLightingSubChunk@LevelChunk@@IEAAXAEAVBlockSource@@_K_N@Z
     */
    MCAPI void _generateOriginalLightingSubChunk(class BlockSource &, unsigned __int64, bool);
    /**
     * @hash   -1749670680
     * @symbol ?_lightingCallbacks@LevelChunk@@IEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@@Z
     */
    MCAPI void _lightingCallbacks(class ChunkBlockPos const &, class Block const &, class Block const &, class BlockSource *);
    /**
     * @hash   587860312
     * @symbol ?_placeBlockEntity@LevelChunk@@IEAAXV?$shared_ptr@VBlockActor@@@std@@@Z
     */
    MCAPI void _placeBlockEntity(class std::shared_ptr<class BlockActor>);
    /**
     * @hash   1652898317
     * @symbol ?_recalcHeight@LevelChunk@@IEAA_NAEBVChunkBlockPos@@PEAVBlockSource@@@Z
     */
    MCAPI bool _recalcHeight(class ChunkBlockPos const &, class BlockSource *);
    /**
     * @hash   -887870256
     * @symbol ?_removeCallbacks@LevelChunk@@IEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@@Z
     */
    MCAPI void _removeCallbacks(class ChunkBlockPos const &, class Block const &, class Block const &, class BlockSource *);
    /**
     * @hash   -1422502438
     * @symbol ?_setAllBiomesFrom2D@LevelChunk@@IEAAXAEAV?$array@UBiomeChunkData@@$0BAA@@std@@@Z
     */
    MCAPI void _setAllBiomesFrom2D(class std::array<struct BiomeChunkData, 256> &);

//private:
    /**
     * @hash   -1952188937
     * @symbol ?_addEntityToVolumes@LevelChunk@@AEAAXV?$not_null@PEAVActor@@@gsl@@@Z
     */
    MCAPI void _addEntityToVolumes(class gsl::not_null<class Actor *>);
    /**
     * @hash   -24983278
     * @symbol ?_deserializeCCsubChunks@LevelChunk@@AEAAXFAEAVStringByteInput@@@Z
     */
    MCAPI void _deserializeCCsubChunks(short, class StringByteInput &);
    /**
     * @hash   -902783565
     * @symbol ?_deserializeSubChunk@LevelChunk@@AEAA_NFAEAVStringByteInput@@@Z
     */
    MCAPI bool _deserializeSubChunk(short, class StringByteInput &);
    /**
     * @hash   1918475128
     * @symbol ?_disableBlockEntityAccessForThisThread@LevelChunk@@AEBAXXZ
     */
    MCAPI void _disableBlockEntityAccessForThisThread() const;
    /**
     * @hash   1925198225
     * @symbol ?_enableBlockEntityAccessForThisThread@LevelChunk@@AEBAXXZ
     */
    MCAPI void _enableBlockEntityAccessForThisThread() const;
    /**
     * @hash   -492036980
     * @symbol ?_makeUniformBiomes@LevelChunk@@AEAAXAEBVBiome@@@Z
     */
    MCAPI void _makeUniformBiomes(class Biome const &);
    /**
     * @hash   -1425295326
     * @symbol ?_replaceBiomeStorage@LevelChunk@@AEAAXGV?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@AEBV?$UniqueLock@Vshared_mutex@std@@@Threading@Bedrock@@@Z
     */
    MCAPI void _replaceBiomeStorage(unsigned short, std::unique_ptr<class SubChunkStorage<class Biome>>, class Bedrock::Threading::UniqueLock<class std::shared_mutex> const &);
    /**
     * @hash   -1101407400
     * @symbol ?_setBiome@LevelChunk@@AEAAXAEBVBiome@@AEBVChunkBlockPos@@_N@Z
     */
    MCAPI void _setBiome(class Biome const &, class ChunkBlockPos const &, bool);
    /**
     * @hash   -1379403228
     * @symbol ?_setBiome@LevelChunk@@AEAAXAEBVBiome@@GGAEBV?$UniqueLock@Vshared_mutex@std@@@Threading@Bedrock@@@Z
     */
    MCAPI void _setBiome(class Biome const &, unsigned short, unsigned short, class Bedrock::Threading::UniqueLock<class std::shared_mutex> const &);

protected:
    /**
     * @hash   318037928
     * @symbol ?UPDATE_MAP_BIT_SHIFT@LevelChunk@@1HB
     */
    MCAPI static int const UPDATE_MAP_BIT_SHIFT;

private:

};