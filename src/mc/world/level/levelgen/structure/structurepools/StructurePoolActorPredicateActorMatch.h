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
    // vIndex: 0
    virtual ~StructurePoolActorPredicateActorMatch() = default;

    // vIndex: 1
    virtual bool test(std::string const& actor) const;

    MCAPI explicit StructurePoolActorPredicateActorMatch(std::string actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool test$(std::string const& actor) const;

    // NOLINTEND
};
