#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NBBridgeCrossing.h"

class NBStartPiece : public ::NBBridgeCrossing {

public:
    // prevent constructor by default
    NBStartPiece& operator=(NBStartPiece const&) = delete;
    NBStartPiece(NBStartPiece const&)            = delete;
    NBStartPiece()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getType\@NBStartPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const; // NOLINT
    /**
     * @symbol ??0NBStartPiece\@\@QEAA\@AEAVRandom\@\@HH\@Z
     */
    MCAPI NBStartPiece(class Random&, int, int); // NOLINT
};
