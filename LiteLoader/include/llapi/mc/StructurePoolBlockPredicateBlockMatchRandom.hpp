/**
 * @file  StructurePoolBlockPredicateBlockMatchRandom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateBlockMatchRandom.
 *
 */
class StructurePoolBlockPredicateBlockMatchRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCHRANDOM
public:
    class StructurePoolBlockPredicateBlockMatchRandom& operator=(class StructurePoolBlockPredicateBlockMatchRandom const &) = delete;
    StructurePoolBlockPredicateBlockMatchRandom(class StructurePoolBlockPredicateBlockMatchRandom const &) = delete;
    StructurePoolBlockPredicateBlockMatchRandom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructurePoolBlockPredicateBlockMatchRandom();
    /**
     * @vftbl  1
     * @symbol  ?test\@StructurePoolBlockPredicateBlockMatchRandom\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vftbl  2
     * @symbol  ?test\@StructurePoolBlockPredicateBlockMatchRandom\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @symbol  ??0StructurePoolBlockPredicateBlockMatchRandom\@\@QEAA\@AEBVBlock\@\@M\@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatchRandom(class Block const &, float);

};