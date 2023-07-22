/**
 * @file  StructurePoolBlockPredicateTrueIfFound.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateTrueIfFound.
 *
 */
class StructurePoolBlockPredicateTrueIfFound {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATETRUEIFFOUND
public:
    class StructurePoolBlockPredicateTrueIfFound& operator=(class StructurePoolBlockPredicateTrueIfFound const &) = delete;
    StructurePoolBlockPredicateTrueIfFound(class StructurePoolBlockPredicateTrueIfFound const &) = delete;
    StructurePoolBlockPredicateTrueIfFound() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructurePoolBlockPredicateTrueIfFound();
    /**
     * @vftbl  1
     * @symbol  ?test\@StructurePoolBlockPredicateTrueIfFound\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vftbl  2
     * @symbol  ?test\@StructurePoolBlockPredicateTrueIfFound\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @symbol  ??0StructurePoolBlockPredicateTrueIfFound\@\@QEAA\@AEBV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@M\@Z
     */
    MCAPI StructurePoolBlockPredicateTrueIfFound(class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const &, float);

};