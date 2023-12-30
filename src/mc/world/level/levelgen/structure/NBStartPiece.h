#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NBBridgeCrossing.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBStartPiece : public ::NBBridgeCrossing {
public:
    // prevent constructor by default
    NBStartPiece& operator=(NBStartPiece const&);
    NBStartPiece(NBStartPiece const&);
    NBStartPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NBStartPiece@@UEAA@XZ
    virtual ~NBStartPiece() = default;

    // vIndex: 2, symbol: ?getType@NBStartPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // symbol: ??0NBStartPiece@@QEAA@AEAVRandom@@HH@Z
    MCAPI NBStartPiece(class Random& random, int west, int north);

    // NOLINTEND
};
