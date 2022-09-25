/**
 * @file  SHRoomCrossing.hpp
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
 * @brief MC class SHRoomCrossing.
 *
 */
class SHRoomCrossing : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHROOMCROSSING
public:
    class SHRoomCrossing& operator=(class SHRoomCrossing const &) = delete;
    SHRoomCrossing(class SHRoomCrossing const &) = delete;
    SHRoomCrossing() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SHRoomCrossing();
    /**
     * @hash   374237193
     * @vftbl  2
     * @symbol ?getType@SHRoomCrossing@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -602943737
     * @vftbl  3
     * @symbol ?addChildren@SHRoomCrossing@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   -1873790977
     * @vftbl  4
     * @symbol ?postProcess@SHRoomCrossing@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};