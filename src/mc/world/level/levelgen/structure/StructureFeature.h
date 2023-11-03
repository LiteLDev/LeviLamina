#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

class StructureFeature {
public:
    // prevent constructor by default
    StructureFeature& operator=(StructureFeature const&);
    StructureFeature(StructureFeature const&);
    StructureFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?shouldAddHardcodedSpawnAreas@StructureFeature@@UEBA_NXZ
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2, symbol: ?shouldPostProcessMobs@StructureFeature@@UEBA_NXZ
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@StructureFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 4, symbol: ?initMobSpawnTypes@StructureFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@AncientCityFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, uint, class IPreliminarySurfaceProvider const&, class Dimension const&) = 0;

    // vIndex: 6, symbol:
    // ?createStructureStart@AncientCityFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&) = 0;

    // vIndex: 7, symbol: ?getStructureAt@StructureFeature@@MEAAPEAVStructureStart@@HHH@Z
    virtual class StructureStart* getStructureAt(int, int, int);

    // symbol: ??1StructureFeature@@UEAA@XZ
    MCVAPI ~StructureFeature();

    // symbol: ??0StructureFeature@@QEAA@IW4StructureFeatureType@@@Z
    MCAPI StructureFeature(uint, ::StructureFeatureType);

    // symbol: ?addHardcodedSpawnAreas@StructureFeature@@QEAAXAEAVLevelChunk@@@Z
    MCAPI void addHardcodedSpawnAreas(class LevelChunk&);

    // symbol:
    // ?chunkStartAtSurfaceLevel@StructureFeature@@QEAA?AVBlockPos@@AEBVIPreliminarySurfaceProvider@@VChunkPos@@H@Z
    MCAPI class BlockPos chunkStartAtSurfaceLevel(class IPreliminarySurfaceProvider const&, class ChunkPos, int);

    // symbol:
    // ?createBlueprints@StructureFeature@@QEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI void
    createBlueprints(class Dimension&, class ChunkPos const&, class BiomeSource const&, class IPreliminarySurfaceProvider const&);

    // symbol: ?debugRender@StructureFeature@@QEAAXXZ
    MCAPI void debugRender();

    // symbol:
    // ?findFarAwayStructures@StructureFeature@@QEAA?AV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@V?$buffer_span@VChunkPos@@@@I@Z
    MCAPI std::vector<class ChunkPos> findFarAwayStructures(class buffer_span<class ChunkPos>, uint);

    // symbol:
    // ?foreachIntersectingStructureStart@StructureFeature@@QEAAXAEBVBoundingBox@@V?$function@$$A6AXAEAVStructureStart@@@Z@std@@@Z
    MCAPI void foreachIntersectingStructureStart(class BoundingBox const&, std::function<void(class StructureStart&)>);

    // symbol: ?garbageCollectBlueprints@StructureFeature@@QEAAXV?$buffer_span@VChunkPos@@@@I@Z
    MCAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>, uint);

    // symbol: ?isInsideBoundingFeature@StructureFeature@@QEAA_NHHH@Z
    MCAPI bool isInsideBoundingFeature(int, int, int);

    // symbol: ?postProcess@StructureFeature@@QEAA_NAEAVBlockSource@@AEAVRandom@@HH@Z
    MCAPI bool postProcess(class BlockSource&, class Random&, int, int);

    // symbol: ?postProcessMobsAt@StructureFeature@@QEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
    MCAPI void postProcessMobsAt(class BlockSource&, int, int, class Random&);

    // symbol: ?waitForFeatureBlueprints@StructureFeature@@QEAAXXZ
    MCAPI void waitForFeatureBlueprints();

    // symbol:
    // ?findNearestFeaturePositionBySpacing@StructureFeature@@SA_NAEAVDimension@@AEBVIPreliminarySurfaceProvider@@AEAV1@AEBV?$optional@VHashedString@@@std@@AEBVBiomeSource@@AEBVBlockPos@@AEAV7@HHH_NH7@Z
    MCAPI static bool findNearestFeaturePositionBySpacing(
        class Dimension&,
        class IPreliminarySurfaceProvider const&,
        class StructureFeature&,
        std::optional<class HashedString> const&,
        class BiomeSource const&,
        class BlockPos const&,
        class BlockPos&,
        int,
        int,
        int,
        bool,
        int,
        bool
    );

    // symbol:
    // ?getBiomeForFeatureGeneration@StructureFeature@@SA?AU?$pair@$$CBVBlockPos@@PEBVBiome@@@std@@AEBVBiomeSource@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI static std::pair<class BlockPos const, class Biome const*>
    getBiomeForFeatureGeneration(class BiomeSource const&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

    // symbol: ?getChunkPosInSpace@StructureFeature@@SA?AVChunkPos@@AEBV2@AEAVRandom@@IHHH_N@Z
    MCAPI static class ChunkPos getChunkPosInSpace(class ChunkPos const&, class Random&, uint, int, int, int, bool);

    // symbol: ?setRandomSeedFor@StructureFeature@@SAXAEAVRandom@@HHHI@Z
    MCAPI static void setRandomSeedFor(class Random&, int, int, int, uint);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?addFeature@StructureFeature@@IEAAXAEAVDimension@@AEAVRandom@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI void
    addFeature(class Dimension&, class Random&, class ChunkPos const&, class BiomeSource const&, class IPreliminarySurfaceProvider const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doesBiomeHaveTag@StructureFeature@@CA_NAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@AEBVBiomeSource@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@AEBVHashedString@@@Z
    MCAPI static bool
    _doesBiomeHaveTag(class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&, class BiomeSource const&, class ChunkPos const&, class IPreliminarySurfaceProvider const&, class HashedString const&);

    // NOLINTEND
};
