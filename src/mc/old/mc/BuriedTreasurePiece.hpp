/**
 * @file  BuriedTreasurePiece.hpp
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
 * @brief MC class BuriedTreasurePiece.
 *
 */
class BuriedTreasurePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURIEDTREASUREPIECE
public:
    class BuriedTreasurePiece& operator=(class BuriedTreasurePiece const &) = delete;
    BuriedTreasurePiece(class BuriedTreasurePiece const &) = delete;
    BuriedTreasurePiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BuriedTreasurePiece();
    /**
     * @vftbl  2
     * @symbol  ?getType\@BuriedTreasurePiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@BuriedTreasurePiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

//private:
    /**
     * @symbol  ?_isCovered\@BuriedTreasurePiece\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isCovered(class BlockSource const &, class BlockPos const &) const;

private:

};