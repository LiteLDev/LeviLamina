/**
 * @file  MineshaftRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MineshaftPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MineshaftRoom.
 *
 */
class MineshaftRoom : public MineshaftPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTROOM
public:
    class MineshaftRoom& operator=(class MineshaftRoom const &) = delete;
    MineshaftRoom(class MineshaftRoom const &) = delete;
    MineshaftRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MineshaftRoom();
    /**
     * @hash   702250804
     * @vftbl  1
     * @symbol ?moveBoundingBox@MineshaftRoom@@UEAAXHHH@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @hash   1002650985
     * @vftbl  2
     * @symbol ?getType@MineshaftRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   904304791
     * @vftbl  3
     * @symbol ?addChildren@MineshaftRoom@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   1890292383
     * @vftbl  4
     * @symbol ?postProcess@MineshaftRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -708500449
     * @symbol ??0MineshaftRoom@@QEAA@AEAUMineshaftData@@HAEAVRandom@@HH@Z
     */
    MCAPI MineshaftRoom(struct MineshaftData &, int, class Random &, int, int);

};