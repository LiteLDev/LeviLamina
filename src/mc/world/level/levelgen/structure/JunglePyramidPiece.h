#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class JunglePyramidPiece : public ::ScatteredFeaturePiece {
public:
    // prevent constructor by default
    JunglePyramidPiece& operator=(JunglePyramidPiece const&) = delete;
    JunglePyramidPiece(JunglePyramidPiece const&)            = delete;
    JunglePyramidPiece()                                     = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getType@JunglePyramidPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@JunglePyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND
};
