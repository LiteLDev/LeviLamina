#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolActorPredicate.h"

class StructurePoolActorPredicateActorMatch : public ::IStructurePoolActorPredicate {
public:
    // prevent constructor by default
    StructurePoolActorPredicateActorMatch& operator=(StructurePoolActorPredicateActorMatch const&);
    StructurePoolActorPredicateActorMatch(StructurePoolActorPredicateActorMatch const&);
    StructurePoolActorPredicateActorMatch();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructurePoolActorPredicateActorMatch@@UEAA@XZ
    virtual ~StructurePoolActorPredicateActorMatch() = default;

    // vIndex: 1, symbol:
    // ?test@StructurePoolActorPredicateActorMatch@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool test(std::string const& actor) const;

    // symbol:
    // ??0StructurePoolActorPredicateActorMatch@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit StructurePoolActorPredicateActorMatch(std::string actor);

    // NOLINTEND
};
