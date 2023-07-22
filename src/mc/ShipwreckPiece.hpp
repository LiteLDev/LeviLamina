/**
 * @file  ShipwreckPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShipwreckPiece.
 *
 */
class ShipwreckPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIPWRECKPIECE
public:
    class ShipwreckPiece& operator=(class ShipwreckPiece const &) = delete;
    ShipwreckPiece(class ShipwreckPiece const &) = delete;
    ShipwreckPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShipwreckPiece();
    /**
     * @vftbl  2
     * @symbol  ?getType\@ShipwreckPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@ShipwreckPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

//private:
    /**
     * @symbol  ?_calculateTargetPos\@ShipwreckPiece\@\@CA?AVBlockPos\@\@AEAVBlockSource\@\@V2\@W4Rotation\@\@1\@Z
     */
    MCAPI static class BlockPos _calculateTargetPos(class BlockSource &, class BlockPos, enum class Rotation, class BlockPos);
    /**
     * @symbol  ?_calculateTargetPosLegacy\@ShipwreckPiece\@\@CA?AVBlockPos\@\@AEAVBlockSource\@\@V2\@W4Rotation\@\@1\@Z
     */
    MCAPI static class BlockPos _calculateTargetPosLegacy(class BlockSource &, class BlockPos, enum class Rotation, class BlockPos);

private:
    /**
     * @symbol  ?STRUCTURE_SHIPWRECK_TYPES\@ShipwreckPiece\@\@0QBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_SHIPWRECK_TYPES[];

};