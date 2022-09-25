/**
 * @file  StructurePoolBlockPredicateBlockMatch.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateBlockMatch.
 *
 */
class StructurePoolBlockPredicateBlockMatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCH
public:
    class StructurePoolBlockPredicateBlockMatch& operator=(class StructurePoolBlockPredicateBlockMatch const &) = delete;
    StructurePoolBlockPredicateBlockMatch(class StructurePoolBlockPredicateBlockMatch const &) = delete;
    StructurePoolBlockPredicateBlockMatch() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StructurePoolBlockPredicateBlockMatch();
    /**
     * @hash   259796536
     * @vftbl  1
     * @symbol ?test@StructurePoolBlockPredicateBlockMatch@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @hash   411970568
     * @vftbl  2
     * @symbol ?test@StructurePoolBlockPredicateBlockMatch@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @hash   1667406158
     * @symbol ??0StructurePoolBlockPredicateBlockMatch@@QEAA@AEBVBlock@@@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatch(class Block const &);

};