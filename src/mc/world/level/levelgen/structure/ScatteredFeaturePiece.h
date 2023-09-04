#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class ScatteredFeaturePiece : public ::StructurePiece {
public:
    // prevent constructor by default
    ScatteredFeaturePiece& operator=(ScatteredFeaturePiece const&) = delete;
    ScatteredFeaturePiece(ScatteredFeaturePiece const&)            = delete;
    ScatteredFeaturePiece()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScatteredFeaturePiece@@UEAA@XZ
    MCVAPI ~ScatteredFeaturePiece();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0ScatteredFeaturePiece@@IEAA@HHHHHH@Z
    MCAPI ScatteredFeaturePiece(int, int, int, int, int, int);

    // symbol: ?updateAverageGroundHeight@ScatteredFeaturePiece@@IEAA_NAEAVBlockSource@@AEBVBoundingBox@@H@Z
    MCAPI bool updateAverageGroundHeight(class BlockSource&, class BoundingBox const&, int);

    // NOLINTEND
};
