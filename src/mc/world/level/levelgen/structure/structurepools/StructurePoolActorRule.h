#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolActorRule {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLACTORRULE
public:
    StructurePoolActorRule& operator=(StructurePoolActorRule const&) = delete;
    StructurePoolActorRule(StructurePoolActorRule const&)            = delete;
    StructurePoolActorRule()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ??0StructurePoolActorRule\@\@QEAA\@$$QEAV?$unique_ptr\@VIStructurePoolActorPredicate\@\@U?$default_delete\@VIStructurePoolActorPredicate\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI StructurePoolActorRule(std::unique_ptr<class IStructurePoolActorPredicate>&&, std::string);
};
