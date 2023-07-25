#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class BuriedTreasurePiece : public ::StructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURIEDTREASUREPIECE
public:
    BuriedTreasurePiece& operator=(BuriedTreasurePiece const&) = delete;
    BuriedTreasurePiece(BuriedTreasurePiece const&)            = delete;
    BuriedTreasurePiece()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@BuriedTreasurePiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@BuriedTreasurePiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // private:
    /**
     * @symbol ?_isCovered\@BuriedTreasurePiece\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isCovered(class BlockSource const&, class BlockPos const&) const;

private:
};
