#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolActorPredicateActorMatch {

public:
    // prevent constructor by default
    StructurePoolActorPredicateActorMatch& operator=(StructurePoolActorPredicateActorMatch const&) = delete;
    StructurePoolActorPredicateActorMatch(StructurePoolActorPredicateActorMatch const&)            = delete;
    StructurePoolActorPredicateActorMatch()                                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?test\@StructurePoolActorPredicateActorMatch\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool test(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ??0StructurePoolActorPredicateActorMatch\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI StructurePoolActorPredicateActorMatch(std::string); // NOLINT
};
