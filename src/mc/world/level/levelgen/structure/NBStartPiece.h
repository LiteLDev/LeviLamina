#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NBBridgeCrossing.h"

class NBStartPiece : public ::NBBridgeCrossing {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBSTARTPIECE
public:
    NBStartPiece& operator=(NBStartPiece const&) = delete;
    NBStartPiece(NBStartPiece const&)            = delete;
    NBStartPiece()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@NBStartPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @symbol ??0NBStartPiece\@\@QEAA\@AEAVRandom\@\@HH\@Z
     */
    MCAPI NBStartPiece(class Random&, int, int);
};
