/**
 * @file  StructurePoolBlockPredicateAxisAlignedPosition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateAxisAlignedPosition.
 *
 */
class StructurePoolBlockPredicateAxisAlignedPosition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
public:
    class StructurePoolBlockPredicateAxisAlignedPosition& operator=(class StructurePoolBlockPredicateAxisAlignedPosition const &) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition(class StructurePoolBlockPredicateAxisAlignedPosition const &) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StructurePoolBlockPredicateAxisAlignedPosition();
    /**
     * @hash   764894902
     * @vftbl  1
     * @symbol ?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @hash   1820619434
     * @vftbl  2
     * @symbol ?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @hash   -782432787
     * @symbol ??0StructurePoolBlockPredicateAxisAlignedPosition@@QEAA@MMHHE@Z
     */
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, unsigned char);

};