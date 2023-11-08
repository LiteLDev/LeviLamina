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
    // vIndex: 0, symbol: __gen_??1SHStartPiece@@UEAA@XZ
    virtual ~SHStartPiece() = default;

    // vIndex: 2, symbol: ?getType@SHStartPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // NOLINTEND
};
