#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentPenthouse : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentPenthouse& operator=(OceanMonumentPenthouse const&) = delete;
    OceanMonumentPenthouse(OceanMonumentPenthouse const&)            = delete;
    OceanMonumentPenthouse()                                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getType@OceanMonumentPenthouse@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentPenthouse@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 5, symbol:
    // ?postProcessMobsAt@OceanMonumentPenthouse@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND
};
