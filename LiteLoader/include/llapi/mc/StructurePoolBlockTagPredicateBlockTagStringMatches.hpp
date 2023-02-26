/**
 * @file  StructurePoolBlockTagPredicateBlockTagStringMatches.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockTagPredicateBlockTagStringMatches.
 *
 */
class StructurePoolBlockTagPredicateBlockTagStringMatches {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKTAGPREDICATEBLOCKTAGSTRINGMATCHES
public:
    class StructurePoolBlockTagPredicateBlockTagStringMatches& operator=(class StructurePoolBlockTagPredicateBlockTagStringMatches const &) = delete;
    StructurePoolBlockTagPredicateBlockTagStringMatches(class StructurePoolBlockTagPredicateBlockTagStringMatches const &) = delete;
    StructurePoolBlockTagPredicateBlockTagStringMatches() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches();
    /**
     * @vftbl  1
     * @symbol  ?test\@StructurePoolBlockTagPredicateBlockTagStringMatches\@\@UEBA_NAEBVBlock\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual bool test(class Block const &, class CompoundTag const &) const;
    /**
     * @symbol  ??0StructurePoolBlockTagPredicateBlockTagStringMatches\@\@QEAA\@AEBVBlock\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI StructurePoolBlockTagPredicateBlockTagStringMatches(class Block const &, std::string, std::string);

};