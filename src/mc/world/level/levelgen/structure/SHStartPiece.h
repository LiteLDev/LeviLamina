#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/SHStairsDown.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHStartPiece : public ::SHStairsDown {
public:
    // prevent constructor by default
    SHStartPiece& operator=(SHStartPiece const&);
    SHStartPiece(SHStartPiece const&);
    SHStartPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SHStartPiece();

    // vIndex: 2, symbol: ?getType@SHStartPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // NOLINTEND
};
