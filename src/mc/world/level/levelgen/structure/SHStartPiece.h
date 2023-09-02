#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/SHStairsDown.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHStartPiece : public ::SHStairsDown {
public:
    // prevent constructor by default
    SHStartPiece& operator=(SHStartPiece const&) = delete;
    SHStartPiece(SHStartPiece const&)            = delete;
    SHStartPiece()                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getType@SHStartPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // NOLINTEND
};
