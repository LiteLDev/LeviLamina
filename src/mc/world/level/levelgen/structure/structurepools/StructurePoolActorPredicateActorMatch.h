#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolActorPredicateActorMatch {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLACTORPREDICATEACTORMATCH
public:
    StructurePoolActorPredicateActorMatch& operator=(StructurePoolActorPredicateActorMatch const&) = delete;
    StructurePoolActorPredicateActorMatch(StructurePoolActorPredicateActorMatch const&)            = delete;
    StructurePoolActorPredicateActorMatch()                                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?test\@StructurePoolActorPredicateActorMatch\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool test(std::string const&) const;
    /**
     * @symbol
     * ??0StructurePoolActorPredicateActorMatch\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI StructurePoolActorPredicateActorMatch(std::string);
};
