/**
 * @file  SHStraightStairsDown.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHStraightStairsDown.
 *
 */
class SHStraightStairsDown : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHSTRAIGHTSTAIRSDOWN
public:
    class SHStraightStairsDown& operator=(class SHStraightStairsDown const &) = delete;
    SHStraightStairsDown(class SHStraightStairsDown const &) = delete;
    SHStraightStairsDown() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SHStraightStairsDown();
    /**
     * @hash   968648592
     * @vftbl  2
     * @symbol ?getType@SHStraightStairsDown@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   259613888
     * @vftbl  3
     * @symbol ?addChildren@SHStraightStairsDown@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   -1640713176
     * @vftbl  4
     * @symbol ?postProcess@SHStraightStairsDown@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};