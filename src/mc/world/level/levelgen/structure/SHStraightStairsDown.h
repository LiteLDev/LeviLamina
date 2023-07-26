#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class SHStraightStairsDown : public ::StructurePiece {

public:
    // prevent constructor by default
    SHStraightStairsDown& operator=(SHStraightStairsDown const&) = delete;
    SHStraightStairsDown(SHStraightStairsDown const&)            = delete;
    SHStraightStairsDown()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getType\@SHStraightStairsDown\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?addChildren\@SHStraightStairsDown\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void
    addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?postProcess\@SHStraightStairsDown\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
};
