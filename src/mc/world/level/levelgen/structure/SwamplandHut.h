#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SwamplandHut : public ::ScatteredFeaturePiece {
public:
    // prevent constructor by default
    SwamplandHut& operator=(SwamplandHut const&);
    SwamplandHut(SwamplandHut const&);
    SwamplandHut();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SwamplandHut@@UEAA@XZ
    virtual ~SwamplandHut() = default;

    // vIndex: 2, symbol: ?getType@SwamplandHut@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@SwamplandHut@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5, symbol: ?postProcessMobsAt@SwamplandHut@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@SwamplandHut@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

    // symbol: ??0SwamplandHut@@QEAA@FHH@Z
    MCAPI SwamplandHut(short seaLevel, int west, int north);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?placeCauldron@SwamplandHut@@IEAAXAEAVBlockSource@@AEAVRandom@@HHHAEBVBoundingBox@@@Z
    MCAPI void placeCauldron(
        class BlockSource&       region,
        class Random&            random,
        int                      x,
        int                      y,
        int                      z,
        class BoundingBox const& chunkBB
    );

    // NOLINTEND
};
