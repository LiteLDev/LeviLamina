#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolActorPredicate.h"

class StructurePoolActorPredicateActorMatch : public ::IStructurePoolActorPredicate {

public:
    // prevent constructor by default
    StructurePoolActorPredicateActorMatch& operator=(StructurePoolActorPredicateActorMatch const&) = delete;
    StructurePoolActorPredicateActorMatch(StructurePoolActorPredicateActorMatch const&)            = delete;
    StructurePoolActorPredicateActorMatch()                                                        = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
