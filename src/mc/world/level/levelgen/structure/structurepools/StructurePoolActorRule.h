#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolActorRule {
public:
    // prevent constructor by default
    StructurePoolActorRule& operator=(StructurePoolActorRule const&);
    StructurePoolActorRule(StructurePoolActorRule const&);
    StructurePoolActorRule();

public:
    // NOLINTBEGIN
    MCAPI StructurePoolActorRule(
        std::unique_ptr<class IStructurePoolActorPredicate>&& sourceActorPredicate,
        std::string                                           resultActor
    );

    MCAPI bool processRule(std::string const& sourceActor, std::string& outputActor) const;

    MCAPI ~StructurePoolActorRule();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void*
    ctor$(std::unique_ptr<class IStructurePoolActorPredicate>&& sourceActorPredicate, std::string resultActor);

    MCAPI void dtor$();

    // NOLINTEND
};
