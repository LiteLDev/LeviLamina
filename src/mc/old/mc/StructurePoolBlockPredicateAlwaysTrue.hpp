/**
 * @file  StructurePoolBlockPredicateAlwaysTrue.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateAlwaysTrue.
 *
 */
class StructurePoolBlockPredicateAlwaysTrue {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUE
public:
    class StructurePoolBlockPredicateAlwaysTrue& operator=(class StructurePoolBlockPredicateAlwaysTrue const &) = delete;
    StructurePoolBlockPredicateAlwaysTrue(class StructurePoolBlockPredicateAlwaysTrue const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUE
    /**
     * @symbol  ?test\@StructurePoolBlockPredicateAlwaysTrue\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    MCVAPI bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @symbol  ?test\@StructurePoolBlockPredicateAlwaysTrue\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    MCVAPI bool test(class Block const &, class Randomize &) const;
#endif
    /**
     * @symbol  ??0StructurePoolBlockPredicateAlwaysTrue\@\@QEAA\@XZ
     */
    MCAPI StructurePoolBlockPredicateAlwaysTrue();

};