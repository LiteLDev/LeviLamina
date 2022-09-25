/**
 * @file  MineshaftPiece.hpp
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
 * @brief MC class MineshaftPiece.
 *
 */
class MineshaftPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTPIECE
public:
    class MineshaftPiece& operator=(class MineshaftPiece const &) = delete;
    MineshaftPiece(class MineshaftPiece const &) = delete;
    MineshaftPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MineshaftPiece();
    /**
     * @hash   317121085
     * @vftbl  6
     * @symbol ?isInInvalidLocation@MineshaftPiece@@UEAA_NAEAVBlockSource@@AEBVBoundingBox@@@Z
     */
    virtual bool isInInvalidLocation(class BlockSource &, class BoundingBox const &);
    /**
     * @hash   -2056361886
     * @vftbl  10
     * @symbol ?canBeReplaced@MineshaftPiece@@UEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
     */
    virtual bool canBeReplaced(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @hash   -2003115679
     * @symbol ?createRandomShaftPiece@MineshaftPiece@@QEAA?AV?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@AEAUMineshaftData@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
     */
    MCAPI std::unique_ptr<class StructurePiece> createRandomShaftPiece(struct MineshaftData &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);
    /**
     * @hash   -883413973
     * @symbol ?generateAndAddPiece@MineshaftPiece@@QEAAPEAVStructurePiece@@AEAV2@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH@Z
     */
    MCAPI class StructurePiece * generateAndAddPiece(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);
    /**
     * @hash   -684979884
     * @symbol ?setPlanksBlock@MineshaftPiece@@QEAAXAEAVBlockSource@@AEBVBlock@@HHH@Z
     */
    MCAPI void setPlanksBlock(class BlockSource &, class Block const &, int, int, int);

};