#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/SHStairsDown.h"

class SHStartPiece : public ::SHStairsDown {

public:
    // prevent constructor by default
    SHStartPiece& operator=(SHStartPiece const&) = delete;
    SHStartPiece(SHStartPiece const&)            = delete;
    SHStartPiece()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@SHStartPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    // NOLINTEND
};
