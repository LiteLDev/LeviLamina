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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SwamplandHut();

    // vIndex: 2, symbol: ?getType@SwamplandHut@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@SwamplandHut@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 5, symbol: ?postProcessMobsAt@SwamplandHut@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@SwamplandHut@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?placeCauldron@SwamplandHut@@IEAAXAEAVBlockSource@@AEAVRandom@@HHHAEBVBoundingBox@@@Z
    MCAPI void placeCauldron(class BlockSource&, class Random&, int, int, int, class BoundingBox const&);

    // NOLINTEND
};
