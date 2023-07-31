#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class ShipwreckPiece : public ::StructurePiece {

public:
    // prevent constructor by default
    ShipwreckPiece& operator=(ShipwreckPiece const&) = delete;
    ShipwreckPiece(ShipwreckPiece const&)            = delete;
    ShipwreckPiece()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@ShipwreckPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@ShipwreckPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_calculateTargetPos\@ShipwreckPiece\@\@CA?AVBlockPos\@\@AEAVBlockSource\@\@V2\@W4Rotation\@\@1\@Z
     */
    MCAPI static class BlockPos
    _calculateTargetPos(class BlockSource&, class BlockPos, enum class Rotation, class BlockPos);
    /**
     * @symbol ?_calculateTargetPosLegacy\@ShipwreckPiece\@\@CA?AVBlockPos\@\@AEAVBlockSource\@\@V2\@W4Rotation\@\@1\@Z
     */
    MCAPI static class BlockPos
    _calculateTargetPosLegacy(class BlockSource&, class BlockPos, enum class Rotation, class BlockPos);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?STRUCTURE_SHIPWRECK_TYPES\@ShipwreckPiece\@\@0QBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_SHIPWRECK_TYPES[];
    // NOLINTEND
};
