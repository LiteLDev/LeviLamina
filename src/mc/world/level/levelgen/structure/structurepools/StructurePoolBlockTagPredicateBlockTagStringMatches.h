#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockTagPredicateBlockTagStringMatches {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKTAGPREDICATEBLOCKTAGSTRINGMATCHES
public:
    StructurePoolBlockTagPredicateBlockTagStringMatches&
    operator=(StructurePoolBlockTagPredicateBlockTagStringMatches const&) = delete;
    StructurePoolBlockTagPredicateBlockTagStringMatches(StructurePoolBlockTagPredicateBlockTagStringMatches const&) =
        delete;
    StructurePoolBlockTagPredicateBlockTagStringMatches() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockTagPredicateBlockTagStringMatches\@\@UEBA_NAEBVBlock\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual bool test(class Block const&, class CompoundTag const&) const;
    /**
     * @symbol
     * ??0StructurePoolBlockTagPredicateBlockTagStringMatches\@\@QEAA\@AEBVBlock\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI StructurePoolBlockTagPredicateBlockTagStringMatches(class Block const&, std::string, std::string);
};
