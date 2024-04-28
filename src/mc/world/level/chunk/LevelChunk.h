#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/UniqueLock.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/HardcodedSpawnAreaType.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/world/level/LevelChunkFormat.h"
#include "mc/world/level/LevelChunkNeighbor.h"
#include "mc/world/level/LevelChunkTag.h"
#include "mc/world/level/block/utils/VolumeOf.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/ChunkTerrainDataState.h"
#include "mc/world/level/chunk/SubChunkInitMode.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

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
        // symbol: ??0Neighbors@LevelChunk@@QEAA@XZ
        MCAPI Neighbors();

        // symbol: ??0Neighbors@LevelChunk@@QEAA@AEAVStringByteInput@@@Z
        MCAPI explicit Neighbors(class StringByteInput& stream);

        // symbol: ?hasNeighbor@Neighbors@LevelChunk@@QEBA_NW4LevelChunkNeighbor@@@Z
        MCAPI bool hasNeighbor(::LevelChunkNeighbor neighbor) const;

        // symbol: ?isSurrounded@Neighbors@LevelChunk@@QEBA_NXZ
        MCAPI bool isSurrounded() const;

        // symbol: ?serialize@Neighbors@LevelChunk@@QEBAXAEAVStringByteOutput@@@Z
        MCAPI void serialize(class StringByteOutput& stream) const;

        // symbol: ?setNeighbor@Neighbors@LevelChunk@@QEAAXW4LevelChunkNeighbor@@_N@Z
        MCAPI void setNeighbor(::LevelChunkNeighbor neighbor, bool value);

        // symbol: ?sOffsetMap@Neighbors@LevelChunk@@2V?$array@U?$pair@W4LevelChunkNeighbor@@VChunkPos@@@std@@$07@std@@B
        MCAPI static std::array<std::pair<::LevelChunkNeighbor, class ChunkPos>, 8> const sOffsetMap;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LevelChunk& operator=(LevelChunk const&);
    LevelChunk(LevelChunk const&);
    LevelChunk();

public:
    // NOLINTBEGIN
    // symbol: ??0LevelChunk@@QEAA@AEAVDimension@@AEBVChunkPos@@_NW4SubChunkInitMode@@2@Z
    MCAPI LevelChunk(
        class Dimension&      dimension,
        class ChunkPos const& cp,
        bool                  readOnly,
        ::SubChunkInitMode    initBlocks,
        bool
    );

    // symbol: ?_changeTerrainDataState@LevelChunk@@QEAAXW4ChunkTerrainDataState@@0@Z
    MCAPI void _changeTerrainDataState(::ChunkTerrainDataState from, ::ChunkTerrainDataState to);

    // symbol: ?_getTerrainDataState@LevelChunk@@QEBA?AW4ChunkTerrainDataState@@XZ
    MCAPI ::ChunkTerrainDataState _getTerrainDataState() const;

    // symbol: ?_onRandomTickingQueueChanged@LevelChunk@@QEAAXXZ
    MCAPI void _onRandomTickingQueueChanged();

    // symbol: ?_onTickingQueueChanged@LevelChunk@@QEAAXXZ
    MCAPI void _onTickingQueueChanged();

    // symbol: ?_setGenerator@LevelChunk@@QEAAXPEAVChunkSource@@@Z
    MCAPI void _setGenerator(class ChunkSource* generator);

    // symbol: ?_setOnChunkLoadedCalled@LevelChunk@@QEAA_NXZ
    MCAPI bool _setOnChunkLoadedCalled();

    // symbol: ?actorDataNeedsSaving@LevelChunk@@QEBA_NHH@Z
    MCAPI bool actorDataNeedsSaving(int wait, int maxWait) const;

    // symbol: ?addEntity@LevelChunk@@QEAAXVWeakEntityRef@@@Z
    MCAPI void addEntity(class WeakEntityRef entityRef);

    // symbol: ?addHardcodedSpawningArea@LevelChunk@@QEAAXAEBVBoundingBox@@W4HardcodedSpawnAreaType@@@Z
    MCAPI void addHardcodedSpawningArea(class BoundingBox const& spawnerAABB, ::HardcodedSpawnAreaType type);

    // symbol: ?addStructure@LevelChunk@@QEAAXV?$shared_ptr@$$CBVStructureInstance@worldgen@br@@@std@@@Z
    MCAPI void addStructure(std::shared_ptr<class br::worldgen::StructureInstance const>);

    // symbol: ?addStructureReference@LevelChunk@@QEAAXV?$shared_ptr@$$CBVStructureInstance@worldgen@br@@@std@@@Z
    MCAPI void addStructureReference(std::shared_ptr<class br::worldgen::StructureInstance const>);

    // symbol:
    // ?addSubChunkBlockEntitiesToLevelChunk@LevelChunk@@QEAAXAEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@@Z
    MCAPI void
    addSubChunkBlockEntitiesToLevelChunk(std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&);

    // symbol: ?applySeasonsPostProcess@LevelChunk@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool applySeasonsPostProcess(class BlockSource& region);

    // symbol: ?changeState@LevelChunk@@QEAAXW4ChunkState@@0@Z
    MCAPI void changeState(::ChunkState from, ::ChunkState to);

    // symbol: ?checkSeasonsPostProcessDirty@LevelChunk@@QEAA_NXZ
    MCAPI bool checkSeasonsPostProcessDirty();

    // symbol: ?chunkHasConvertedDataTag@LevelChunk@@QEBA_NXZ
    MCAPI bool chunkHasConvertedDataTag() const;

    // symbol: ?clearDirtyTickCounters@LevelChunk@@QEAAXXZ
    MCAPI void clearDirtyTickCounters();

    // symbol: ?clientSubChunkRequestGenerateLightingForSubChunk@LevelChunk@@QEAAXAEAVChunkViewSource@@F@Z
    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(class ChunkViewSource& neighborhood, short);

    // symbol: ?deserializeBiomes@LevelChunk@@QEAAXAEAVIDataInput@@_N@Z
    MCAPI void deserializeBiomes(class IDataInput&, bool);

    // symbol: ?deserializeBlockEntities@LevelChunk@@QEAAXAEAVIDataInput@@@Z
    MCAPI void deserializeBlockEntities(class IDataInput& stream);

    // symbol: ?deserializeFinalization@LevelChunk@@QEAAXAEAVIDataInput@@@Z
    MCAPI void deserializeFinalization(class IDataInput& stream);

    // symbol: ?deserializeKey@LevelChunk@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
    MCAPI bool deserializeKey(std::string_view key, std::string_view value);

    // symbol: ?deserializeLoadedVersion@LevelChunk@@QEAAXAEAVIDataInput@@@Z
    MCAPI void deserializeLoadedVersion(class IDataInput& stream);

    // symbol: ?deserializeMetaDataHash@LevelChunk@@QEAAXAEAVIDataInput@@@Z
    MCAPI void deserializeMetaDataHash(class IDataInput& stream);

    // symbol:
    // ?deserializeSubChunk@LevelChunk@@QEAAXEAEAVIDataInput@@V?$optional@C@std@@V?$optional@PEAUDeserializationChanges@@@4@@Z
    MCAPI void
    deserializeSubChunk(uchar idx, class IDataInput& stream, std::optional<schar>, std::optional<struct DeserializationChanges*>);

    // symbol:
    // ?deserializeSubChunkBlockEntities@LevelChunk@@QEAAXAEAVIDataInput@@AEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@@Z
    MCAPI void
    deserializeSubChunkBlockEntities(class IDataInput& stream, std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&);

    // symbol: ?enableBlockEntityAccessForThisThread@LevelChunk@@QEBA?AVLevelChunkBlockActorAccessToken@@XZ
    MCAPI class LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const;

    // symbol: ?fetchBiomes@LevelChunk@@QEBAXAEAV?$vector@PEBVBiome@@V?$allocator@PEBVBiome@@@std@@@std@@@Z
    MCAPI void fetchBiomes(std::vector<class Biome const*>& biomes) const;

    // symbol: ?fetchBlocks@LevelChunk@@QEBAXAEBVBlockPos@@AEAVBlockVolume@@@Z
    MCAPI void fetchBlocks(class BlockPos const& volumeOrigin, class BlockVolume& volume) const;

    // symbol: ?fillBiomes@LevelChunk@@QEAAXAEBUBiomeChunkData@@@Z
    MCAPI void fillBiomes(struct BiomeChunkData const& biomeChunkData);

    // symbol: ?finalizeDeserialization@LevelChunk@@QEAAXXZ
    MCAPI void finalizeDeserialization();

    // symbol: ?finalizePostProcessing@LevelChunk@@QEAAXXZ
    MCAPI void finalizePostProcessing();

    // symbol:
    // ?finalizeSubChunkDeserialization@LevelChunk@@QEAAXAEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@V?$buffer_span_mut@USubChunk@@@@@Z
    MCAPI void
    finalizeSubChunkDeserialization(std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&, class buffer_span_mut<struct SubChunk>);

    // symbol: ?findExposedLightningRod@LevelChunk@@QEAA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI std::optional<class BlockPos> findExposedLightningRod(class BlockPos const& pos, class BlockSource& region);

    // symbol: ?findLightningTarget@LevelChunk@@QEAA?AVVec3@@AEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI class Vec3 findLightningTarget(class BlockPos const& pos, class BlockSource& region);

    // symbol: ?generateOriginalLighting@LevelChunk@@QEAA_NAEAVChunkViewSource@@_N@Z
    MCAPI bool generateOriginalLighting(class ChunkViewSource& neighborhood, bool enforceBorderCheck);

    // symbol: ?getAboveTopSolidBlock@LevelChunk@@QEAA?AVChunkLocalHeight@@AEBVChunkBlockPos@@_N11@Z
    MCAPI class ChunkLocalHeight getAboveTopSolidBlock(
        class ChunkBlockPos const& start,
        bool                       dimensionShowsSky,
        bool                       includeWater,
        bool                       includeLeaves
    );

    // symbol:
    // ?getActors@LevelChunk@@QEBAXAEBUActorDefinitionIdentifier@@AEBVAABB@@AEAV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@@Z
    MCAPI void
    getActors(struct ActorDefinitionIdentifier const&, class AABB const& bb, std::vector<class Actor*>& actors) const;

    // symbol: ?getBiome@LevelChunk@@QEBAAEAVBiome@@AEBVChunkBlockPos@@@Z
    MCAPI class Biome& getBiome(class ChunkBlockPos const& pos) const;

    // symbol: ?getBlock@LevelChunk@@QEBAAEBVBlock@@AEBVChunkBlockPos@@@Z
    MCAPI class Block const& getBlock(class ChunkBlockPos const& pos) const;

    // symbol:
    // ?getBlockEntities@LevelChunk@@QEBAAEBV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@XZ
    MCAPI std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>> const& getBlockEntities() const;

    // symbol: ?getBlockEntity@LevelChunk@@QEAAPEAVBlockActor@@AEBVChunkBlockPos@@@Z
    MCAPI class BlockActor* getBlockEntity(class ChunkBlockPos const& localPos);

    // symbol: ?getBorder@LevelChunk@@QEBA_NAEBVChunkBlockPos@@@Z
    MCAPI bool getBorder(class ChunkBlockPos const& pos) const;

    // symbol: ?getBrightness@LevelChunk@@QEBA?AUBrightnessPair@@AEBVChunkBlockPos@@@Z
    MCAPI struct BrightnessPair getBrightness(class ChunkBlockPos const& pos) const;

    // symbol: ?getCachedTemperatureNoise@LevelChunk@@QEAACAEBVChunkBlockPos@@@Z
    MCAPI schar getCachedTemperatureNoise(class ChunkBlockPos const& pos);

    // symbol:
    // ?getChunkEntities@LevelChunk@@QEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
    MCAPI std::vector<class WeakEntityRef>& getChunkEntities();

    // symbol: ?getDimension@LevelChunk@@QEBAAEAVDimension@@XZ
    MCAPI class Dimension& getDimension() const;

    // symbol:
    // ?getEntities@LevelChunk@@QEBAXV?$span@V?$not_null@PEBVActor@@@gsl@@$0?0@gsl@@AEBVAABB@@AEAV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@_N@Z
    MCAPI void getEntities(
        gsl::span<gsl::not_null<class Actor const*>> ignoredEntities,
        class AABB const&                            bb,
        std::vector<class Actor*>&                   entities,
        bool                                         useHitbox
    ) const;

    // symbol:
    // ?getEntities@LevelChunk@@QEBAXW4ActorType@@AEBVAABB@@AEAV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@_N@Z
    MCAPI void
    getEntities(::ActorType type, class AABB const& bb, std::vector<class Actor*>& es, bool ignoreTargetType) const;

    // symbol: ?getEntity@LevelChunk@@QEBAPEAVActor@@AEBUActorUniqueID@@@Z
    MCAPI class Actor* getEntity(struct ActorUniqueID const& actorId) const;

    // symbol: ?getExtraBlock@LevelChunk@@QEBAAEBVBlock@@AEBVChunkBlockPos@@@Z
    MCAPI class Block const& getExtraBlock(class ChunkBlockPos const& localPos) const;

    // symbol: ?getFinalized@LevelChunk@@QEBA?AW4Finalization@1@XZ
    MCAPI ::LevelChunk::Finalization getFinalized() const;

    // symbol: ?getGameEventListenerRegistry@LevelChunk@@QEBAAEAVGameEventListenerRegistry@@XZ
    MCAPI class GameEventListenerRegistry& getGameEventListenerRegistry() const;

    // symbol: ?getGenerator@LevelChunk@@QEBAPEAVChunkSource@@XZ
    MCAPI class ChunkSource* getGenerator() const;

    // symbol: ?getGrassColor@LevelChunk@@QEAAHAEBVChunkBlockPos@@@Z
    MCAPI int getGrassColor(class ChunkBlockPos const& pos);

    // symbol: ?getHeightRange@LevelChunk@@QEBAAEBVDimensionHeightRange@@XZ
    MCAPI class DimensionHeightRange const& getHeightRange() const;

    // symbol: ?getHeightmap@LevelChunk@@QEBAFAEBVChunkBlockPos@@@Z
    MCAPI short getHeightmap(class ChunkBlockPos const& pos) const;

    // symbol: ?getHighestNonAirSubChunkIndex@LevelChunk@@QEBAFXZ
    MCAPI short getHighestNonAirSubChunkIndex() const;

    // symbol: ?getInterpolant@LevelChunk@@QEBAM_K0@Z
    MCAPI float getInterpolant(uint64 x, uint64 y) const;

    // symbol: ?getLastTick@LevelChunk@@QEBAAEBUTick@@XZ
    MCAPI struct Tick const& getLastTick() const;

    // symbol: ?getLevel@LevelChunk@@QEBAAEAVLevel@@XZ
    MCAPI class Level& getLevel() const;

    // symbol: ?getLoadedFormat@LevelChunk@@QEBA?AV?$optional@W4LevelChunkFormat@@@std@@XZ
    MCAPI std::optional<::LevelChunkFormat> getLoadedFormat() const;

    // symbol: ?getMax@LevelChunk@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getMax() const;

    // symbol: ?getMaxAllocatedY@LevelChunk@@QEBAFXZ
    MCAPI short getMaxAllocatedY() const;

    // symbol: ?getMaxSubChunkCnt@LevelChunk@@QEBA_KXZ
    MCAPI uint64 getMaxSubChunkCnt() const;

    // symbol: ?getMaxY@LevelChunk@@QEBAFXZ
    MCAPI short getMaxY() const;

    // symbol: ?getMetaData@LevelChunk@@QEBA?AV?$shared_ptr@$$CBVLevelChunkMetaData@@@std@@XZ
    MCAPI std::shared_ptr<class LevelChunkMetaData const> getMetaData() const;

    // symbol: ?getMetaDataCopy@LevelChunk@@QEBA?AV?$shared_ptr@VLevelChunkMetaData@@@std@@XZ
    MCAPI std::shared_ptr<class LevelChunkMetaData> getMetaDataCopy() const;

    // symbol: ?getMin@LevelChunk@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getMin() const;

    // symbol: ?getMinY@LevelChunk@@QEBAFXZ
    MCAPI short getMinY() const;

    // symbol: ?getNonAirMaxHeight@LevelChunk@@QEBAFXZ
    MCAPI short getNonAirMaxHeight() const;

    // symbol: ?getPosition@LevelChunk@@QEBAAEBVChunkPos@@XZ
    MCAPI class ChunkPos const& getPosition() const;

    // symbol: ?getPreWorldGenHeightmap@LevelChunk@@QEBA?AVChunkLocalHeight@@AEBVChunkBlockPos@@@Z
    MCAPI class ChunkLocalHeight getPreWorldGenHeightmap(class ChunkBlockPos const& pos) const;

    // symbol: ?getPreWorldGenHeightmap@LevelChunk@@QEBA?AVHeightmapWrapper@@XZ
    MCAPI class HeightmapWrapper getPreWorldGenHeightmap() const;

    // symbol:
    // ?getPreservedBlockEntities@LevelChunk@@QEBAAEBV?$vector@V?$shared_ptr@VBlockActor@@@std@@V?$allocator@V?$shared_ptr@VBlockActor@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class BlockActor>> const& getPreservedBlockEntities() const;

    // symbol: ?getRandomTickQueue@LevelChunk@@QEAAAEAVBlockTickingQueue@@XZ
    MCAPI class BlockTickingQueue& getRandomTickQueue();

    // symbol: ?getRawBrightness@LevelChunk@@QEBA?AUBrightness@@AEBVChunkBlockPos@@U2@@Z
    MCAPI struct Brightness getRawBrightness(class ChunkBlockPos const& pos, struct Brightness skyDampen) const;

    // symbol:
    // ?getSpawningAreas@LevelChunk@@QEBAAEBV?$vector@UHardcodedSpawningArea@LevelChunk@@V?$allocator@UHardcodedSpawningArea@LevelChunk@@@std@@@std@@XZ
    MCAPI std::vector<struct LevelChunk::HardcodedSpawningArea> const& getSpawningAreas() const;

    // symbol: ?getState@LevelChunk@@QEBAAEBU?$atomic@W4ChunkState@@@std@@XZ
    MCAPI std::atomic<::ChunkState> const& getState() const;

    // symbol: ?getSubChunk@LevelChunk@@QEAAPEAUSubChunk@@F@Z
    MCAPI struct SubChunk* getSubChunk(short);

    // symbol: ?getSubChunk@LevelChunk@@QEBAPEBUSubChunk@@F@Z
    MCAPI struct SubChunk const* getSubChunk(short) const;

    // symbol: ?getSubChunkAbsoluteIndexFromSubChunkIndex@LevelChunk@@QEBAF_K@Z
    MCAPI short getSubChunkAbsoluteIndexFromSubChunkIndex(uint64) const;

    // symbol: ?getSurfaceBiome@LevelChunk@@QEBAAEBVBiome@@VChunkBlockPos@@@Z
    MCAPI class Biome const& getSurfaceBiome(class ChunkBlockPos pos) const;

    // symbol: ?getTickQueue@LevelChunk@@QEAAAEAVBlockTickingQueue@@XZ
    MCAPI class BlockTickingQueue& getTickQueue();

    // symbol: ?getTickQueue@LevelChunk@@QEBAAEBVBlockTickingQueue@@XZ
    MCAPI class BlockTickingQueue const& getTickQueue() const;

    // symbol: ?getTopRainBlockPos@LevelChunk@@QEAA?BVBlockPos@@AEBVChunkBlockPos@@@Z
    MCAPI class BlockPos const getTopRainBlockPos(class ChunkBlockPos const& pos);

    // symbol: ?getTotalAllocatedHeight@LevelChunk@@QEBA?AVChunkLocalHeight@@XZ
    MCAPI class ChunkLocalHeight getTotalAllocatedHeight() const;

    // symbol: ?hasAnyBiomeStates@LevelChunk@@QEBA_NXZ
    MCAPI bool hasAnyBiomeStates() const;

    // symbol: ?hasBlockEntitiesToSerialize@LevelChunk@@QEBA_NXZ
    MCAPI bool hasBlockEntitiesToSerialize() const;

    // symbol: ?hasEntitiesPendingToLoad@LevelChunk@@QEBA_NXZ
    MCAPI bool hasEntitiesPendingToLoad() const;

    // symbol: ?hasEntitiesToSerialize@LevelChunk@@QEBA_NXZ
    MCAPI bool hasEntitiesToSerialize() const;

    // symbol: ?hasEntity@LevelChunk@@QEAA_NVWeakEntityRef@@@Z
    MCAPI bool hasEntity(class WeakEntityRef entityRef);

    // symbol: ?isAnyBlockEntityDirty@LevelChunk@@QEAA_NXZ
    MCAPI bool isAnyBlockEntityDirty();

    // symbol: ?isBlockInChunk@LevelChunk@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isBlockInChunk(class BlockPos const& block) const;

    // symbol: ?isClientGeneratedChunk@LevelChunk@@QEBA_NXZ
    MCAPI bool isClientGeneratedChunk() const;

    // symbol: ?isEmptyClientChunk@LevelChunk@@QEBA_NXZ
    MCAPI bool isEmptyClientChunk() const;

    // symbol: ?isFullyLoaded@LevelChunk@@QEBA_NXZ
    MCAPI bool isFullyLoaded() const;

    // symbol: ?isNonActorDataDirty@LevelChunk@@QEBA_NXZ
    MCAPI bool isNonActorDataDirty() const;

    // symbol: ?isReadOnly@LevelChunk@@QEBA_NXZ
    MCAPI bool isReadOnly() const;

    // symbol: ?isSkyLit@LevelChunk@@QEBA_NAEBVChunkBlockPos@@@Z
    MCAPI bool isSkyLit(class ChunkBlockPos const& pos) const;

    // symbol: ?legacyDeserializeBlockExtraData@LevelChunk@@QEAAXAEAVIDataInput@@@Z
    MCAPI void legacyDeserializeBlockExtraData(class IDataInput& stream);

    // symbol: ?legacyDeserializeTerrain@LevelChunk@@QEAAXAEAVIDataInput@@@Z
    MCAPI void legacyDeserializeTerrain(class IDataInput& stream);

    // symbol: ?levelChunkHad3dBiomeTagOnLastDeserialize@LevelChunk@@QEBA_NXZ
    MCAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const;

    // symbol: ?markSaveIfNeverSaved@LevelChunk@@QEAAXXZ
    MCAPI void markSaveIfNeverSaved();

    // symbol: ?markSaveNonActorDataIfDirty@LevelChunk@@QEAAXXZ
    MCAPI void markSaveNonActorDataIfDirty();

    // symbol: ?metaDataDirty@LevelChunk@@QEBA_NXZ
    MCAPI bool metaDataDirty() const;

    // symbol: ?needsUpgradeFix@LevelChunk@@QEBA_NXZ
    MCAPI bool needsUpgradeFix() const;

    // symbol: ?needsWallFix@LevelChunk@@QEBA_NXZ
    MCAPI bool needsWallFix() const;

    // symbol: ?nonActorDataNeedsSaving@LevelChunk@@QEBA_NHH@Z
    MCAPI bool nonActorDataNeedsSaving(int wait, int maxWait) const;

    // symbol: ?onBlockEntityChanged@LevelChunk@@QEAAXXZ
    MCAPI void onBlockEntityChanged();

    // symbol: ?onDiscarded@LevelChunk@@QEAAXXZ
    MCAPI void onDiscarded();

    // symbol: ??4LevelChunk@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LevelChunk& operator=(class LevelChunk&& otherChunk);

    // symbol:
    // ?placeCallbacks@LevelChunk@@QEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@V?$shared_ptr@VBlockActor@@@std@@@Z
    MCAPI void placeCallbacks(
        class ChunkBlockPos const&        pos,
        class Block const&                old,
        class Block const&                current,
        class BlockSource*                currentSource,
        std::shared_ptr<class BlockActor> blockEntity
    );

    // symbol: ?populateHeightMapDataForSubChunkPacket@LevelChunk@@QEBAXFAEAUSubChunkPacketData@SubChunkPacket@@@Z
    MCAPI void populateHeightMapDataForSubChunkPacket(short, struct SubChunkPacket::SubChunkPacketData&) const;

    // symbol: ?recomputeHeightMap@LevelChunk@@QEAAX_N@Z
    MCAPI void recomputeHeightMap(bool resetLighting);

    // symbol: ?removeBlockEntity@LevelChunk@@QEAA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z
    MCAPI std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const& blockPos);

    // symbol: ?removeEntityFromChunk@LevelChunk@@QEAA_NVWeakEntityRef@@@Z
    MCAPI bool removeEntityFromChunk(class WeakEntityRef entityRef);

    // symbol: ?removeEntityFromWorld@LevelChunk@@QEAA_NVWeakEntityRef@@@Z
    MCAPI bool removeEntityFromWorld(class WeakEntityRef entityRef);

    // symbol: ?removeHardcodedSpawningArea@LevelChunk@@QEAAXW4HardcodedSpawnAreaType@@@Z
    MCAPI void removeHardcodedSpawningArea(::HardcodedSpawnAreaType type);

    // symbol: ?serialize2DMaps@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serialize2DMaps(class IDataOutput& stream) const;

    // symbol: ?serialize3DMaps@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serialize3DMaps(class IDataOutput& stream) const;

    // symbol: ?serializeBiomeStates@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serializeBiomeStates(class IDataOutput& stream) const;

    // symbol: ?serializeBiomes@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serializeBiomes(class IDataOutput& stream) const;

    // symbol: ?serializeBlockEntities@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serializeBlockEntities(class IDataOutput& stream) const;

    // symbol: ?serializeBlockEntitiesForSubChunk@LevelChunk@@QEBAXAEAVIDataOutput@@AEBVSubChunkPos@@@Z
    MCAPI void serializeBlockEntitiesForSubChunk(class IDataOutput& stream, class SubChunkPos const& subChunkPos) const;

    // symbol: ?serializeBorderBlocks@LevelChunk@@QEBA_NAEAVIDataOutput@@@Z
    MCAPI bool serializeBorderBlocks(class IDataOutput& stream) const;

    // symbol:
    // ?serializeEntities@LevelChunk@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@3@22@Z
    MCAPI void
    serializeEntities(std::string& buffer, bool, std::function<void(std::string const&)>, std::function<void(std::string const&)>, std::function<void(std::string const&)>)
        const;

    // symbol:
    // ?serializeEntityRemovals@LevelChunk@@QEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    MCAPI void serializeEntityRemovals(std::function<void(std::string const&)> callback);

    // symbol: ?serializeFinalization@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serializeFinalization(class IDataOutput& stream) const;

    // symbol: ?serializeHardcodedSpawners@LevelChunk@@QEBA_NAEAVIDataOutput@@@Z
    MCAPI bool serializeHardcodedSpawners(class IDataOutput& stream) const;

    // symbol: ?serializeMetaDataHash@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serializeMetaDataHash(class IDataOutput& stream) const;

    // symbol: ?serializeRandomTicks@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serializeRandomTicks(class IDataOutput& stream) const;

    // symbol: ?serializeTicks@LevelChunk@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serializeTicks(class IDataOutput& stream) const;

    // symbol: ?setAllLegacyBlockIDAndData@LevelChunk@@QEAAXV?$buffer_span@UBlockID@@@@V?$buffer_span@UNibblePair@@@@@Z
    MCAPI void
    setAllLegacyBlockIDAndData(class buffer_span<struct BlockID> ids, class buffer_span<struct NibblePair> data);

    // symbol: ?setBiome2d@LevelChunk@@QEAAXAEBVBiome@@AEBVChunkBlockPos@@@Z
    MCAPI void setBiome2d(class Biome const& biome, class ChunkBlockPos const& pos);

    // symbol: ?setBiomeFromVolume@LevelChunk@@QEAAXAEBV?$VolumeOf@PEBVBiome@@@ClientBlockPipeline@@I@Z
    MCAPI void setBiomeFromVolume(class ClientBlockPipeline::VolumeOf<class Biome const*> const& volume, uint yOffset);

    // symbol:
    // ?setBlock@LevelChunk@@QEAAAEBVBlock@@AEBVChunkBlockPos@@AEBV2@PEAVBlockSource@@V?$shared_ptr@VBlockActor@@@std@@@Z
    MCAPI class Block const& setBlock(
        class ChunkBlockPos const&        pos,
        class Block const&                block,
        class BlockSource*                issuingSource,
        std::shared_ptr<class BlockActor> blockEntity
    );

    // symbol: ?setBlockSimple@LevelChunk@@QEAAXAEBVChunkBlockPos@@AEBVBlock@@@Z
    MCAPI void setBlockSimple(class ChunkBlockPos const& pos, class Block const& block);

    // symbol: ?setBlockVolume@LevelChunk@@QEAAXAEBVBlockVolume@@I@Z
    MCAPI void setBlockVolume(class BlockVolume const& box, uint yOffset);

    // symbol: ?setBorder@LevelChunk@@QEAAXAEBVChunkBlockPos@@_N@Z
    MCAPI void setBorder(class ChunkBlockPos const& pos, bool val);

    // symbol: ?setCachedTemperatureNoise@LevelChunk@@QEAAXAEBVChunkBlockPos@@C@Z
    MCAPI void setCachedTemperatureNoise(class ChunkBlockPos const& pos, schar noiseVal);

    // symbol: ?setChunkInterpolants@LevelChunk@@QEAAXAEBVNeighbors@1@@Z
    MCAPI void setChunkInterpolants(class LevelChunk::Neighbors const&);

    // symbol: ?setExtraBlock@LevelChunk@@QEAAAEBVBlock@@AEBVChunkBlockPos@@AEBV2@PEAVBlockSource@@@Z
    MCAPI class Block const&
    setExtraBlock(class ChunkBlockPos const& localPos, class Block const& block, class BlockSource* issuingSource);

    // symbol: ?setExtraBlockSimple@LevelChunk@@QEAAXAEBVChunkBlockPos@@AEBVBlock@@@Z
    MCAPI void setExtraBlockSimple(class ChunkBlockPos const& pos, class Block const& block);

    // symbol: ?setFinalized@LevelChunk@@QEAAXW4Finalization@1@@Z
    MCAPI void setFinalized(::LevelChunk::Finalization state);

    // symbol: ?setHadSerializedEntities@LevelChunk@@QEAAXXZ
    MCAPI void setHadSerializedEntities();

    // symbol: ?setMetaData@LevelChunk@@QEAAXV?$shared_ptr@VLevelChunkMetaData@@@std@@@Z
    MCAPI void setMetaData(std::shared_ptr<class LevelChunkMetaData>);

    // symbol: ?setPendingEntities@LevelChunk@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setPendingEntities(std::string entitiesData);

    // symbol:
    // ?setPreWorldGenHeightMap@LevelChunk@@QEAAXV?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@@Z
    MCAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>> heightmap);

    // symbol: ?setSaved@LevelChunk@@QEAAXXZ
    MCAPI void setSaved();

    // symbol: ?setUnsaved@LevelChunk@@QEAAXXZ
    MCAPI void setUnsaved();

    // symbol: ?setupRedstoneCircuit@LevelChunk@@QEAAXAEAVBlockSource@@@Z
    MCAPI void setupRedstoneCircuit(class BlockSource& resource);

    // symbol: ?shouldSaveIfNeverSaved@LevelChunk@@QEBA_NXZ
    MCAPI bool shouldSaveIfNeverSaved() const;

    // symbol: ?shouldSaveNonActorDataIfDirty@LevelChunk@@QEBA_NXZ
    MCAPI bool shouldSaveNonActorDataIfDirty() const;

    // symbol: ?subChunkIsSafeReference@LevelChunk@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool subChunkIsSafeReference(class BlockPos const& blockPos) const;

    // symbol: ?tick@LevelChunk@@QEAAXAEAVBlockSource@@AEBUTick@@@Z
    MCAPI void tick(class BlockSource& tickRegion, struct Tick const& tick);

    // symbol: ?tickBlockEntities@LevelChunk@@QEAAXAEAVBlockSource@@@Z
    MCAPI void tickBlockEntities(class BlockSource& tickRegion);

    // symbol: ?tickBlocks@LevelChunk@@QEAAXAEAVBlockSource@@@Z
    MCAPI void tickBlocks(class BlockSource& region);

    // symbol: ?toWorldPos@LevelChunk@@QEBA?AVBlockPos@@AEBVChunkBlockPos@@@Z
    MCAPI class BlockPos toWorldPos(class ChunkBlockPos const&) const;

    // symbol: ?trySpawnSkeletonTrap@LevelChunk@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void trySpawnSkeletonTrap(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?updateLoadedMetaDataHash@LevelChunk@@QEAAXXZ
    MCAPI void updateLoadedMetaDataHash();

    // symbol: ?validateAndFixBiomeStates@LevelChunk@@QEAAXXZ
    MCAPI void validateAndFixBiomeStates();

    // symbol: ?wasTickedThisTick@LevelChunk@@QEBA_NAEBUTick@@@Z
    MCAPI bool wasTickedThisTick(struct Tick const& tick) const;

    // symbol: ??1LevelChunk@@QEAA@XZ
    MCAPI ~LevelChunk();

    // symbol: ?borderBlocksAreEnabled@LevelChunk@@SA_NXZ
    MCAPI static bool borderBlocksAreEnabled();

    // symbol:
    // ?deserialize2DData@LevelChunk@@SA?AV?$tuple@V?$array@VChunkLocalHeight@@$0BAA@@std@@V?$array@UBiomeChunkData@@$0BAA@@2@@std@@AEAVIDataInput@@@Z
    MCAPI static std::tuple<std::array<class ChunkLocalHeight, 256>, std::array<struct BiomeChunkData, 256>>
    deserialize2DData(class IDataInput& stream);

    // symbol:
    // ?deserialize3DBiomes@LevelChunk@@SA?AU?$pair@GV?$vector@V?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@V?$allocator@V?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@@2@@std@@@std@@AEAVIDataInput@@AEBVBiomeRegistry@@GPEAVBiome@@_N@Z
    MCAPI static std::pair<ushort, std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>>
    deserialize3DBiomes(class IDataInput&, class BiomeRegistry const&, ushort, class Biome*, bool);

    // symbol:
    // ?deserialize3DData@LevelChunk@@SA?AV?$tuple@V?$array@VChunkLocalHeight@@$0BAA@@std@@GV?$vector@V?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@V?$allocator@V?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@@2@@2@@std@@AEAVIDataInput@@AEBVBiomeRegistry@@GPEAVBiome@@@Z
    MCAPI static std::tuple<
        std::array<class ChunkLocalHeight, 256>,
        ushort,
        std::vector<std::unique_ptr<class SubChunkStorage<class Biome>>>>
    deserialize3DData(class IDataInput& stream, class BiomeRegistry const& biomeRegistry, ushort, class Biome*);

    // symbol:
    // ?deserializeSubChunk@LevelChunk@@SAXAEAVIDataInput@@AEBVChunkPos@@V?$optional@C@std@@AEAUSubChunk@@AEAVBlockPalette@@V?$optional@PEAUDeserializationChanges@@@5@@Z
    MCAPI static void
    deserializeSubChunk(class IDataInput& stream, class ChunkPos const&, std::optional<schar>, struct SubChunk&, class BlockPalette& blockPalette, std::optional<struct DeserializationChanges*>);

    // symbol: ?flushGarbageCollector@LevelChunk@@SAXXZ
    MCAPI static void flushGarbageCollector();

    // symbol:
    // ?getTagAndSubIndexFromKey@LevelChunk@@SA?AU?$pair@W4LevelChunkTag@@F@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    MCAPI static std::pair<::LevelChunkTag, short> getTagAndSubIndexFromKey(std::string_view key);

    // symbol:
    // ?serializeEntities@LevelChunk@@SAXAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV43@_NV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@3@44@Z
    MCAPI static void
    serializeEntities(std::vector<class WeakEntityRef> const& entities, std::string const&, std::string& buffer, bool, std::function<void(std::string const&)>, std::function<void(std::string const&)>, std::function<void(std::string const&)>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_createBlockEntity@LevelChunk@@IEAA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@PEAVBlockSource@@AEBVBlock@@2@Z
    MCAPI std::shared_ptr<class BlockActor> _createBlockEntity(
        class BlockPos const& block,
        class BlockSource*    currentSource,
        class Block const&    current,
        class Block const&    old
    );

    // symbol:
    // ?_deserializeBlockEntities@LevelChunk@@IEAAXAEAVIDataInput@@AEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@@Z
    MCAPI void
    _deserializeBlockEntities(class IDataInput& stream, std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>&);

    // symbol:
    // ?_deserializeEntity@LevelChunk@@IEAAXAEAVBlockSource@@AEAVIDataInput@@AEAV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@@Z
    MCAPI void
    _deserializeEntity(class BlockSource& source, class IDataInput& stream, std::vector<struct ActorLink>& links);

    // symbol:
    // ?_fixupCorruptedBlockActors@LevelChunk@@IEAAXAEAV?$unordered_map@VChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@U?$hash@VChunkBlockPos@@@3@U?$equal_to@VChunkBlockPos@@@3@V?$allocator@U?$pair@$$CBVChunkBlockPos@@V?$shared_ptr@VBlockActor@@@std@@@std@@@3@@std@@V?$buffer_span_mut@USubChunk@@@@@Z
    MCAPI void
    _fixupCorruptedBlockActors(std::unordered_map<class ChunkBlockPos, std::shared_ptr<class BlockActor>>& deserialized, class buffer_span_mut<struct SubChunk>);

    // symbol: ?_generateOriginalLighting@LevelChunk@@IEAAXAEAVChunkViewSource@@_N@Z
    MCAPI void _generateOriginalLighting(class ChunkViewSource& neighborhood, bool enforceBorderCheck);

    // symbol: ?_generateOriginalLightingSubChunk@LevelChunk@@IEAAXAEAVBlockSource@@_K_N@Z
    MCAPI void _generateOriginalLightingSubChunk(class BlockSource& source, uint64 subchunkIdx, bool);

    // symbol: ?_lightingCallbacks@LevelChunk@@IEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@@Z
    MCAPI void _lightingCallbacks(
        class ChunkBlockPos const& pos,
        class Block const&         old,
        class Block const&         current,
        class BlockSource*         currentSource
    );

    // symbol: ?_placeBlockEntity@LevelChunk@@IEAAXV?$shared_ptr@VBlockActor@@@std@@@Z
    MCAPI void _placeBlockEntity(std::shared_ptr<class BlockActor> te);

    // symbol: ?_recalcHeight@LevelChunk@@IEAA_NAEBVChunkBlockPos@@PEAVBlockSource@@@Z
    MCAPI bool _recalcHeight(class ChunkBlockPos const& start, class BlockSource* source);

    // symbol: ?_removeCallbacks@LevelChunk@@IEAAXAEBVChunkBlockPos@@AEBVBlock@@1PEAVBlockSource@@@Z
    MCAPI void _removeCallbacks(
        class ChunkBlockPos const& pos,
        class Block const&         oldBlock,
        class Block const&         current,
        class BlockSource*         currentSource
    );

    // symbol: ?_setAllBiomesFrom2D@LevelChunk@@IEAAXAEAV?$array@UBiomeChunkData@@$0BAA@@std@@@Z
    MCAPI void _setAllBiomesFrom2D(std::array<struct BiomeChunkData, 256>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addEntityToVolumes@LevelChunk@@AEAAXV?$not_null@PEAVActor@@@gsl@@@Z
    MCAPI void _addEntityToVolumes(gsl::not_null<class Actor*> actor);

    // symbol: ?_deserializeCCsubChunks@LevelChunk@@AEAAXFAEAVStringByteInput@@@Z
    MCAPI void _deserializeCCsubChunks(short index, class StringByteInput& stream);

    // symbol: ?_deserializeSubChunk@LevelChunk@@AEAA_NFAEAVStringByteInput@@@Z
    MCAPI bool _deserializeSubChunk(short index, class StringByteInput& stream);

    // symbol: ?_disableBlockEntityAccessForThisThread@LevelChunk@@AEBAXXZ
    MCAPI void _disableBlockEntityAccessForThisThread() const;

    // symbol: ?_enableBlockEntityAccessForThisThread@LevelChunk@@AEBAXXZ
    MCAPI void _enableBlockEntityAccessForThisThread() const;

    // symbol: ?_fixupCommandBlocksOnTickingQueue@LevelChunk@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _fixupCommandBlocksOnTickingQueue(class BlockSource& tickRegion);

    // symbol: ?_makeUniformBiomes@LevelChunk@@AEAAXAEBVBiome@@@Z
    MCAPI void _makeUniformBiomes(class Biome const& biome);

    // symbol:
    // ?_replaceBiomeStorage@LevelChunk@@AEAAXGV?$unique_ptr@V?$SubChunkStorage@VBiome@@@@U?$default_delete@V?$SubChunkStorage@VBiome@@@@@std@@@std@@AEBV?$UniqueLock@Vshared_mutex@std@@@Threading@Bedrock@@@Z
    MCAPI void _replaceBiomeStorage(
        ushort,
        std::unique_ptr<class SubChunkStorage<class Biome>>            newStorage,
        class Bedrock::Threading::UniqueLock<std::shared_mutex> const& lock
    );

    // symbol: ?_setBiome@LevelChunk@@AEAAXAEBVBiome@@AEBVChunkBlockPos@@_N@Z
    MCAPI void _setBiome(class Biome const& biome, class ChunkBlockPos const& pos, bool);

    // symbol: ?_setBiome@LevelChunk@@AEAAXAEBVBiome@@GGAEBV?$UniqueLock@Vshared_mutex@std@@@Threading@Bedrock@@@Z
    MCAPI void
    _setBiome(class Biome const& biome, ushort, ushort, class Bedrock::Threading::UniqueLock<std::shared_mutex> const&);

    // symbol: ?_tickSnowAndIce@LevelChunk@@AEAAXAEAVBlockSource@@AEAVRandom@@HHAEAVWeather@@@Z
    MCAPI void _tickSnowAndIce(class BlockSource&, class Random&, int, int, class Weather&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?UPDATE_MAP_BIT_SHIFT@LevelChunk@@1HB
    MCAPI static int const UPDATE_MAP_BIT_SHIFT;

    // NOLINTEND
};
